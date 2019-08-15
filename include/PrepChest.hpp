/*
** EPITECH PROJECT, 2019
** chest
** File description:
** chest
*/

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
//#include <boost>
#include "piece.hpp"

class PrepChest
{
public:
    PrepChest();
    ~PrepChest();
    void openMap(std::string, bool);
    std::string lookColor(int, int);
    void setPieces();
    Piece *createPiece(int, int, char);
    void dumpPieces();
    void dumpPiece(Piece *);
    void setPieceType(Piece *);

private:
    Piece *piece;
    std::vector<Piece *> allPieces;
    std::vector<std::string> fullMap;
    std::vector<std::string> emptyMap;
};

template <class T>
void dispVec(std::vector<T> vec)
{
    for (size_t i = 0; i != vec.size(); i++)
        std::cout << vec[i] << std::endl;
}