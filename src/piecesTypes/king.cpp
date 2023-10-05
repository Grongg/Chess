#include "pieces.hpp"

// King class functions
King::King(int id, int x, int y, char color) 
            : Piece(id, color, 'K', "King"){}

void King::move()
{
    cout << "King move" << endl;
}

King::~King(){}
