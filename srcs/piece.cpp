#include "PrepChest.hpp"

Piece::Piece()
{
}

bool Piece::getStatus() const
{
    return status;
}

void Piece::setStatus(bool _status)
{
    status = _status;
}

std::string Piece::getTileColor() const
{
    return tileColor;
}

void Piece::setTileColor(std::string _color)
{
    tileColor = _color;
}

std::string Piece::getName() const
{
    return name;
}

void Piece::setName(std::string _name)
{
    name = _name;
}

int Piece::getX() const
{
    return x;
}

void Piece::setX(int _x)
{
    x = _x;
}

int Piece::getY() const
{
    return y;
}

void Piece::setY(int _y)
{
    y = _y;
}

char Piece::getType() const
{
    return type;
}

void Piece::setType(char _type)
{
    type = _type;
}

bool Piece::getFstMove() const
{
    return fstMove;
}

void Piece::setFstMove(bool _fst)
{
    fstMove = _fst;
}

std::string Piece::getTeam() const
{
    return team;
}

void Piece::setTeam(std::string _team)
{
    team = _team;
}

Piece::~Piece()
{
}