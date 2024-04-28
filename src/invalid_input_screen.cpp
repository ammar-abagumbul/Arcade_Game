// This file is kept standalone because it shows the
// invalid input message, which is very important for
// error handling

#include <iostream>
#include <stdlib.h>

#include "../include/invalid_input_screen.h"

#include "ncurses.h"

// Comment according to need
// Library effective with Windows
//#include <windows.h>
// Library effective with Linux
#include <unistd.h>


void printInvalidInput()
{
    // This function outputs that the input is invalid

    using namespace std;

    // Terminal is cleared
    clear();

    printw("                                                                              \n");
    printw("                                                                              \n");
    printw("                                                                              \n");
    printw("                                                                              \n");
    printw("                                                                              \n");
    printw("                                                                              \n");
    printw("                                                                              \n");
    printw("                             ---------------------------------------------------------------\n");
    printw("                                                                              \n");
    printw("                                                                              \n");
    printw("                                             Invalid Input! Please try again!              \n");
    printw("                                                                              \n");
    printw("                                                                              \n");
    printw("                             ---------------------------------------------------------------\n");
    refresh();

    // Sleep time to allow the user to read the message
    sleep(1.5);
}