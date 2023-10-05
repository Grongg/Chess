#pragma once

#include "pieces.hpp"
#include<algorithm>
#include<iterator>

void openEmptyMap(vector<string> *emptyMap);
void dumpMap(vector<string> *map);
void initPieces(vector<string> *mainMap, vector<class Piece> *whiteTeam, vector<class Piece> *blackTeam);
void initSpePieces(vector<class Piece> *vecTeam, char team, int i, int j, vector<string> *mainMap);
