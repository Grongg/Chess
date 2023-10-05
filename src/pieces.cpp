#include "pieces.hpp"

// Pieces Main class functions
Piece::Piece(int id, char color, char token, string type) 
            : _id(id), _color(color), _token(token), _type(type){}

int Piece::getId() {return _id;}
int Piece::getX(){return _x;}
int Piece::getY(){return _y;}
char Piece::getColor() {return _color;}
char Piece::getToken() {return _token;}
string Piece::getType() {return _type;}

void Piece::setId(int newId) {_id = newId;}
void Piece::setX(int newX) {_x = newX;}
void Piece::setY(int newY) {_y = newY;}
void Piece::setColor(char newColor) {_color = newColor;}
void Piece::setToken(char newToken) {_token = newToken;}
void Piece::setType(string newType) {_type = newType;}

void Piece::move() {cout << "Piece move" << endl;}

Piece::~Piece(){}