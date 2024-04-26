// This file contains the main program which initializes
// the game and starts up the game play depending on the
// user choice in the main menu

#include <iostream>

#include "../include/animations.h"
#include "../include/menu_screen.h"
#include "../include/gameplay.h"

using namespace std;

int main()
{
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
            // Start a new game
            startGame();
        }
        else if (currentOption == 3)
        {
            // Print the game credits
            printCredits();

            // To deal with "Press ENTER to continue"
            cin.ignore();
            cin.ignore();
        }
        else
        {
            // Exit from the game
            break;
        }
    }
}
