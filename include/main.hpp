#pragma once

#include "pieces.hpp"
#include "prepMap.hpp"

vector<string> emptyMap;
vector<class Piece> whiteTeam;
vector<class Piece> blackTeam;

void initGame(vector<string> *mainMap);
void game(vector<string> *mainMap);

int main();

template <class T>
void dispPiece(T *piece)
{
    cout << "---------------" << endl;
    cout << "Id:\t" << piece->getId() << endl;
    cout << "Color:\t" << piece->getColor() << endl;
    cout << "Type:\t" << piece->getType() << endl;
    cout << "Token:\t" << piece->getToken() << endl;
    cout << "---------------" << endl;
}

void dispPiece(Pawn *pawn)
{
    cout << "---------------" << endl;
    cout << "Id:\t" << pawn->getId() << endl;
    cout << "Color:\t" << pawn->getColor() << endl;
    cout << "Type:\t" << pawn->getType() << endl;
    cout << "Token:\t" << pawn->getToken() << endl;
    cout << "F.M.:\t" << pawn->getFirstMove() << endl;
    cout << "---------------" << endl;
}