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

std::string Piece::getColor() const
{
    return color;
}

void Piece::setColor(std::string _color)
{
    color = _color;
}

char Piece::getName() const
{
    return name;
}

void Piece::setName(char _name)
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

std::string Piece::getType() const
{
    return type;
}

void Piece::setType(std::string _type)
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