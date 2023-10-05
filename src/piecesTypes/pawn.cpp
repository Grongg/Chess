#include "pieces.hpp"

// Pawn class functions
Pawn::Pawn(int id, int x, int y, char color) 
            : Piece(id, color, 'P', "Pawn"){}

bool Pawn::getFirstMove() {return _firstMove;}

void Pawn::setFirstMove(bool newFirstmove){_firstMove = newFirstmove;}

void Pawn::move()
{
    cout << "Pawn move" << endl;
}

Pawn::~Pawn(){}
