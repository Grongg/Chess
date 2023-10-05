#include "pieces.hpp"

// Knight class functions
Knight::Knight(int id, int x, int y, char color) 
            : Piece(id, color, 'N', "Knight"){}

void Knight::move()
{
    cout << "Knight move" << endl;
}

Knight::~Knight(){}
