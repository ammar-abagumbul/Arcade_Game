#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <string>
using namespace std;

void initboard(int (&board)[3][3]);
void printboard(int board[3][3]);
void shuffleboard(int(&board)[3][3]);
bool checkonemove(int (&board)[3][3]);
bool checkwin(int (&board)[3][3], bool solved);

#endif

