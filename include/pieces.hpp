#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Piece
{
protected:
    int _id;
    char _color;
    char _token;
    string _type;

public:
    Piece(int id, char color, char token, string type);
    ~Piece();
    
    int getId();
    char getColor();
    char getToken();
    string getType();

    void setId(int newId);
    void setColor(char newColor);
    void setToken(char newToken);
    void setType(string newType);
};

class Pawn : public Piece
{
private:
bool _firstMove = false;

public:
    Pawn(int id, char color);
    ~Pawn();
    bool getFirstmove();
    void setFirstmove(bool newFirstMove);
    void move();
};


