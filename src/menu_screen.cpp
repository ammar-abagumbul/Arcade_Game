#include <iostream>
#include <string>
#include "../include/menu_screen.h"
#include "../include/invalid_input_screen.h"

void printMainMenu()
{
    using namespace std;

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
}

int showMenuScreen()
{
    using namespace std;

    char c;

    printMainMenu();
    while (true)
    {
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

    return (c - '0');
}