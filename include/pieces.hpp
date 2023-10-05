#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

class Piece
{
protected:
    int _id;
    int _x;
    int _y;
    char _color;
    char _token;
    string _type;

public:
    Piece(int id, char color, char token, string type);
    ~Piece();
    
    int getId();
    int getX();
    int getY();
    char getColor();
    char getToken();
    string getType();

    void setId(int newId);
    void setX(int newX);
    void setY(int newY);
    void setColor(char newColor);
    void setToken(char newToken);
    void setType(string newType);
};

class Pawn : public Piece
{
private:
bool _firstMove = false;

public:
    Pawn(int id, int x, int y, char color);
    ~Pawn();
    bool getFirstMove();
    void setFirstMove(bool newFirstMove);
    void move();
};

class King : public Piece
{
private:

public:
    King(int id, int x, int y, char color);
    ~King();
};

class Rook : public Piece
{
private:

public:
    Rook(int id, int x, int y, char color);
    ~Rook();
    void move();
};

class Bishop : public Piece
{
private:

public:
    Bishop(int id, int x, int y, char color);
    ~Bishop();
};

class Queen : public Piece
{
private:

public:
    Queen(int id, int x, int y, char color);
    ~Queen();
};

class Knight : public Piece
{
private:

public:
    Knight(int id, int x, int y, char color);
    ~Knight();
};
