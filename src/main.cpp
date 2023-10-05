#include "main.hpp"

void startGame()
{
    vector<string> mainMap;

    openEmptyMap(&emptyMap);
    copy(emptyMap.begin(), emptyMap.end(), back_inserter(mainMap));
    // dumpMap(&mainMap);
    initPieces(&mainMap, &whiteTeam, &blackTeam);
    dumpMap(&mainMap);
}

int main()
{
    startGame();

    return 0;
}