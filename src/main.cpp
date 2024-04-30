// This file contains the main program which initializes
// the game and starts up the game play depending on the
// user choice in the main menu

#include <iostream>

#include "../include/animations.h"
#include "../include/menu_screen.h"
#include "../include/gameplay.h"

#include "ncurses.h"

using namespace std;

int main()
{
    // Set up ncurses
    setlocale(LC_ALL, "");
    initscr();
    refresh();
    cbreak();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);
    timeout(0);

    // Display the intro animations welcoming the user
    introAnimations();

    // The user will always be redirected to the main menu
    // unless the user quits
    while (true)
    {
        // The main menu function will return which option
        // was selected
        int currentOption = showMenuScreen();

        if (currentOption == 1)
        {
            int levelOption = showLevelScreen();

            if (levelOption == 5)
            {
                // Return To main menu
                continue;
            }
            else
            {
                // Play a game
                startGame(levelOption);
            }
        }
        else if (currentOption == 2)
        {
            // Print the game credits
            printCredits();
        }
        else
        {
            // Exit from the game
            break;
        }
    }
  getch();
  endwin();
}
