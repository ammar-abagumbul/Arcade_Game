// This file contains functions which handle
// the main menu once the game has been loaded

#include <iostream>
#include <string>

#include "../include/menu_screen.h"
#include "../include/invalid_input_screen.h"


void printMainMenu()
{
    // This function outputs the entire main menu as well as the options available

    using namespace std;

    // Terminal cleared to improve user experience
    system("cls");
    cout << R"(                           ###############################################################)" << endl;
    cout << R"(                           ###############################################################)" << endl;
    cout << endl;
    cout << R"(                                     __        __   _                          _)" << endl;
    cout << R"(                                     \ \      / /__| | ___ ___  _ __ ___   ___| |)" << endl;
    cout << R"(                                      \ \ /\ / / _ \ |/ __/ _ \| '_ ` _ \ / _ \ |)" << endl;
    cout << R"(                                       \ V  V /  __/ | (_| (_) | | | | | |  __/_|)" << endl;
    cout << R"(                                        \_/\_/ \___|_|\___\___/|_| |_| |_|\___(_))" << endl;
    cout << endl;
    cout << R"(                           ---------------------------------------------------------------)" << endl;
    cout << R"(                                                                              )" << endl;
    cout << R"(                                                What would you like to do?)" << endl;
    cout << R"(                                                1. NEW GAME)" << endl;
    cout << R"(                                                2. LOAD GAME)" << endl;
    cout << R"(                                                3. CREDITS)" << endl;
    cout << R"(                                                4. EXIT)" << endl;
    cout << endl;
    cout << R"(                           ---------------------------------------------------------------)" << endl;
    cout << endl;
    cout << R"(                                            Enter the instruction number:)" << endl;

    // Note that the instruction input is taken as part of showMenuScreen()
    // It is kept separate from this function so that this function can
    // stay standalone
}

int showMenuScreen()
{
    // This function handles the main flow of the main menu and returns
    // which option was selected

    using namespace std;

    char c;

    printMainMenu();
    
    // This part will keep repeating until
    // a valid instruction number is input
    while (true)
    {
        // Output a left padding for the input
        cout << "                                                       ";
        
        string s;
        cin >> s;
        c = s[0];
        
        if (c >= '1' && c <= '4')
        {
            break;
        }
        else
        {
            printInvalidInput();
            printMainMenu();
        }
    }

    // Return an int instead of char
    return (c - '0');
}