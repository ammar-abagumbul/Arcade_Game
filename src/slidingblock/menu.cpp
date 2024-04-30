// This file contains functions which handle
// the main menu once the sliding block has been selected

#include "ncurses.h"

void slidingDisplayMenu(int choice, bool resumeAvailable)
{
    // This function outputs the entire main menu as well as the options available

    // Terminal cleared to improve user experience
    clear();

    // Header message
    printw("\n\n\n\n\n");
    printw("                                               THE CLUE IN THE CELL\n\n");
    // End of header message

    // First choice is highlighted if it is the current option
    printw("                                                   ");
    if (choice == 1)
        attron(A_REVERSE);
    printw("NEW GAME");
    printw("\n");
    if (choice == 1)
        attroff(A_REVERSE);

    // First checks if saved file exists
    if (resumeAvailable)
    {
        // Choice is highlighted if it is the current option
        printw("                                                   ");
        if (choice == 2)
            attron(A_REVERSE);
        printw("RESUME GAME");
        printw("\n");
        if (choice == 2)
            attroff(A_REVERSE);
    }

    // Choice is highlighted if it is the current option
    printw("                                                   ");
    if (choice == 3 || (!resumeAvailable && choice == 2))
        attron(A_REVERSE);
    printw("EXIT");
    printw("\n");
    if (choice == 3 || (!resumeAvailable && choice == 2))
        attroff(A_REVERSE);
}

int slidingShowMenuScreen(bool resumeAvailable)
{
    // This function handles the main flow of the main menu and returns
    // which option was selected

    using namespace std;

    // Initially, first option is chosen
    int optionChosen = 1;
    slidingDisplayMenu(optionChosen, resumeAvailable);

    while (true)
    {
        bool br = false;
        int c = getch();

        switch (c)
        {
        case KEY_UP:
            if (optionChosen == 1 && resumeAvailable)
            {
                // If RESUME GAME is available and current
                // option is first option

                optionChosen = 3;
            }
            else if (optionChosen == 1)
            {
                optionChosen = 2;
            }
            else
            {
                --optionChosen;
            }
            break;
        case KEY_DOWN:
            if (optionChosen == 3)
            {
                optionChosen = 1;
            }
            else if (optionChosen == 2 && !resumeAvailable)
            {
                optionChosen = 1;
            }
            else
            {
                ++optionChosen;
            }
            break;
        case 10:
            // ENTER
            return optionChosen;
            break;
        default:
            continue;
        }
        
        slidingDisplayMenu(optionChosen, resumeAvailable);
    }

    return optionChosen;
}