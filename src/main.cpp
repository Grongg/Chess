#include "main.hpp"

void initGame(vector<string> *mainMap)
{

    openEmptyMap(&emptyMap);
    copy(emptyMap.begin(), emptyMap.end(), back_inserter(*mainMap));
    initPieces(mainMap, &whiteTeam, &blackTeam);
    dumpMap(mainMap);
}

void colorPiecesAndTiles(vector<string> *mainMap, int *player, size_t *i, size_t *j)
{
    if (*player == 1)
    {
        if (*i == 7 || *i == 8)
        {
            if (*i % 2 == 0)
                *j % 2 == 0 ? cout << "\033[1;47;32m " + string(1, (*mainMap)[*i][*j]) + " \033[0m"
                            : cout << "\033[1;40;32m " + string(1, (*mainMap)[*i][*j]) + " \033[0m";
            else
                *j % 2 == 0 ? cout << "\033[1;40;32m " + string(1, (*mainMap)[*i][*j]) + " \033[0m"
                            : cout << "\033[1;47;32m " + string(1, (*mainMap)[*i][*j]) + " \033[0m";
        }
        else
        {
            if (*i % 2 == 0)
                *j % 2 == 0 ? cout << "\033[1;47;36m " + string(1, (*mainMap)[*i][*j]) + " \033[0m"
                            : cout << "\033[1;40;36m " + string(1, (*mainMap)[*i][*j]) + " \033[0m";
            else
                *j % 2 == 0 ? cout << "\033[1;40;36m " + string(1, (*mainMap)[*i][*j]) + " \033[0m"
                            : cout << "\033[1;47;36m " + string(1, (*mainMap)[*i][*j]) + " \033[0m";
        }
    }
    else if (*player == 2)
    {
        if (*i == 1 || *i == 2)
        {
            if (*i % 2 == 0)
                *j % 2 == 0 ? cout << "\033[1;47;32m " + string(1, (*mainMap)[*i][*j]) + " \033[0m"
                            : cout << "\033[1;40;32m " + string(1, (*mainMap)[*i][*j]) + " \033[0m";
            else
                *j % 2 == 0 ? cout << "\033[1;40;32m " + string(1, (*mainMap)[*i][*j]) + " \033[0m"
                            : cout << "\033[1;47;32m " + string(1, (*mainMap)[*i][*j]) + " \033[0m";
        }
        else
        {
            if (*i % 2 == 0)
                *j % 2 == 0 ? cout << "\033[1;47;36m " + string(1, (*mainMap)[*i][*j]) + " \033[0m"
                            : cout << "\033[1;40;36m " + string(1, (*mainMap)[*i][*j]) + " \033[0m";
            else
                *j % 2 == 0 ? cout << "\033[1;40;36m " + string(1, (*mainMap)[*i][*j]) + " \033[0m"
                            : cout << "\033[1;47;36m " + string(1, (*mainMap)[*i][*j]) + " \033[0m";
        }
    }
}

void dispMapForPlayer(vector<string> *mainMap, int *player)
{
    cout << "\nPlayer " + to_string(*player) + " playing:\n" << endl;
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
                colorPiecesAndTiles(mainMap, player, &i, &j);
        }
        if (!(i == 0) && !(i + 1 == mainMap->size()))
            cout << "\033[1;37m" + to_string(ctn) + "\033[0m" << endl;
        else
            cout << endl;
    }
    cout << "\033[1;37m    1  2  3  4  5  6  7  8\033[0m\n" << endl;
}

void showMoveAndConfirm(vector<string> *mainMap, int *player)
{

}

bool interpretAndValidateMove(string *entry)
{
    string word;
    vector<string> explodedString;
    stringstream ss(*entry);
    
    while (ss >> word)
        explodedString.push_back(word);
    for (string &elem : explodedString)
        cout << elem << endl;
    return true;
}

void game(vector<string> *mainMap)
{
    bool game = true;
    int turns = 0, player;
    string entry;

    while (game)
    {
        cout << "Player 1 starts. Your pieces are in green" << endl;
        cout << "Pls enter the piece's token then enter the coordinates" << endl;
        cout << "Tokens: [PKQRBN]" << endl;
        cout << "ex: P (2,7) (2,5)\n" << endl;
        player = 1;
        dispMapForPlayer(mainMap, &player);
        cout << "entry: ";
        getline(cin, entry);
        if (interpretAndValidateMove(&entry))
            showMoveAndConfirm(mainMap, &player);
        else
            break;
        player = 2;
        dispMapForPlayer(mainMap, &player);
        cout << "entry: ";
        getline(cin, entry);
        if (interpretAndValidateMove(&entry))
            showMoveAndConfirm(mainMap, &player);
        else
            break;
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