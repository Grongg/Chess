#include "pieces.hpp"

// Rook class functions
Rook::Rook(int id, int x, int y, char color) 
            : Piece(id, color, 'R', "Rook"){}

void Rook::move()
{
    cout << "Rook move" << endl;
}

Rook::~Rook(){}

