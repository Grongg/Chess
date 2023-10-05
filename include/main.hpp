#pragma once

#include "pieces.hpp"
#include "prepMap.hpp"

vector<string> emptyMap;
vector<class Piece> whiteTeam;
vector<class Piece> blackTeam;

// void testPieces();
int main();

template <class T>
void dispPiece(T *piece)
{
    cout << "---------------" << endl;
    // piece->setId(0);
    // piece->setColor('W');
    // piece->setType("NULL");
    // piece->setToken('N');
    // piece->setFirstmove(true);
    cout << "Id:\t" << piece->getId() << endl;
    cout << "Color:\t" << piece->getColor() << endl;
    cout << "Type:\t" << piece->getType() << endl;
    cout << "Token:\t" << piece->getToken() << endl;
    cout << "---------------" << endl;
}

void dispPiece(Pawn *pawn)
{
    cout << "---------------" << endl;
    // pawn->setId(0);
    // pawn->setColor('W');
    // pawn->setType("NULL");
    // pawn->setToken('N');
    // pawn->setFirstMove(true);
    cout << "Id:\t" << pawn->getId() << endl;
    cout << "Color:\t" << pawn->getColor() << endl;
    cout << "Type:\t" << pawn->getType() << endl;
    cout << "Token:\t" << pawn->getToken() << endl;
    cout << "F.M.:\t" << pawn->getFirstMove() << endl;
    cout << "---------------" << endl;
}