#include "pieces.hpp"

// Bishop class functions
Bishop::Bishop(int id, int x, int y, char color) 
            : Piece(id, color, 'B', "Bishop"){}

void Bishop::move()
{
    cout << "Bishop move" << endl;
}

Bishop::~Bishop(){}