/*
** EPITECH PROJECT, 2019
** chest
** File description:
** piece
*/

#pragma once

#include <iostream>
#include <string>
#include <vector>

class Piece
{
public:
    Piece();
    ~Piece();
    bool getStatus()  const;
    void setStatus(bool);
    std::string getTileColor() const;
    void setTileColor(std::string);
    std::string getName() const;
    void setName(std::string);
    int getX() const;
    void setX(int);
    int getY() const;
    void setY(int);
    char getType() const;
    void setType(char);
    bool getFstMove() const;
    void setFstMove(bool);
    std::string getTeam() const;
    void setTeam(std::string);

private:
    int x;
    int y;
    bool status;
    std::string tileColor;
    std::string name;
    char type;
    bool fstMove;
    std::string team;
};