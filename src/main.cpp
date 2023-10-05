#include "main.hpp"

void initGame(vector<string> *mainMap)
{

    openEmptyMap(&emptyMap);
    copy(emptyMap.begin(), emptyMap.end(), back_inserter(*mainMap));
    initPieces(mainMap, &whiteTeam, &blackTeam);
    dumpMap(mainMap);
}

void dispMapForPlayer(vector<string> *mainMap, int *player)
{
    for (size_t i = 0, ctn = 0; i < mainMap->size(); i++, ctn++)
    {
        for (size_t j = 0; j < (*mainMap)[i].length(); j++)
        {
            if ((*mainMap)[i][j] == '#')
                cout << "\033[0;30m # \033[0m";
            else if ((*mainMap)[i][j] == '-')
                cout << "\033[1;47m   \033[0m";
            else if ((*mainMap)[i][j] == '*')
                cout << "\033[1;40m   \033[0m";
            else
            {
                if (*player == 1 && (i == 7 || i == 8))
                {
                    if (i % 2 == 0)
                    {
                        if (j % 2 == 0)
                            cout << "\033[1;47;31m " + string(1, (*mainMap)[i][j]) + " \033[0m";
                        else
                            cout << "\033[1;40;31m " + string(1, (*mainMap)[i][j]) + " \033[0m";
                    }
                    else
                    {
                        if (j % 2 == 0)
                            cout << "\033[1;40;31m " + string(1, (*mainMap)[i][j]) + " \033[0m";
                        else
                            cout << "\033[1;47;31m " + string(1, (*mainMap)[i][j]) + " \033[0m";
                    }
                }
                else
                {
                    if (i % 2 == 0)
                    {
                        if (j % 2 == 0)
                            cout << "\033[1;47;34m " + string(1, (*mainMap)[i][j]) + " \033[0m";
                        else
                            cout << "\033[1;40;34m " + string(1, (*mainMap)[i][j]) + " \033[0m";
                    }
                    else
                    {
                        if (j % 2 == 0)
                            cout << "\033[1;40;34m " + string(1, (*mainMap)[i][j]) + " \033[0m";
                        else
                            cout << "\033[1;47;34m " + string(1, (*mainMap)[i][j]) + " \033[0m";
                    }
                }
            }
        }
        if (!(i == 0) && !(i + 1 == mainMap->size()))
            cout << "\033[1;37m" + to_string(ctn) + "\033[0m" << endl;
        else
            cout << endl;
    }
    cout << "\033[1;37m    1  2  3  4  5  6  7  8\033[0m" << endl;
}

void game(vector<string> *mainMap)
{
    bool game = true;
    int turns = 0, player;
    string entry;

    while (game)
    {
        cout << "Player 1 (white) starts" << endl;
        cout << "Pls enter the piece's token then enter the coordinates" << endl;
        cout << "Tokens: [PKQRBN]" << endl;
        cout << "ex: P(2,6)\n" << endl;
        player = 1;
        dispMapForPlayer(mainMap, &player);
        game = false;
    }
    
}

int main()
{
    vector<string> mainMap;

    initGame(&mainMap);
    game(&mainMap);

    return 0;
}