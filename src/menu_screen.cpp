// This file contains functions which handle
// the main menu once the game has been loaded

#include <iostream>
#include <string>

#include "../include/menu_screen.h"
#include "../include/invalid_input_screen.h"

#include "ncurses.h"


void printMainMenu(int choice)
{
    // This function outputs the entire main menu as well as the options available

    using namespace std;

    // Terminal cleared to improve user experience
    clear();

    // Header message
    printw(R"(                           ###############################################################)");
    printw("\n");
    printw(R"(                           ###############################################################)");
    printw("\n");
    printw("\n");
    printw(R"(                                     __        __   _                          _)");
    printw("\n");
    printw(R"(                                     \ \      / /__| | ___ ___  _ __ ___   ___| |)");
    printw("\n");
    printw(R"(                                      \ \ /\ / / _ \ |/ __/ _ \| '_ ` _ \ / _ \ |)");
    printw("\n");
    printw(R"(                                       \ V  V /  __/ | (_| (_) | | | | | |  __/_|)");
    printw("\n");
    printw(R"(                                        \_/\_/ \___|_|\___\___/|_| |_| |_|\___(_))");
    printw("\n");
    printw("\n");
    printw(R"(                           ---------------------------------------------------------------)");
    printw("\n");
    printw(R"(                                                                              )");
    printw("\n");
    printw(R"(                                             What would you like to do?)");
    printw("\n\n");
    // End of header message

    // First choice is highlighted if it is the current option
    printw(R"(                                                   )");
    if (choice == 1)
        attron(A_REVERSE);
    printw(R"(PLAY)");
    printw("\n");
    if (choice == 1)
        attroff(A_REVERSE);
    
    // Second choice is highlighted if it is the current option
    printw(R"(                                                   )");
    if (choice == 2)
        attron(A_REVERSE);
    printw(R"(CREDITS)");
    printw("\n");
    if (choice == 2)
        attroff(A_REVERSE);
    
    // Third choice is highlighted if it is the current option
    printw(R"(                                                   )");
    if (choice == 3)
        attron(A_REVERSE);
    printw(R"(EXIT)");
    printw("\n");
    if (choice == 3)
        attroff(A_REVERSE);

    // Footer design
    printw("\n");
    printw(R"(                           ---------------------------------------------------------------)");
    printw("\n");
    refresh();

    // Note that the instruction input is taken as part of showMenuScreen()
    // It is kept separate from this function so that this function can
    // stay standalone
}

int showMenuScreen()
{
    // This function handles the main flow of the main menu and returns
    // which option was selected

    using namespace std;

    // Top option is selected first
    int optionChosen = 1;
    printMainMenu(optionChosen);

    // Will continue until user presses enter
    while (true)
    {
        bool br = false;
        int c = getch();
        
        // Handle user input for up and down arrow keys
        switch (c)
        {
        case KEY_UP:
            if (optionChosen == 1)
                optionChosen = 3;
            else
                --optionChosen;
            break;
        case KEY_DOWN:
            if (optionChosen == 3)
                optionChosen = 1;
            else
                ++optionChosen;
            break;
        case 10:
            //ENTER
            br = true;
            break;
        default:
            continue;
        }

        // Check if user has pressed enter
        if (br)
            break;
        else
        {
            printMainMenu(optionChosen);
        }
    }

    return optionChosen;
}


void displayLevels(int choice)
{
    // This function outputs the level selection options available

    using namespace std;

    // Terminal cleared to improve user experience
    clear();

    // Header message
    printw(R"(                          .-"-._,-'_`-._,-'_`-._,-'_`-._,-'_`-,_,-'_`-,_,-'_`-,_,-'_`-,_,-'_`-,.)");
    printw("\n");
    printw(R"(                          (  ,-'_,-<.>-'_,-<.>-'_,-<.>-'_,-<.>-'_,-<.>-'_,-<.>-'_,-<.>-'_,-~-} ;.)");
    printw("\n");
    printw(R"(                           \ \.'_>-._`-<_>-._`-<_>-._`-<_>-._`-<_>-._`-<_>-._`-<_>-._`-._~--. \ .)");
    printw("\n");
    printw(R"(                           /\ \/ ,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._`./ \ \ .)");
    printw("\n");
    printw(R"(                          ( (`/ /                  _    _____   _____ _                  `/ /.) ) .)");
    printw("\n");
    printw(R"(                           \ \ / \                | |  | __\ \ / / __| |                 / / \ / .)");
    printw("\n");
    printw(R"(                            \ \') )               | |__| _| \ V /| _|| |                ( (,\ \ .)");
    printw("\n");
    printw(R"(                           / \ / /                |____|___| \_/ |___|____|              \ / \ \ .)");
    printw("\n");
    printw(R"(                            (`/ /         ___ ___ _    ___ ___ _____ ___ ___  _  _        / /.) ) .)");
    printw("\n");
    printw(R"(                           \ \ / \       / __| __| |  | __/ __|_   _|_ _/ _ \| \| |      / / \ / .)");
    printw("\n");
    printw(R"(                            \ \') )      \__ \ _|| |__| _| (__  | |  | | (_) | .` |     ( (,\ \ .)");
    printw("\n");
    printw(R"(                           / \ / /       |___/___|____|___\___| |_| |___\___/|_|\_|      \ / \ \ .)");
    printw("\n");
    printw(R"(                           \ \ / \                                                       / / \ / .)");
    printw("\n");
    printw(R"(                            \ \') )                                                     ( (,\ \ .)");
    printw("\n");
    // End of header message

    // First line of choice 1 is highlighted if it is the current option
    printw(R"(                           / \ / /          )");
    if (choice == 1)
    {
        attron(A_REVERSE);
    }
    printw("Act One");
    if (choice == 1)
    {
        attroff(A_REVERSE);
    }

    // First line of second choice is highlighted if it is the current option
    printw("                      ");
    if (choice == 2)
    {
        attron(A_REVERSE);
    }
    printw("Act Two");
    if (choice == 2)
    {
        attroff(A_REVERSE);
    }

    // End of line design
    printw(R"(         \ / \ \ .)");
    printw("\n");

    // Second line of choice 1 is highlighted if it is the current option
    printw(R"(                           \ \ / \    )");
    if (choice == 1)
    {
        attron(A_REVERSE);
    }
    printw("The Clue in the Cell");
    if (choice == 1)
    {
        attroff(A_REVERSE);
    }

    // Second line of second choice is highlighted if it is the current option
    printw("          ");
    if (choice == 2)
    {
        attron(A_REVERSE);
    }
    printw("The Armory Arsenal");
    if (choice == 2)
    {
        attroff(A_REVERSE);
    }

    // End of line design
    printw(R"(   / / \ / .)");
    printw("\n");

    // Design of next line
    printw(R"(                            \ \') )                                                     ( (,\ \ .)");
    printw("\n");

    // First line of choice 3 is highlighted if it is the current option
    printw(R"(                           / \ / /          )");
    if (choice == 3)
    {
        attron(A_REVERSE);
    }
    printw("Act Three");
    if (choice == 3)
    {
        attroff(A_REVERSE);
    }

    // First line of choice 4 is highlighted if it is the current option
    printw("                   ");
    if (choice == 4)
    {
        attron(A_REVERSE);
    }
    printw("Act Four");
    if (choice == 4)
    {
        attroff(A_REVERSE);
    }

    // End of line design
    printw(R"(         \ / \ \ .)");
    printw("\n");

    // Second line of choice 3 is highlighted if it is the current option
    printw(R"(                           \ \ / \      )");
    if (choice == 3)
    {
        attron(A_REVERSE);
    }
    printw("The Guards Gamble");
    if (choice == 3)
    {
        attroff(A_REVERSE);
    }

    // Second line of choice 4 is highlighted if it is the current option
    printw("           ");
    if (choice == 4)
    {
        attron(A_REVERSE);
    }
    printw("Ghostly Pursuits");
    if (choice == 4)
    {
        attroff(A_REVERSE);
    }

    // End of line design
    printw(R"(     / / \ / .)");
    printw("\n");

    // Design of next line
    printw(R"(                            \ \') )                                                     ( (,\ \ .)");
    printw("\n");

    // Choice 4 is highlighted if it is the current option
    printw(R"(                           / \ / /                  )");
    if (choice == 5)
    {
        attron(A_REVERSE);
    }
    printw("Return to Main Menu");
    if (choice == 5)
    {
        attroff(A_REVERSE);
    }
    printw(R"(                \ / \ \ .)");

    // Footer design
    printw("\n");
    printw(R"(                           \ \ / \       _       _       _       _       _       _       / / \ / .)");
    printw("\n");
    printw(R"(                            \ `.\ `-._,-'_`-._,-'_`-._,-'_`-._,-'_`-._,-'_`-._,-'_`-._,-'_/,\ \ .)");
    printw("\n");
    printw(R"(                           ( `. `,~-._`-<,>-._`-<,>-._`-<,>-._`-<,>-._`-<,>-._`-<,>-._`-=,' ,\ \ .)");
    printw("\n");
    printw(R"(                            `. `'_,-<_>-'_,-<_>-'_,-<_>-'_,-<_>-'_,-<_>-'_,-<_>-'_,-<_>-'_,"-' ; .)");
    printw("\n");
    printw(R"(                              `-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-.-' .)");
    printw("\n");
    printw("\n");
    refresh();

    // Note that the instruction input is taken as part of showLevelScreen()
    // It is kept separate from this function so that this function can
    // stay standalone
}

int showLevelScreen()
{
    // This function handles the main flow of the level screen and returns
    // which option was selected

    using namespace std;

    // Top option is selected first
    int optionChosen = 1;
    displayLevels(optionChosen);

    // Will continue until user presses enter
    while (true)
    {
        bool br = false;
        int c = getch();

        switch (c)
        {
        case KEY_UP:
            if (optionChosen == 1 || optionChosen == 2)
            {
                // Go back to last row
                optionChosen = 5;
            }
            else if (optionChosen == 3)
            {
                optionChosen = 1;
            }
            else if (optionChosen == 4)
            {
                optionChosen = 2;
            }
            else
            {
                // Go to option 3 if current
                // option is option 5
                optionChosen = 3;
            }
            break;
        case KEY_DOWN:
            if (optionChosen == 3 || optionChosen == 4)
                optionChosen = 5;
            else if (optionChosen == 1)
            {
                optionChosen = 3;
            }
            else if (optionChosen == 2)
            {
                optionChosen = 4;
            }
            else
            {
                // Go back to option 1 if
                // current option is option 5
                optionChosen = 1;
            }
            break;
        case KEY_LEFT:
            if (optionChosen == 1)
                optionChosen = 5;
            else
            {
                --optionChosen;
            }
            break;
        case KEY_RIGHT:
            if (optionChosen == 5)
                optionChosen = 1;
            else
            {
                ++optionChosen;
            }
            break;
        case 10:
            // ENTER
            br = true;
            break;
        default:
            continue;
        }

        // Check if user has pressed enter
        if (br)
            break;
        else
        {
            displayLevels(optionChosen);
        }
    }

    return optionChosen;
}