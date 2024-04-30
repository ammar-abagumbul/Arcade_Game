#include "ncurses.h"

void slidingDisplayMenu(int choice, bool resumeAvailable)
{
    clear();
    printw("\n\n\n\n\n");
    printw("                                               THE CLUE IN THE CELL\n\n");

    printw("                                                   ");
    if (choice == 1)
        attron(A_REVERSE);
    printw("NEW GAME");
    printw("\n");
    if (choice == 1)
        attroff(A_REVERSE);

    if (resumeAvailable)
    {
        printw("                                                   ");
        if (choice == 2)
            attron(A_REVERSE);
        printw("RESUME GAME");
        printw("\n");
        if (choice == 2)
            attroff(A_REVERSE);
    }

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
            return optionChosen;
            break;
        default:
            continue;
        }
        slidingDisplayMenu(optionChosen, resumeAvailable);
    }

    return optionChosen;
}