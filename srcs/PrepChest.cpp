#include "PrepChest.hpp"

PrepChest::PrepChest()
{
    openMap("map/map_with_pieces.chest", true);
    openMap("map/empty_map.chest", false);
    //dispVec(fullMap);
    //dispVec(emptyMap);
    setPieces();
}

void PrepChest::openMap(std::string filePath, bool type)
{
    std::string line;
    std::ifstream file(filePath);

    if (file.is_open())
    {
        while (getline(file, line))
        {
            if (type)
                fullMap.push_back(line);
            else
                emptyMap.push_back(line);
        }
        file.close();
    }
    else
        throw std::runtime_error("Can't open file, now exiting ...");
}

std::string PrepChest::lookColor(int x, int y)
{
    //std::cout << "|" << tColoremptyMap[x][y] << "|" << x << " = x && " << y << " = y" << std::endl;
    if (emptyMap[x][y] == '.')
        return "white";
    else if (emptyMap[x][y] == '*')
        return "black";
    else
        throw std::runtime_error("Can't load plate or plate is not valid, exiting ...");
}

void PrepChest::setPieceType(Piece *piece)
{
    char cpy = tolower(piece->getType());

    //std::cout << "hey " << cpy << std::endl;
    if (cpy)
    {
        if (cpy == 'r')
            piece->setName("Rook");
        else if (cpy == 'n')
            piece->setName("Knight");
        else if (cpy == 'b')
            piece->setName("Bishop");
        else if (cpy == 'q')
            piece->setName("Queen");
        else if (cpy == 'k')
            piece->setName("King");
        else if (cpy >= 'c' && cpy <= 'j')
        {
            piece->setFstMove(false);
            piece->setName("Pawn");
        }
    }
    else
        throw std::runtime_error("Not a valid piece, now exiting ...");
}

Piece *PrepChest::createPiece(int i, int j, char c, char team)
{
    piece = new Piece();
    piece->setX(i);
    piece->setY(j);
    piece->setStatus(true);
    piece->setTileColor(lookColor(i, j));
    piece->setType(c);
    piece->setFstMove(true);
    setPieceType(piece);
    if (team == 'l')
        piece->setTeam("white");
    else if (team == 'u')
        piece->setTeam("black");
    else
        throw std::runtime_error("Team doesn't exist");
    return piece;
}

void PrepChest::setPieces()
{
    for (size_t i = 1; i != fullMap.size(); i++)
        for (size_t j = 1; j != fullMap[i].size(); j++)
            if (isupper(fullMap[i][j]))
                allPieces.push_back(createPiece(i, j, fullMap[i][j], 'l'));
            else if (islower(fullMap[i][j]))
                allPieces.push_back(createPiece(i, j, fullMap[i][j], 'u'));
    //dispVec(fullMap);
    //dumpPieces();
    dumpPiece(allPieces[1]);
}

void PrepChest::dumpPiece(Piece *piece)
{
    if (piece)
    {
        std::cout << "X = " << piece->getX()
                  << "\nY = " << piece->getY()
                  << "\nStatus = " << piece->getStatus()
                  << "\nTile color = " << piece->getTileColor()
                  << "\nName = " << piece->getName()
                  << "\nType = " << piece->getType()
                  << "\nTeam = " << piece->getTeam()
                  << "\n------------------------" << std::endl;
    }
}

void PrepChest::dumpPieces()
{
    for (size_t i = 0; i != allPieces.size(); i++)
    {
        std::cout << "X = " << allPieces[i]->getX()
                  << "\nY = " << allPieces[i]->getY()
                  << "\nStatus = " << allPieces[i]->getStatus()
                  << "\nTile color = " << allPieces[i]->getTileColor()
                  << "\nName = " << allPieces[i]->getName()
                  << "\nType = " << allPieces[i]->getType()
                  << "\nTeam = " << piece->getTeam()
                  << "\n------------------------" << std::endl;
    }
}

PrepChest::~PrepChest() {}