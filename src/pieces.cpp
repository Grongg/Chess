#include "pieces.hpp"

// Pieces Main class functions
Piece::Piece(int id, char color, char token, string type) 
            : _id(id), _color(color), _token(token), _type(type){}

int Piece::getId() {return _id;}
char Piece::getColor() {return _color;}
char Piece::getToken() {return _token;}
string Piece::getType() {return _type;}

void Piece::setId(int newId) {_id = newId;}
void Piece::setColor(char newColor) {_color = newColor;}
void Piece::setToken(char newToken) {_token = newToken;}
void Piece::setType(string newType) {_type = newType;}

Piece::~Piece(){}

// Pawn class functions
Pawn::Pawn(int id, char color) 
            : Piece(id, color, 'P', "Pawn"){}

bool Pawn::getFirstmove() {return _firstMove;}

void Pawn::setFirstmove(bool newFirstmove){_firstMove = newFirstmove;}

Pawn::~Pawn(){}

// Rook class functions


// King class functions


// Bishop class functions


// Queen class functions


// Knight class functions

