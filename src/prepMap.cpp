#include "prepMap.hpp"

void dumpMap(vector<string> *map)
{
    cout << "---------------" << endl;
    for (string line : *map)
        cout << line << endl;
    cout << "---------------" << endl;
}

void openEmptyMap(vector<string> *emptyMap)
{
    std::string line;
    std::ifstream file("maps/blueprint/empty_map.chess");

    if (file.is_open())
    {
        while (getline(file, line) && line != "- white")
        {
            emptyMap->push_back(line);
        }
        file.close();
    }
    else
        throw std::runtime_error("Can't open file, now exiting ...");
}

void initSpePieces(vector<class Piece> *vecTeam, char team, int i, int j, vector<string> *mainMap)
{
    switch (j)
    {
    case 1: case 8:
        vecTeam->push_back(*(new Rook(j, i, j, team)));
        (*mainMap)[i][j] = 'R';
        break;
    case 2: case 7:
        vecTeam->push_back(*(new Knight(j, i, j, team)));
        (*mainMap)[i][j] = 'N';
        break;
    case 3: case 6:
        vecTeam->push_back(*(new Bishop(j, i, j, team)));
        (*mainMap)[i][j] = 'B';
        break;
    case 4:
        vecTeam->push_back(*(new Queen(j, i, j, team)));
        (*mainMap)[i][j] = 'Q';
        break;
    case 5:
        vecTeam->push_back(*(new King(j, i, j, team)));
        (*mainMap)[i][j] = 'K';
        break;
    default:
        break;
    }
}

void initPieces(vector<string> *mainMap, vector<class Piece> *whiteTeam, vector<class Piece> *blackTeam)
{
    for (size_t i = 1; i != mainMap->size(); i++)
    {
        if (i == 2 || i == 7)
            for (size_t j = 1; j != (*mainMap)[i].length() - 1; j++)
                i == 2 ? blackTeam->push_back(*(new Pawn(j, i, j, 'B'))), (*mainMap)[i][j] = 'P'
                        : (*mainMap)[i][j] = 'P', whiteTeam->push_back(*(new Pawn(j, i, j, 'W')));
        else if (i == 1 || i == 8)
            for (size_t j = 1; j != (*mainMap)[i].length() - 1; j++)
                i == 1 ? initSpePieces(blackTeam, 'B', i, j, mainMap)
                        : initSpePieces(whiteTeam, 'W', i, j, mainMap);
    }
}