// This file contains the program related to the board
// , which initializes the board, shuffles it (after checks for solved puzzle
// and one-move solve), prints it and checks
// the board for different cases after each input by the user.

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <unistd.h>
#include <fstream>

#include "ncurses.h"

#include "board.h"
#include "move.h"

using namespace std;


void saveBoard(int (&board)[3][3], bool solved){
  // This function saves the board if the player wants to save the current board before quitting
  
  ofstream fout;
  fout.open("saveslidingblock.txt");
  if (fout.is_open()){
    for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++){
        fout << board[i][j] << " ";
      }
      fout << endl;
    }
    fout << solved << endl;

    fout.close();
  }
}


bool initSavedboard(int (&board)[3][3], bool solved){
  // This function loads in the saved board from a previous game save

  ifstream fin;
  fin.open("saveslidingblock.txt");
  if (fin.is_open()){
    for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++){
        fin >> board[i][j]; 
      }
    }
    fin >> solved;
    fin.close();
    return true;
  }
  return false;
}


// void clearScreen() {
//   // This function clears the screen prior to the printing the board
//   // Duplicated from Ali Musaddiq's file minesweeper.cpp

//   usleep(200000); // Sleep for 0.2 seconds
//   #ifdef _WIN32
//       system("cls");
//   #else
//       system("clear");
//   #endif
// }


void initboard(int (&board)[3][3]){
  // This function initializes the board as a 2d array = {{1,2,3},{4,5,6},{7,8,0}}

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
  // This function prints the board array with each integer in the board surrounded by a box

  clear();
  printw("\n\n\n\n");
  int spaces = (80 - (3 * 5 + 4)) / 2;
  for (int i = 0; i < 3; i++){
    printw("\n");
    for (int l = 0; l < spaces; l ++){
      printw(" ");
    }
    printw("              ");
  
    for (int k = 0; k < 3; k++){
      printw("+-----");
    }
    printw("+\n");
        
    for (int m = 0; m < spaces; m++){
      printw(" ");
    }
    printw("              ");
    for (int j = 0 ; j < 3; j++){
      string linePart;
      if (board[i][j] == 0){
        linePart = "|     ";
      }
      else{
        linePart = "|  " + std::to_string(board[i][j]) + "  ";
      }
      printw(linePart.c_str()); 
    }
    printw("|\n");

    for (int n = 0; n < spaces; n++){
      printw(" ");
    }    

    printw("              ");
    
    for (int k = 0; k < 3; k++){
      printw("+-----");
    }
      printw("+\n");
  }
  refresh();
}


void shuffleboard(int(&board)[3][3]){
  // This function shuffles the board 1000 times to form a shuffled puzzle

  srand(time(NULL));
  for (int i = 0; i < 1000; i++){
    vector <string> possiblemoves = possiblemovecheck(board);
    int randind = rand() % possiblemoves.size();
    string shufflemove = possiblemoves[randind].c_str();
    makemove(shufflemove, board);
  }
}


bool checkonemove(int (&board)[3][3]){
  // This function checks whether the shuffled puzzle is solvable in one move.
  // It returns true if it is solvable in one move and returns false otherwise.

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
  // This function checks whether the board is solved, both when the puzzle is initially shuffled
  // and after each move by the user.

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