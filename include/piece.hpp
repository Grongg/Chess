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
    std::string getColor() const;
    void setColor(std::string);
    char getName() const;
    void setName(char);
    int getX() const;
    void setX(int);
    int getY() const;
    void setY(int);
    std::string getType() const;
    void setType(std::string);
    bool getFstMove() const;
    void setFstMove(bool);
    std::string getTeam() const;
    void setTeam(std::string);

private:
    int x;
    int y;
    bool status;
    std::string color;
    char name;
    std::string type;
    bool fstMove;
    std::string team;
};