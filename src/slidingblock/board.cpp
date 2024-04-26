#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "board.h"
#include "move.h"
using namespace std;

void initboard(int (&board)[3][3]){
  int num = 1;
  for (int i = 0;i < 3; i++){
    for (int j = 0; j < 3; j++){
      if (i == 2 && j == 2)
        board[i][j] = 0;
      else{
        board[i][j] = num;
        num++;
      }
    }
  }
}

void printboard(int board[3][3]){
  for (int i = 0;i < 3; i++){
    for (int k = 0; k < 3; k++){
      cout << "+-----";
    }
    cout << "+" << endl;
        
    for (int j = 0 ; j < 3; j++){
      cout << "| " << setw(2) << board[i][j] << "  "; 
    }
    cout << "|" << endl;
        
    for (int k = 0; k < 3; k++){
      cout << "+-----";
    }
      cout << "+" << endl;
    }
}

void shuffleboard(int(&board)[3][3]){
  srand(time(NULL));
  for (int i = 0; i < 1000; i++){
    vector <string> possiblemoves = possiblemovecheck(board);
    int randind = rand() % possiblemoves.size();
    string shufflemove = possiblemoves[randind].c_str();
    makemove(shufflemove, board);
  }
}

bool checkonemove(int (&board)[3][3]){
  int onedboard[9];
  int oneind = 0;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      onedboard[oneind] = board[i][j];
      oneind++;
    }
  }

  int inversioncount = 0;
  for (int i = 0; i < 8; i++){
    for (int j = 1; j < 9; j++){
      if ((onedboard[i] > onedboard[j]) && (onedboard[i] != 0) && (onedboard[j] != 0))
        inversioncount += 1;
    }
  }
  if (inversioncount == 1)
    return true;
  else
    return false;
}

bool checkwin(int (&board)[3][3], bool solved){
  int solvedboard[3][3] = {{1,2,3}, {4,5,6}, {7,8,0}};
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      if (board[i][j] != solvedboard[i][j]){
        solved = false;
        return solved;
      }
    }
  }
  solved = true;
  return solved;
}
