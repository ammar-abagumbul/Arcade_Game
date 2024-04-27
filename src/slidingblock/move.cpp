// This is the file for moving tiles of the sliding block puzzle game.
// It checks whether input is legal & moves are possible, and if so carries out the move.

#include <vector>
#include <string>
#include <iostream>
#include <cctype>

#include "board.h"
#include "move.h"

using namespace std;

vector<string> possiblemovecheck(int board[3][3]){
  // This function returns all the possible moves the player can make and returns them as a vector
  // with all the possible moves in the form of the inputs ("w", "a", "s", "d")

  int emptyrow = 0, emptycol = 0;
  vector <string> possiblemoves;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      if (board[i][j] == 0){
        emptyrow = i;
        emptycol = j;
        break;
      }
    }
  }
  // Up check
  if (emptyrow < 2)
    possiblemoves.push_back("w");
  // Down check
  if (emptyrow > 0)
    possiblemoves.push_back("s");
  // Left check
  if (emptycol < 2 )
    possiblemoves.push_back("a");
  // Right check
  if (emptycol > 0)
    possiblemoves.push_back("d");
  
  return possiblemoves;
}


string lowerString(string input){
  // This function turns the input into lower-case characters for checking purposes

  string lowerstring = input;
  for (int i = 0; i < lowerstring.length(); i++){
    lowerstring[i] = tolower(lowerstring[i]);
  }
  return lowerstring;
}


bool checklegal(string input, vector <string> possiblemoves){
  // This function checks whether the user input made is legal ("w", "a", "s", "d", "W", "A", "S", "D")

  vector <string> :: iterator itr;
  for (itr = possiblemoves.begin(); itr != possiblemoves.end(); itr++){
    if (input == *itr)
      return true;
  }
  return false;
}


void tileSwap(int (&board)[3][3],int emptyrow,int emptycol,int tilerow,int tilecol){
  // This function swaps the positions of two tiles

  int temp;
  temp = board[emptyrow][emptycol];
  board[emptyrow][emptycol] = board[tilerow][tilecol];
  board[tilerow][tilecol] = temp;
}


void makemove(string input, int (&board)[3][3]){
  // This function moves tiles depending on the user input
  
  int emptyrow = 0, emptycol = 0;
  vector <string> possiblemoves;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      if (board[i][j] == 0){
        emptyrow = i;
        emptycol = j;
        break;
      }
    }
  }
  if (input == "w")
    tileSwap(board, emptyrow, emptycol, emptyrow + 1, emptycol);
  if (input == "s")
    tileSwap(board, emptyrow, emptycol, emptyrow - 1, emptycol);
  if (input == "a")
    tileSwap(board, emptyrow, emptycol, emptyrow, emptycol + 1);
  if (input == "d")
    tileSwap(board, emptyrow, emptycol, emptyrow, emptycol - 1);
}