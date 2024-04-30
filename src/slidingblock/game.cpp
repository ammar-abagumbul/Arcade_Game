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
#include "menu.h"

int slidingBlockGame()
{
    // This functions call the main sliding block game

    using namespace std;

    int board[3][3];
    vector<string> possiblemoves;
    int num = 1;

    // Initializes the boolean solved as false, solved does not turn true until the puzzle is solved
    bool solved = false;

    while (true)
    {
        // Check if saved game exists
        bool fileexists = initSavedboard(board, solved);

        // Show the menu screen and get option
        int currOption = slidingShowMenuScreen(fileexists);

        if (fileexists && currOption == 2)
        {
            // Board was saved before
            initSavedboard(board, false);
        }
        if (currOption == 1)
        {
            // Initializes and shuffles the board
            initboard(board);
            shuffleboard(board);

            // Checks if shuffled board is solved or is solvable in one move, if so, reshuffles
            solved = checkwin(board, solved);

            if (solved || checkonemove(board))
            {
                while ((solved != false) || (checkonemove(board) != false))
                {
                    shuffleboard(board);
                    solved = checkwin(board, solved);
                    checkonemove(board);
                }
            }
        }
        if ((fileexists && currOption == 2) || currOption == 1)
        {
            // Outputs board for first time
            printboard(board);
            int input;

            // Gets input for the first time
            printw("\n\n                                Press w, a, s, d or arrow keys to move\n                                Press ESC to return to main menu. \n");
            refresh();

            // Gets input until the boolean solved becomes true
            while (true)
            {
                input = getch();
                // input = lowerString(input);

                if (isalpha(input))
                {
                    input = tolower(input);
                }

                // Convert arrow keys to w, a, s, d
                switch (input)
                {
                case KEY_UP:
                    input = 'w';
                    break;
                case KEY_DOWN:
                    input = 's';
                    break;
                case KEY_LEFT:
                    input = 'a';
                    break;
                case KEY_RIGHT:
                    input = 'd';
                    break;
                }

                possiblemoves = possiblemovecheck(board);
                string newinput;
                
                if (input == 27)
                {
                    // USer has pressed ESC

                    printw("\n\n                                Saving board...");
                    refresh();
                    saveBoard(board, false);
                    break;
                }
                else
                {
                    newinput = string(1, input);
                }

                if (!checklegal(newinput, possiblemoves))
                {
                    continue;
                }

                // If move is legal, the move is made and the boolean solved is updated after every legal move
                makemove(newinput, board);
                printboard(board);
                solved = checkwin(board, solved);

                // Ends the game loop if solved becomes true
                if (solved == true)
                {
                    return 1;
                }

                // If solved is still false after the input, ask the user for input again
                printw("\n\n                                Press w, a, s, d or arrow keys to move\n                                Press ESC to return to main menu. \n");
                refresh();
            }
        }
        else if (currOption = 3 || (!fileexists && currOption == 2))
        {
            // User presses EXIT
            return 0;
        }
    }
}