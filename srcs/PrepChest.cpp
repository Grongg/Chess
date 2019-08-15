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
    //std::cout << "|" << emptyMap[x][y] << "|" << x << " = x && " << y << " = y" << std::endl;
    if (emptyMap[x][y] == '.')
        return "white";
    else if (emptyMap[x][y] == '*')
        return "black";
    else
        throw std::runtime_error("Can't load plate or plate is not valid, exiting ...");
}

void PrepChest::setPieceType(Piece *piece)
{
    char cpy = tolower(piece->getName());

    //std::cout << "hey " << cpy << std::endl;
    if (cpy)
    {
        if (cpy == 't')
            piece->setType("tour");
        else if (cpy == 'c')
            piece->setType("cavalier");
        else if (cpy == 'f')
            piece->setType("fou");
        else if (cpy == 'd')
            piece->setType("dame");
        else if (cpy == 'r')
            piece->setType("roi");
        else if (cpy == 'a' || cpy == 'b' || cpy == 'e' || (cpy >= 'g' && cpy <= 'k'))
        {
            piece->setFstMove(false);
            piece->setType("pion");
        }
    }
    else
        throw std::runtime_error("Not a valid piece, now exiting ...");
}

Piece *PrepChest::createPiece(int i, int j, char c)
{
    piece = new Piece();
    piece->setX(i);
    piece->setY(j);
    piece->setStatus(true);
    piece->setColor(lookColor(i, j));
    piece->setName(c);
    piece->setFstMove(true);
    setPieceType(piece);
    return piece;
}

void PrepChest::setPieces()
{
    for (size_t i = 1; i != fullMap.size(); i++)
        for (size_t j = 1; j != fullMap[i].size(); j++)
            if (isupper(fullMap[i][j]))
                allPieces.push_back(createPiece(i, j, fullMap[i][j]));
            else if (islower(fullMap[i][j]))
                allPieces.push_back(createPiece(i, j, fullMap[i][j]));
    //dispVec(fullMap);
    //dumpPieces();
    //dumpPiece(allPieces[0]);
}

void PrepChest::dumpPiece(Piece *piece)
{
    if (piece)
    {
        std::cout << "x = " << piece->getX()
                  << "\ny = " << piece->getY()
                  << "\nstatus = " << piece->getStatus()
                  << "\ncolor = " << piece->getColor()
                  << "\nname = " << piece->getName()
                  << "\ntype = " << piece->getType()
                  << "\n------------------------" << std::endl;
    }
}

void PrepChest::dumpPieces()
{
    for (size_t i = 0; i != allPieces.size(); i++)
    {
        std::cout << "x = " << allPieces[i]->getX()
                  << "\ny = " << allPieces[i]->getY()
                  << "\nstatus = " << allPieces[i]->getStatus()
                  << "\ncolor = " << allPieces[i]->getColor()
                  << "\nname = " << allPieces[i]->getName()
                  << "\ntype = " << allPieces[i]->getType()
                  << "\n------------------------" << std::endl;
    }
}

PrepChest::~PrepChest() {}