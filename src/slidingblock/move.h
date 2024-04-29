#ifndef MOVE_H
#define MOVE_H

#include <vector>
#include <string>
#include <cctype>
using namespace std;

vector<string> possiblemovecheck(int board[3][3]);
// int lowerString(int input);
bool checklegal(string input, vector <string> possiblemoves);
void tileSwap(int (&board)[3][3],int emptyrow,int emptycol,int tilerow,int tilecol);
void makemove(string input, int (&board)[3][3]);

#endif
