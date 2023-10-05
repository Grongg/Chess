#include "pieces.hpp"

// Queen class functions
Queen::Queen(int id, int x, int y, char color) 
            : Piece(id, color, 'Q', "Queen"){}

void Queen::move()
{
    cout << "Queen move" << endl;
}

Queen::~Queen(){}
