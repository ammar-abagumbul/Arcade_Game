// This file contains the main program file for 
// the sliding block game, which starts up gameplay
// and accepts input until  the game is won

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <fstream>

#include "ncurses.h"

#include "board.h"
#include "move.h"
#include "game.h"

int slidingBlockGame(){
  // This functions call the main sliding block game

  using namespace std;
  int board[3][3];
  vector <string> possiblemoves;
  int num = 1;

  // Initializes the boolean solved as false, solved does not turn true until the puzzle is solved
  bool solved = false;

  // Initializes and shuffles the board
  initboard(board);
  shuffleboard(board);

  // Checks if shuffled board is solved or is solvable in one move, if so, reshuffles
  solved = checkwin(board, solved);
  if (solved || checkonemove(board)){
    while ((solved != false) || (checkonemove(board) != false)){
      shuffleboard(board);
      solved = checkwin(board, solved);
      checkonemove(board);
    }
  }

  // Outputs board for first time
  printboard (board);
  string input;

  // Gets input for the first time
  printw("Input a move (w, a, s, d): \n");
  refresh();

  // Gets input until the boolean solved becomes true
  while (cin >> input){
    input = lowerString(input);
    possiblemoves = possiblemovecheck(board);
    if (input == "q"){
      printw("You displayed great weakness. I know you'll come back though, they always do.\n");
      refresh();
      break;
    }

    // Checks if user input is valid
    else if (!checklegal(input, possiblemoves)){
      printboard(board);
      printw("Please make a valid input/move: \n");
      refresh();
    }
    else{
    // If move is legal, the move is made and the boolean solved is updated after every legal move
      makemove(input, board);
      printboard(board);
      solved = checkwin(board, solved);
    }

    // Ends the game loop if solved becomes true
    if (solved == true){
      cout << "Well done, soldier, move on to the next level" << endl;
      refresh();
      break;
    }
    // If solved is still false after the input, ask the user for input again
	printw("Input a move (w, a, s, d) or input q to quit: \n");
  refresh();
  }
  return 0;
}