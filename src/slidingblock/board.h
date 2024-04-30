#include <vector>
#include <string>
#include <unistd.h>

using namespace std;

#ifndef BOARD_H
#define BOARD_H

void saveBoard(int (&board)[3][3], bool solved);
bool initSavedboard(int (&board)[3][3], bool solved);
void clearScreen();
void initboard(int (&board)[3][3]);
void printboard(int board[3][3]);
void shuffleboard(int (&board)[3][3]);
bool checkonemove(int (&board)[3][3]);
bool checkwin(int (&board)[3][3], bool solved);

#endif
