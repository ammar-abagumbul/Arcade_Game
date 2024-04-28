// This file contains functions which handle
// the main menu once the game has been loaded

#include <iostream>
#include <string>

#include "../include/menu_screen.h"
#include "../include/invalid_input_screen.h"

#include "ncurses.h"

void printMainMenu()
{
    // This function outputs the entire main menu as well as the options available

    using namespace std;

    // Terminal cleared to improve user experience
    clear();
    printw(R"(                           ###############################################################)");printw("\n");
    printw(R"(                           ###############################################################)");printw("\n");
    printw("\n");
    printw(R"(                                     __        __   _                          _)");printw("\n");
    printw(R"(                                     \ \      / /__| | ___ ___  _ __ ___   ___| |)");printw("\n");
    printw(R"(                                      \ \ /\ / / _ \ |/ __/ _ \| '_ ` _ \ / _ \ |)");printw("\n");
    printw(R"(                                       \ V  V /  __/ | (_| (_) | | | | | |  __/_|)");printw("\n");
    printw(R"(                                        \_/\_/ \___|_|\___\___/|_| |_| |_|\___(_))");printw("\n");
    printw("\n");
    printw(R"(                           ---------------------------------------------------------------)");printw("\n");
    printw(R"(                                                                              )");printw("\n");
    printw(R"(                                                What would you like to do?)");printw("\n");
    printw(R"(                                                1. PLAY)");printw("\n");
    printw(R"(                                                2. CREDITS)");printw("\n");
    printw(R"(                                                3. EXIT)");printw("\n");
    printw("\n");
    printw(R"(                           ---------------------------------------------------------------)");printw("\n");
    printw("\n");
    printw(R"(                                            Enter the instruction number:)");printw("\n");
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

    char c;

    printMainMenu();
    
    // This part will keep repeating until
    // a valid instruction number is input
    while (true)
    {
        // Output a left padding for the input
        printw("                                                       ");
        
        string s;
        cin >> s;
        c = s[0];
        
        if (s.length() == 1 && c >= '1' && c <= '3')
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

void displayLevels(){
    // This function outputs the level selection options available

    using namespace std;

    // Terminal cleared to improve user experience
    clear();

    printw(R"(                          .-"-._,-'_`-._,-'_`-._,-'_`-._,-'_`-,_,-'_`-,_,-'_`-,_,-'_`-,_,-'_`-,.)");printw("\n");
    printw(R"(                          (  ,-'_,-<.>-'_,-<.>-'_,-<.>-'_,-<.>-'_,-<.>-'_,-<.>-'_,-<.>-'_,-~-} ;.)");printw("\n");
    printw(R"(                           \ \.'_>-._`-<_>-._`-<_>-._`-<_>-._`-<_>-._`-<_>-._`-<_>-._`-._~--. \ .)");printw("\n");
    printw(R"(                           /\ \/ ,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._`./ \ \ .)");printw("\n");
    printw(R"(                          ( (`/ /                  _    _____   _____ _                  `/ /.) ) .)");printw("\n");
    printw(R"(                           \ \ / \                | |  | __\ \ / / __| |                 / / \ / .)");printw("\n");
    printw(R"(                            \ \') )               | |__| _| \ V /| _|| |                ( (,\ \ .)");printw("\n");
    printw(R"(                           / \ / /                |____|___| \_/ |___|____|              \ / \ \ .)");printw("\n");
    printw(R"(                            (`/ /         ___ ___ _    ___ ___ _____ ___ ___  _  _        / /.) ) .)");printw("\n");
    printw(R"(                           \ \ / \       / __| __| |  | __/ __|_   _|_ _/ _ \| \| |      / / \ / .)");printw("\n");
    printw(R"(                            \ \') )      \__ \ _|| |__| _| (__  | |  | | (_) | .` |     ( (,\ \ .)");printw("\n");
    printw(R"(                           / \ / /       |___/___|____|___\___| |_| |___\___/|_|\_|      \ / \ \ .)");printw("\n");
    printw(R"(                           \ \ / \                                                       / / \ / .)");printw("\n");
    printw(R"(                            \ \') )                                                     ( (,\ \ .)");printw("\n");
    printw(R"(                           / \ / /        1. Act One                  2. Act Two         \ / \ \ .)");printw("\n");
    printw(R"(                           \ \ / \      The Clue in the           The Armory Arsenal     / / \ / .)");printw("\n");
    printw(R"(                            \ \') )                                                     ( (,\ \ .)");printw("\n");
    printw(R"(                           / \ / /        3. Act Three                4. Act Four        \ / \ \ .)");printw("\n");
    printw(R"(                           \ \ / \      The Guards Gamble           Ghostly Pursuits     / / \ / .)");printw("\n");
    printw(R"(                            \ \') )                                                     ( (,\ \ .)");printw("\n");
    printw(R"(                           / \ / /                 5. Return to Main Menu                \ / \ \ .)");printw("\n");
    printw(R"(                           \ \ / \       _       _       _       _       _       _       / / \ / .)");printw("\n");
    printw(R"(                            \ `.\ `-._,-'_`-._,-'_`-._,-'_`-._,-'_`-._,-'_`-._,-'_`-._,-'_/,\ \ .)");printw("\n");
    printw(R"(                           ( `. `,~-._`-<,>-._`-<,>-._`-<,>-._`-<,>-._`-<,>-._`-<,>-._`-=,' ,\ \ .)");printw("\n");
    printw(R"(                            `. `'_,-<_>-'_,-<_>-'_,-<_>-'_,-<_>-'_,-<_>-'_,-<_>-'_,-<_>-'_,"-' ; .)");printw("\n");
    printw(R"(                              `-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-._,-' `-.-' .)");printw("\n");
    printw("\n");
    printw(R"(                                               Enter the instruction number:)");printw("\n");
    refresh();


    // Note that the instruction input is taken as part of showLevelScreen()
    // It is kept separate from this function so that this function can
    // stay standalone
}

int showLevelScreen(){
    // This function handles the main flow of the level screen and returns
    // which option was selected

    using namespace std;

    char c;

    displayLevels();
    
    // This part will keep repeating until
    // a valid instruction number is input
    while (true)
    {
        // Output a left padding for the input
        printw("                                                          ");
        
        string s;
        cin >> s;
        c = s[0];
        
        if (s.length() == 1 && c >= '1' && c <= '5')
        {
            break;
        }
        else
        {
            printInvalidInput();
            displayLevels();
        }
    }

    // Return an int instead of char
    return (c - '0');
}