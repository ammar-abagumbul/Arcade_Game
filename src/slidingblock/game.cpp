#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include "board.h"
#include "move.h"
using namespace std;

int main(){
  int board[3][3];
  vector <string> possiblemoves;
  int num = 1;
  bool solved = false;
  initboard(board);
  shuffleboard(board);
  solved = checkwin(board, solved);
  if (solved || checkonemove(board)){
    while ((solved != false) || (checkonemove(board) != false)){
      shuffleboard(board);
      solved = checkwin(board, solved);
      checkonemove(board);
    }
  }
  printboard (board);
  string input;
  cout << "Input a move (w, a, s, d): " << endl;
  while (cin >> input){
    input = lowerString(input);
    possiblemoves = possiblemovecheck(board);
    //quit game if player types q (just for testing purposes, I assume our game won't have ability to skip levels)
    if (input == "q"){
      cout << "You are weak" << endl;
      break;
    }
    else if (!checklegal(input, possiblemoves)){
      cout << "Please make a valid input/move: " << endl;
    }
    else{
      makemove(input, board);
      printboard(board);
      solved = checkwin(board, solved);
    }
    if (solved == true){
      cout << "Well done, soldier, move on to the next level" << endl;
      break;
    }
	cout << "Input a move (w, a, s, d): " << endl;
  }
  return 0;
}
