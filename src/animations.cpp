// This file contains all the animations that are
// displayed to the user before and after each game
// This also includes the main story line

#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <algorithm>
#include <chrono>
#include <thread>

#include "../include/animations.h"
#include "ncurses.h"

// Comment according to need
// Library effective with Windows
// #include <windows.h>
// Library effective with Linux
#include <unistd.h>

// Introductory animations:

void introAnimations()
{
    // This function will print the intro animations which is used to welcome the users
    // ASCII Art generated from https://patorjk.com/software/taag/#p=testall&h=3&v=1&f=Graffiti&t=The%20Great%20Escape

    using namespace std;

    // Terminal cleared before each output to create a motion effect
    clear();
    printw(R"(               _______                                        )");
    printw("\n");
    printw(R"(              |__   __|                                      )");
    printw("\n");
    printw(R"(                 | |                                                                        ___)");
    printw("\n");
    printw(R"(                 | |                                                                       / _ \)");
    printw("\n");
    printw(R"(                 | |                                                                      |  __/)");
    printw("\n");
    printw(R"(                 |_|                                                                       \___|)");
    printw("\n");
    printw(R"(                                                                                             )");
    printw("\n");
    printw(R"(                                                                                             )");
    printw("\n");
    refresh();
    sleep(1); // sleep time used to create a stop-motion like effect

    clear();
    printw(R"(               _______ _                                       )");
    printw("\n");
    printw(R"(              |__   __| |                                      )");
    printw("\n");
    printw(R"(                 | |  | |__                                                          _ __   ___)");
    printw("\n");
    printw(R"(                 | |  | '_ \                                                        | '_ \ / _ \)");
    printw("\n");
    printw(R"(                 | |  | | | |                                                       | |_) |  __/)");
    printw("\n");
    printw(R"(                 |_|  |_| |_|                                                       | .__/ \___|)");
    printw("\n");
    printw(R"(                                                                                    | |         )");
    printw("\n");
    printw(R"(                                                                                    |_|         )");
    printw("\n");
    refresh();
    sleep(1);

    clear();
    printw(R"(               _______ _                                       )");
    printw("\n");
    printw(R"(              |__   __| |                                      )");
    printw("\n");
    printw(R"(                 | |  | |__   ___                                           ___ __ _ _ __   ___)");
    printw("\n");
    printw(R"(                 | |  | '_ \ / _ \                                         / __/ _` | '_ \ / _ \)");
    printw("\n");
    printw(R"(                 | |  | | | |  __/                                        | (_| (_| | |_) |  __/)");
    printw("\n");
    printw(R"(                 |_|  |_| |_|\___|                                         \___\__,_| .__/ \___|)");
    printw("\n");
    printw(R"(                                                                                    | |         )");
    printw("\n");
    printw(R"(                                                                                    |_|         )");
    printw("\n");
    refresh();
    sleep(1);

    clear();
    printw(R"(               _______ _             _____                      ______)");
    printw("\n");
    printw(R"(              |__   __| |           / ____|                    |  ____|)");
    printw("\n");
    printw(R"(                 | |  | |__   ___  | |  __ _ __                | |__   ___  ___ __ _ _ __   ___)");
    printw("\n");
    printw(R"(                 | |  | '_ \ / _ \ | | |_ | '__/               |  __| / __|/ __/ _` | '_ \ / _ \)");
    printw("\n");
    printw(R"(                 | |  | | | |  __/ | |__| | |                  | |____\__ | (_| (_| | |_) |  __/)");
    printw("\n");
    printw(R"(                 |_|  |_| |_|\___|  \_____|_|                  |______|___/\___\__,_| .__/ \___|)");
    printw("\n");
    printw(R"(                                                                                    | |         )");
    printw("\n");
    printw(R"(                                                                                    |_|         )");
    printw("\n");
    refresh();
    sleep(1);

    clear();
    printw(R"(               _______ _             _____                _     ______)");
    printw("\n");
    printw(R"(              |__   __| |           / ____|              | |   |  ____|)");
    printw("\n");
    printw(R"(                 | |  | |__   ___  | |  __ _ __ ___  __ _| |_  | |__   ___  ___ __ _ _ __   ___)");
    printw("\n");
    printw(R"(                 | |  | '_ \ / _ \ | | |_ | '__/ _ \/ _` | __| |  __| / __|/ __/ _` | '_ \ / _ \)");
    printw("\n");
    printw(R"(                 | |  | | | |  __/ | |__| | | |  __| (_| | |_  | |____\__ | (_| (_| | |_) |  __/)");
    printw("\n");
    printw(R"(                 |_|  |_| |_|\___|  \_____|_|  \___|\__,_|\__| |______|___/\___\__,_| .__/ \___|)");
    printw("\n");
    printw(R"(                                                                                    | |         )");
    printw("\n");
    printw(R"(                                                                                    |_|         )");
    printw("\n");
    refresh();
    sleep(1.5); // sleep time increased because of subtitle next

    clear();
    printw(R"(               _______ _             _____                _     ______)");
    printw("\n");
    printw(R"(              |__   __| |           / ____|              | |   |  ____|)");
    printw("\n");
    printw(R"(                 | |  | |__   ___  | |  __ _ __ ___  __ _| |_  | |__   ___  ___ __ _ _ __   ___)");
    printw("\n");
    printw(R"(                 | |  | '_ \ / _ \ | | |_ | '__/ _ \/ _` | __| |  __| / __|/ __/ _` | '_ \ / _ \)");
    printw("\n");
    printw(R"(                 | |  | | | |  __/ | |__| | | |  __| (_| | |_  | |____\__ | (_| (_| | |_) |  __/)");
    printw("\n");
    printw(R"(                 |_|  |_| |_|\___|  \_____|_|  \___|\__,_|\__| |______|___/\___\__,_| .__/ \___|)");
    printw("\n");
    printw(R"(                                                                                    | |         )");
    printw("\n");
    printw(R"(                                                                                    |_|         )");
    printw("\n");
    printw(R"(                         _   _   _   _   _   _   _   _   _     _   _   _   _   _   _)");
    printw("\n");
    printw(R"(                        / \ / \ / \ / \ / \ / \ / \ / \ / \   / \ / \ / \ / \ / \ / \)");
    printw("\n");
    printw(R"(                       ( A ( L ( A ( C ( R ( A ( N ( ' ( S ) ( S ( H ( A ( D ( O ( W ))");
    printw("\n");
    printw(R"(                        \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/   \_/ \_/ \_/ \_/ \_/ \_/)");
    printw("\n");
    refresh();
    sleep(1.5); // High sleep time continued as "Press ENTER to continue\n" to be printed

    // Create some empty lines
    printw("\n");
    printw("\n");
    printw("\n");

    // Allow user to interact by pressing enter to continue
    printw("                                     Press any ENTER to continue\n");
    refresh();

    int ch;
    do
    {
        ch = getch();
    } while (ch != '\n');
}

void printCredits()
{
    // This function will print the credits of the developers who worked on this project
    // ASCII Art generated from https://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20

    using namespace std;

    // Terminal cleared before each output to create a motion effect
    clear();
    printw("\n");
    printw("\n");
    printw("\n");
    printw("\n");
    printw("\n");
    printw("\n");
    printw("\n");
    printw("                            ______                          ________ __ __\n");
    printw(R"(                           / _____________  __  ______     <  |__  // // /)");
    printw("\n");
    printw(R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)");
    printw("\n");
    printw(R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)");
    printw("\n");
    printw(R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)");
    printw("\n");
    printw(R"(                                              /_/                         )");
    printw("\n");
    printw(R"(                      =====================================================)");
    printw("\n");
    refresh();
    sleep(1); // sleep time used to create a stop - motion like effect

    clear();
    printw("\n");
    printw("\n");
    printw("\n");
    printw("\n");
    printw("\n");
    printw("\n");
    printw("                            ______                          ________ __ __\n");
    printw(R"(                           / _____________  __  ______     <  |__  // // /)");
    printw("\n");
    printw(R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)");
    printw("\n");
    printw(R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)");
    printw("\n");
    printw(R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)");
    printw("\n");
    printw(R"(                                              /_/                         )");
    printw("\n");
    printw(R"(                      =====================================================)");
    printw("\n");
    printw("\n");
    refresh();
    sleep(1);

    clear();
    printw("\n");
    printw("\n");
    printw("\n");
    printw("\n");
    printw("\n");
    printw("                            ______                          ________ __ __\n");
    printw(R"(                           / _____________  __  ______     <  |__  // // /)");
    printw("\n");
    printw(R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)");
    printw("\n");
    printw(R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)");
    printw("\n");
    printw(R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)");
    printw("\n");
    printw(R"(                                              /_/                         )");
    printw("\n");
    printw(R"(                      =====================================================)");
    printw("\n");
    printw("\n");
    printw("                           Abagumbul Ammar Amin                3036259243                \n");
    refresh();
    sleep(1);

    clear();
    printw("\n");
    printw("\n");
    printw("\n");
    printw("\n");
    printw("                            ______                          ________ __ __\n");
    printw(R"(                           / _____________  __  ______     <  |__  // // /)");
    printw("\n");
    printw(R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)");
    printw("\n");
    printw(R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)");
    printw("\n");
    printw(R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)");
    printw("\n");
    printw(R"(                                              /_/                         )");
    printw("\n");
    printw(R"(                      =====================================================)");
    printw("\n");
    printw("\n");
    printw("                           Abagumbul Ammar Amin                3036259243                \n");
    printw("                           Ali Musaddiq                        3036259011                \n");
    refresh();
    sleep(1);

    clear();
    printw("\n");
    printw("\n");
    printw("\n");
    printw("                            ______                          ________ __ __\n");
    printw(R"(                           / _____________  __  ______     <  |__  // // /)");
    printw("\n");
    printw(R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)");
    printw("\n");
    printw(R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)");
    printw("\n");
    printw(R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)");
    printw("\n");
    printw(R"(                                              /_/                         )");
    printw("\n");
    printw(R"(                      =====================================================)");
    printw("\n");
    printw("\n");
    printw("                           Abagumbul Ammar Amin                3036259243                \n");
    printw("                           Ali Musaddiq                        3036259011                \n");
    printw("                           Chowdhury Aosaf Ershad              3036253732                \n");
    refresh();
    sleep(1);

    clear();
    printw("\n");
    printw("\n");
    printw("                            ______                          ________ __ __\n");
    printw(R"(                           / _____________  __  ______     <  |__  // // /)");
    printw("\n");
    printw(R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)");
    printw("\n");
    printw(R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)");
    printw("\n");
    printw(R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)");
    printw("\n");
    printw(R"(                                              /_/                         )");
    printw("\n");
    printw(R"(                      =====================================================)");
    printw("\n");
    printw("\n");
    printw("                           Abagumbul Ammar Amin                3036259243                \n");
    printw("                           Ali Musaddiq                        3036259011                \n");
    printw("                           Chowdhury Aosaf Ershad              3036253732                \n");
    printw("                           Ignatius De Loyola Dominique Japar  3036184072                \n");
    refresh();
    sleep(1);

    clear();
    printw("\n");
    printw("                            ______                          ________ __ __\n");
    printw(R"(                           / _____________  __  ______     <  |__  // // /)");
    printw("\n");
    printw(R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)");
    printw("\n");
    printw(R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)");
    printw("\n");
    printw(R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)");
    printw("\n");
    printw(R"(                                              /_/                         )");
    printw("\n");
    printw(R"(                      =====================================================)");
    printw("\n");
    printw("\n");
    printw("                           Abagumbul Ammar Amin                3036259243                \n");
    printw("                           Ali Musaddiq                        3036259011                \n");
    printw("                           Chowdhury Aosaf Ershad              3036253732                \n");
    printw("                           Ignatius De Loyola Dominique Japar  3036184072                \n");
    printw("                           Sheik Mahmood Afif                  3036225230                \n");
    refresh();
    sleep(1);

    clear();
    printw("                            ______                          ________ __ __\n");
    printw(R"(                           / _____________  __  ______     <  |__  // // /)");
    printw("\n");
    printw(R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)");
    printw("\n");
    printw(R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)");
    printw("\n");
    printw(R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)");
    printw("\n");
    printw(R"(                                              /_/                         )");
    printw("\n");
    printw(R"(                      =====================================================)");
    printw("\n");
    printw("\n");
    printw("                           Abagumbul Ammar Amin                3036259243                \n");
    printw("                           Ali Musaddiq                        3036259011                \n");
    printw("                           Chowdhury Aosaf Ershad              3036253732                \n");
    printw("                           Ignatius De Loyola Dominique Japar  3036184072                \n");
    printw("                           Sheik Mahmood Afif                  3036225230                \n");
    refresh();
    sleep(1.5);

    clear();
    printw("                            ______                          ________ __ __\n");
    printw(R"(                           / _____________  __  ______     <  |__  // // /)");
    printw("\n");
    printw(R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)");
    printw("\n");
    printw(R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)");
    printw("\n");
    printw(R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)");
    printw("\n");
    printw(R"(                                              /_/                         )");
    printw("\n");
    printw(R"(                      =====================================================)");
    printw("\n");
    printw("\n");
    printw("                           Abagumbul Ammar Amin                3036259243                \n");
    printw("                           Ali Musaddiq                        3036259011                \n");
    printw("                           Chowdhury Aosaf Ershad              3036253732                \n");
    printw("                           Ignatius De Loyola Dominique Japar  3036184072                \n");
    printw("                           Sheik Mahmood Afif                  3036225230                \n");

    // Create line break and
    // allow user to interact by pressing enter to continue
    printw("\n");
    printw("                                    Press any ENTER to continue\n");
    refresh();

    int ch;
    do
    {
        ch = getch();
    } while (ch != '\n');
}

void storyLineIntro()
{
    // This function prints the introduction of the story line-by-line
    // character-by-character
    // This is done by storing separate lines as strings and outputting
    // them inside a border
    // Terminal cleared and wait time added before each output to create a motion effect

    // Border ASCII taken from https://www.asciiart.eu/art-and-design/borders

    using namespace std;

    int width = 42;

    string s1 = "Sam Riker, a former detective, finds himse";
    for (int i = 0; i < 42; i++)
    {
        int numSpaces = width - s1.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                              __| |____________________________________________| |__)");
        printw("\n");
        printw(R"(                             (__   ____________________________________________   __))");
        printw("\n");
        printw(R"(                                | | %-*s | |)", width, s1.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        printw(R"(                              __| |____________________________________________| |__)");
        printw("\n");
        printw(R"(                             (__   ____________________________________________   __))");
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s2 = "lf framed for a crime he didn't commit. Se";
    for (int i = 0; i < 42; i++)
    {
        int numSpaces = width - s2.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                              __| |____________________________________________| |__)");
        printw("\n");
        printw(R"(                             (__   ____________________________________________   __))");
        printw("\n");
        printw(R"(                                | | Sam Riker, a former detective, finds himse | |)");
        printw("\n");
        printw(R"(                                | | %-*s | |)", width, s2.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        printw(R"(                              __| |____________________________________________| |__)");
        printw("\n");
        printw(R"(                             (__   ____________________________________________   __))");
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s3 = "ntenced to life in Alacran Maximum Securit";
    for (int i = 0; i < 42; i++)
    {
        int numSpaces = width - s3.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                              __| |____________________________________________| |__)");
        printw("\n");
        printw(R"(                             (__   ____________________________________________   __))");
        printw("\n");
        printw(R"(                                | | Sam Riker, a former detective, finds himse | |)");
        printw("\n");
        printw(R"(                                | | lf framed for a crime he didn't commit. Se | |)");
        printw("\n");
        printw(R"(                                | | %-*s | |)", width, s3.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        printw(R"(                              __| |____________________________________________| |__)");
        printw("\n");
        printw(R"(                             (__   ____________________________________________   __))");
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s4 = "y Prison, he knows the only way to clear h";
    for (int i = 0; i < 42; i++)
    {
        int numSpaces = width - s4.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                              __| |____________________________________________| |__)");
        printw("\n");
        printw(R"(                             (__   ____________________________________________   __))");
        printw("\n");
        printw(R"(                                | | Sam Riker, a former detective, finds himse | |)");
        printw("\n");
        printw(R"(                                | | lf framed for a crime he didn't commit. Se | |)");
        printw("\n");
        printw(R"(                                | | ntenced to life in Alacran Maximum Securit | |)");
        printw("\n");
        printw(R"(                                | | %-*s | |)", width, s4.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        printw(R"(                              __| |____________________________________________| |__)");
        printw("\n");
        printw(R"(                             (__   ____________________________________________   __))");
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s5 = "is name is to escape and uncover the consp";
    for (int i = 0; i < 42; i++)
    {
        int numSpaces = width - s5.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                              __| |____________________________________________| |__)");
        printw("\n");
        printw(R"(                             (__   ____________________________________________   __))");
        printw("\n");
        printw(R"(                                | | Sam Riker, a former detective, finds himse | |)");
        printw("\n");
        printw(R"(                                | | lf framed for a crime he didn't commit. Se | |)");
        printw("\n");
        printw(R"(                                | | ntenced to life in Alacran Maximum Securit | |)");
        printw("\n");
        printw(R"(                                | | y Prison, he knows the only way to clear h | |)");
        printw("\n");
        printw(R"(                                | | %-*s | |)", width, s5.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        printw(R"(                              __| |____________________________________________| |__)");
        printw("\n");
        printw(R"(                             (__   ____________________________________________   __))");
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s6 = "iracy that put him behind bars.....       ";
    for (int i = 0; i < 42; i++)
    {
        int numSpaces = width - s6.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                              __| |____________________________________________| |__)");
        printw("\n");
        printw(R"(                             (__   ____________________________________________   __))");
        printw("\n");
        printw(R"(                                | | Sam Riker, a former detective, finds himse | |)");
        printw("\n");
        printw(R"(                                | | lf framed for a crime he didn't commit. Se | |)");
        printw("\n");
        printw(R"(                                | | ntenced to life in Alacran Maximum Securit | |)");
        printw("\n");
        printw(R"(                                | | y Prison, he knows the only way to clear h | |)");
        printw("\n");
        printw(R"(                                | | is name is to escape and uncover the consp | |)");
        printw("\n");
        printw(R"(                                | | %-*s | |)", width, s6.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                              __| |____________________________________________| |__)");
        printw("\n");
        printw(R"(                             (__   ____________________________________________   __))");
        printw("\n");
        printw(R"(                                | |                                            | |)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // Add line break
    printw("\n");

    // Prompt user to press enter after they have finished reading the text
    printw("                                            Press ENTER to continue\n");
    int ch;
    do
    {
        ch = getch();
    } while (ch != '\n');
}

std::string randomize_letters(const std::string input)
{
    // When passed a parameter, this function will randomly
    // shuffle all the characters in the parameter string

    // This function was made using Generative AI tools

    // No need to use std namespace due to limited use
    std::string output = input;
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(output.begin(), output.end(), g);

    return output;
}

// Animations for Act One:

void displayActOne()
{
    // This function prints a UI representing the start of Act One
    // Terminal cleared and wait time added before each output to create a motion effect

    using namespace std;

    // ASCII art generated from https://www.asciiart.eu/text-to-ascii-art

    for (int i = 0; i < 6; i++)
    {
        clear();
        printw("\n");
        printw("\n");
        printw("                    _____         _____   _________________               _____  _____   ______        ______   \n");
        printw(R"(                ___|\    \    ___|\    \ /                 \         ____|\    \|\    \ |\     \   ___|\     \  )");
        printw("\n");
        printw(R"(               /    /\    \  /    /\    \\______     ______/        /     /\    \\\    \| \     \ |     \     \)");
        printw("\n");
        printw(R"(              |    |  |    ||    |  |    |  \( /    /  )/          /     /  \    \\|    \  \     ||     ,_____/|)");
        printw("\n");
        printw(R"(              |    |__|    ||    |  |____|   ' |   |   '          |     |    |    ||     \  |    ||     \--'\_|/)");
        printw("\n");
        printw(R"(              |    .--.    ||    |   ____      |   |              |     |    |    ||      \ |    ||     /___/|)");
        printw("\n");
        printw(R"(              |    |  |    ||    |  |    |    /   //              |\     \  /    /||    |\ \|    ||     \____|\)");
        printw("\n");
        printw(R"(              |____|  |____||\ ___\/    /|   /___//               | \_____\/____/ ||____||\_____/||____ '     /|)");
        printw("\n");
        printw(R"(              |    |  |    || |   /____/ |  |`   |                 \ |    ||    | /|    |/ \|   |||    /_____/ |)");
        printw("\n");
        printw(R"(              |____|  |____| \|___|    | /  |____|                  \|____||____|/ |____|   |___|/|____|     | /)");
        printw("\n");
        printw(R"(                \(      )/     \( |____|/     \(                       \(    )/      \(       )/    \( |_____|/ )");
        printw("\n");
        printw(R"(                 '      '       '   )/         '                        '    '        '       '      '    )/    )");
        printw("\n");
        printw(R"(                                    '                                                                     '     )");
        printw("\n");

        string text = "TheClueintheCell";
        string r;

        if (i != 5)
        {
            // Generate a text with the characters randomized
            // if this is not the last index of the loop
            r = randomize_letters(text);
        }
        else
        {
            r = text;
        }

        printw("\n");
        printw(R"(                            _   _   _     _   _   _   _     _   _     _   _   _     _   _   _   _)");
        printw("\n");
        printw(R"(                           / \ / \ / \   / \ / \ / \ / \   / \ / \   / \ / \ / \   / \ / \ / \ / \)");
        printw("\n");
        string currString = "                          ( " +
                            string(1, r[0]) + " | " +
                            string(1, r[1]) + " | " +
                            string(1, r[2]) + " ) ( " +
                            string(1, r[3]) + " | " +
                            string(1, r[4]) + " | " +
                            string(1, r[5]) + " | " +
                            string(1, r[6]) + " ) ( " +
                            string(1, r[7]) + " | " +
                            string(1, r[8]) + " ) ( " +
                            string(1, r[9]) + " | " +
                            string(1, r[10]) + " | " +
                            string(1, r[11]) + " ) ( " +
                            string(1, r[12]) + " | " +
                            string(1, r[13]) + " | " +
                            string(1, r[14]) + " | " +
                            string(1, r[15]) + " )";
        printw(currString.c_str());
        printw("\n");
        printw(R"(                           \_/ \_/ \_/   \_/ \_/ \_/ \_/   \_/ \_/   \_/ \_/ \_/   \_/ \_/ \_/ \_/)");
        printw("\n");
        refresh();
        sleep(1.5);
    }

    // Generate line breaks
    printw("\n");
    printw("\n");

    // Prompt user to press enter after they have finished reading the text
    printw("                                                 Press any ENTER to continue\n");
    refresh();

    int ch;
    do
    {
        ch = getch();
    } while (ch != '\n');
}

void displayStoryOne()
{
    // This function prints the story of Act One line-by-line
    // character-by-character
    // This is done by storing separate lines as strings and outputting
    // them inside a border
    // Terminal cleared and wait time added before each output to create a motion effect

    // Border ASCII taken from https://www.asciiart.eu/art-and-design/borders

    using namespace std;

    int width = 47;

    string s1 = "In his cell's dimness, Sam takes comfort in Mr.";
    for (int i = 0; i < 47; i++)
    {
        int numSpaces = width - s1.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                           / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)");
        printw("\n");
        printw(R"(                           \ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \   %-*s  /\ \/ /)", width, s1.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                            \/ /\ \                                                  / /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /                                                  \ \/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/                                                    \ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \                                                    /\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\ \                                                   / /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /                                                   \ \/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/                                                    \ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ /)");
        printw("\n");
        printw(R"(                           \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)");
        printw("\n");
        printw(R"(                            `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s2 = "Finch's  tales. The old man reminisces about hi";
    for (int i = 0; i < 47; i++)
    {
        int numSpaces = width - s2.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                           / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)");
        printw("\n");
        printw(R"(                           \ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \   In his cell's dimness, Sam takes comfort in Mr.  /\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\ \  %-*s / /\/ /)", width, s2.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                            / /\/ /                                                  \ \/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/                                                    \ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \                                                    /\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\ \                                                   / /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /                                                   \ \/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/                                                    \ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ /)");
        printw("\n");
        printw(R"(                           \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)");
        printw("\n");
        printw(R"(                            `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s3 = "s lively home and inquisitive grandkids, partic";
    for (int i = 0; i < 47; i++)
    {
        int numSpaces = width - s3.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                           / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)");
        printw("\n");
        printw(R"(                           \ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \   In his cell's dimness, Sam takes comfort in Mr.  /\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\ \  Finch's  tales. The old man reminisces about hi / /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /  %-*s \ \/ /\)", width, s3.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                           / /\ \/                                                    \ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \                                                    /\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\ \                                                   / /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /                                                   \ \/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/                                                    \ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ /)");
        printw("\n");
        printw(R"(                           \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)");
        printw("\n");
        printw(R"(                            `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s4 = "ularly drawn to the gleaming fireplace tiles. T";
    for (int i = 0; i < 47; i++)
    {
        int numSpaces = width - s4.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                           / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)");
        printw("\n");
        printw(R"(                           \ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \)");
        printw("\n");
        printw(R"(                          \ \/\ \   In his cell's dimness, Sam takes comfort in Mr.  /\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\ \  Finch's  tales. The old man reminisces about hi / /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /  s lively home and inquisitive grandkids, partic \ \/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/   %-*s  \ \/\ \)", width, s4.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                           \ \/\ \                                                    /\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\ \                                                   / /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /                                                   \ \/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/                                                    \ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ /)");
        printw("\n");
        printw(R"(                           \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)");
        printw("\n");
        printw(R"(                            `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s5 = "hese stories prompt Sam to inspect his cell, le";
    for (int i = 0; i < 47; i++)
    {
        int numSpaces = width - s5.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                           / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)");
        printw("\n");
        printw(R"(                           \ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \   In his cell's dimness, Sam takes comfort in Mr.  /\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\ \  Finch's  tales. The old man reminisces about hi / /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /  s lively home and inquisitive grandkids, partic \ \/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/   ularly drawn to the gleaming fireplace tiles. T  \ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \   %-*s  /\ \/ /)", width, s5.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                            \/ /\ \                                                   / /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /                                                   \ \/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/                                                    \ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ /)");
        printw("\n");
        printw(R"(                           \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)");
        printw("\n");
        printw(R"(                            `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s6 = "ading to a surprising discovery - a loose tile.";
    for (int i = 0; i < 47; i++)
    {
        int numSpaces = width - s6.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                           / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)");
        printw("\n");
        printw(R"(                           \ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \   In his cell's dimness, Sam takes comfort in Mr.  /\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\ \  Finch's  tales. The old man reminisces about hi / /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /  s lively home and inquisitive grandkids, partic \ \/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/   ularly drawn to the gleaming fireplace tiles. T  \ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \   hese stories prompt Sam to inspect his cell, le  /\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\ \  %-*s  / /\/ /)", width, s6.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                            / /\/ /                                                   \ \/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/                                                    \ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ /)");
        printw("\n");
        printw(R"(                           \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)");
        printw("\n");
        printw(R"(                            `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s7 = "Further investigations leads to finding that it";
    for (int i = 0; i < 47; i++)
    {
        int numSpaces = width - s7.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                           / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)");
        printw("\n");
        printw(R"(                           \ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \   In his cell's dimness, Sam takes comfort in Mr.  /\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\ \  Finch's  tales. The old man reminisces about hi / /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /  s lively home and inquisitive grandkids, partic \ \/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/   ularly drawn to the gleaming fireplace tiles. T  \ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \   hese stories prompt Sam to inspect his cell, le  /\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\ \  ading to a surprising discovery - a loose tile.  / /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /  %-*s  \ \/ /\)", width, s7.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                           / /\ \/                                                    \ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ /)");
        printw("\n");
        printw(R"(                           \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)");
        printw("\n");
        printw(R"(                            `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s8 = "conceals a sliding puzzle......";
    for (int i = 0; i < 47; i++)
    {
        int numSpaces = width - s8.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                           / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)");
        printw("\n");
        printw(R"(                           \ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \   In his cell's dimness, Sam takes comfort in Mr.  /\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\ \  Finch's  tales. The old man reminisces about hi / /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /  s lively home and inquisitive grandkids, partic \ \/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/   ularly drawn to the gleaming fireplace tiles. T  \ \/\ \)");
        printw("\n");
        printw(R"(                           \ \/\ \   hese stories prompt Sam to inspect his cell, le  /\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\ \  ading to a surprising discovery - a loose tile.  / /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /  Further investigations leads to finding that it  \ \/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/   %-*s  \ \/\ \)", width, s8.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                           \ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ /)");
        printw("\n");
        printw(R"(                            \/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /)");
        printw("\n");
        printw(R"(                            / /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\)");
        printw("\n");
        printw(R"(                           / /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ /)");
        printw("\n");
        printw(R"(                           \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)");
        printw("\n");
        printw(R"(                            `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // Add line break and
    // Prompt user to press enter after they have finished reading the text
    printw("\n");
    printw("                                               Press ENTER to continue\n");
    int ch;
    do
    {
        ch = getch();
    } while (ch != '\n');
}

void displayIntroOne()
{
    // Prints a logo representing the task of the act line by line
    // using an array
    // Terminal cleared and wait time added before each output to create a motion effect

    // Border ASCII taken from https://www.asciiart.eu/

    using namespace std;

    // Stored as an array of strings
    string keyArr[32] = {
        "                                                                         -++=++++++=",
        "                                                                     :====*.    .=##+=",
        "                                                                   ==.    -**=:.  .=*+=",
        "                                                                  =.   =- :..-   +=..== ",
        "                                                       =++++=.   =...=-.=      ===**::= ",
        "                                                    ..-*******+  -:-=..    +++...-++.+ ",
        R"(                                                  .::=:.*******+ --:.*+*#%*%+. =::=: )",
        "                                                  .:+=:-+.*****:  =:.==+**=++.+..   ",
        "                                               .  ..-:-==-+****.    +=:.....-      ",
        "                                             =:********************+-==.+*=       ",
        "                                           .-=:+******************+=+=.+***:     ",
        "                                           .+=-+***********####**+=+--******    ",
        "                                           .+-=.+***********####+=+++********    ",
        "                                           .===.:***===-.+**##%+-=*+**=-:=-=*=   ",
        "                                            :+=-..-+-:=++-.+**#+=*+**=:+++++-.   ",
        "                                            .+-:-=+..:+++-=.+--*#%#**::++++=     ",
        "                                             .---     .---===-=+@#****   .      ",
        "                                                        -+=+=-+*@******       =+    ",
        "                                                  -*+: :-+*+=+**@@*+*****=..+***+  ",
        "                                               .:= .========++*******************- ",
        "                                              .-=-..-=-====+++*******************+",
        "                                              .=+--..-=====++++*******************-",
        "                                           ::+++---: .====+++++********************",
        "                                         ..  =+-:=--..=+++++++==-:+****** ........",
        "                                            - ==+--+:. .  :::-==++=.****======+-.:",
        "                                            :==-:-----::=-:::::-++++*****+.   ..",
        "                                                  .-:.         -=+-+*******=",
        "                                                              .===.++*******",
        "                                                              :=-:. -++*****",
        "                                                              .-::---. :---",
        "                                                               .---:....:",
        "                                                                  .:::."};

    // Loops through the array and prints line by line
    for (int i = 0; i < 32; i++)
    {
        clear();
        for (int j = 0; j <= i; j++)
        {
            printw(keyArr[j].c_str());
            printw("\n");
        }
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // sleep time to allow user to see final logo
    refresh();
    sleep(3);
}

void displayOutroOne()
{
    // This function prints the outro story of Act One line-by-line
    // character-by-character
    // This is done by storing separate lines as strings and outputting
    // them inside a border
    // Terminal cleared and wait time added before each output to create a motion effect

    // Border ASCII taken from https://www.asciiart.eu/art-and-design/borders

    using namespace std;

    int width = 36;

    string s1 = "The sliding puzzle revealed a hidden";
    for (int i = 0; i < 36; i++)
    {
        int numSpaces = width - s1.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                             ___________________________________________)");
        printw("\n");
        printw(R"(                                            /\                                          \)");
        printw("\n");
        printw(R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))");
        printw("\n");
        printw(R"(                                            \/''''''''''''''''''''''''''''''''''''''''''/)");
        printw("\n");
        printw(R"(                                            (   %-*s  ()", width, s1.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                             )                                         ))");
        printw("\n");
        printw(R"(                                            (                                         ()");
        printw("\n");
        printw(R"(                                                                                    )");
        printw("\n");
        printw(R"(                                             )                                        ))");
        printw("\n");
        printw(R"(                                            (                                         ()");
        printw("\n");
        printw(R"(                                             )                                         ))");
        printw("\n");
        printw(R"(                                            /\''''''''''''''''''''''''''''''''''''''''''\)");
        printw("\n");
        printw(R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))");
        printw("\n");
        printw(R"(                                            \/___________________________________________/)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s2 = "cache of letters. These letters, add";
    for (int i = 0; i < 36; i++)
    {
        int numSpaces = width - s2.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                             ___________________________________________)");
        printw("\n");
        printw(R"(                                            /\                                          \)");
        printw("\n");
        printw(R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))");
        printw("\n");
        printw(R"(                                            \/''''''''''''''''''''''''''''''''''''''''''/)");
        printw("\n");
        printw(R"(                                            (   The sliding puzzle revealed a hidden  ()");
        printw("\n");
        printw(R"(                                             )  %-*s   ))", width, s2.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                            (                                         ()");
        printw("\n");
        printw(R"(                                                                                    )");
        printw("\n");
        printw(R"(                                             )                                        ))");
        printw("\n");
        printw(R"(                                            (                                         ()");
        printw("\n");
        printw(R"(                                             )                                         ))");
        printw("\n");
        printw(R"(                                            /\''''''''''''''''''''''''''''''''''''''''''\)");
        printw("\n");
        printw(R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))");
        printw("\n");
        printw(R"(                                            \/___________________________________________/)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s3 = "ressed to the cryptic \"The Moth,\" hi";
    for (int i = 0; i < 36; i++)
    {
        int numSpaces = width - s3.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                             ___________________________________________)");
        printw("\n");
        printw(R"(                                            /\                                          \)");
        printw("\n");
        printw(R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))");
        printw("\n");
        printw(R"(                                            \/''''''''''''''''''''''''''''''''''''''''''/)");
        printw("\n");
        printw(R"(                                            (   The sliding puzzle revealed a hidden  ()");
        printw("\n");
        printw(R"(                                             )  cache of letters. These letters, add   ))");
        printw("\n");
        printw(R"(                                            (   %-*s  ()", width, s3.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                                                      )");
        printw("\n");
        printw(R"(                                             )                                        ))");
        printw("\n");
        printw(R"(                                            (                                         ()");
        printw("\n");
        printw(R"(                                             )                                         ))");
        printw("\n");
        printw(R"(                                            /\''''''''''''''''''''''''''''''''''''''''''\)");
        printw("\n");
        printw(R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))");
        printw("\n");
        printw(R"(                                            \/___________________________________________/)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s4 = "nt at an escape plan that remained u";
    for (int i = 0; i < 36; i++)
    {
        int numSpaces = width - s4.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                             ___________________________________________)");
        printw("\n");
        printw(R"(                                            /\                                          \)");
        printw("\n");
        printw(R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))");
        printw("\n");
        printw(R"(                                            \/''''''''''''''''''''''''''''''''''''''''''/)");
        printw("\n");
        printw(R"(                                            (   The sliding puzzle revealed a hidden  ()");
        printw("\n");
        printw(R"(                                             )  cache of letters. These letters, add   ))");
        printw("\n");
        printw(R"(                                            (   ressed to the cryptic "The Moth," hi  ()");
        printw("\n");
        printw(R"(                                                %-*s)", width, s4.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                             )                                        ))");
        printw("\n");
        printw(R"(                                            (                                         ()");
        printw("\n");
        printw(R"(                                             )                                         ))");
        printw("\n");
        printw(R"(                                            /\''''''''''''''''''''''''''''''''''''''''''\)");
        printw("\n");
        printw(R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))");
        printw("\n");
        printw(R"(                                            \/___________________________________________/)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s5 = "nfulfilled. Sam realizes that he's n";
    for (int i = 0; i < 36; i++)
    {
        int numSpaces = width - s5.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                             ___________________________________________)");
        printw("\n");
        printw(R"(                                            /\                                          \)");
        printw("\n");
        printw(R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))");
        printw("\n");
        printw(R"(                                            \/''''''''''''''''''''''''''''''''''''''''''/)");
        printw("\n");
        printw(R"(                                            (   The sliding puzzle revealed a hidden  ()");
        printw("\n");
        printw(R"(                                             )  cache of letters. These letters, add   ))");
        printw("\n");
        printw(R"(                                            (   ressed to the cryptic "The Moth," hi  ()");
        printw("\n");
        printw(R"(                                                nt at an escape plan that remained u)");
        printw("\n");
        printw(R"(                                             )  %-*s  ))", width, s5.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                            (                                         ()");
        printw("\n");
        printw(R"(                                             )                                         ))");
        printw("\n");
        printw(R"(                                            /\''''''''''''''''''''''''''''''''''''''''''\)");
        printw("\n");
        printw(R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))");
        printw("\n");
        printw(R"(                                            \/___________________________________________/)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s6 = "ot the first innocent person to be t";
    for (int i = 0; i < 36; i++)
    {
        int numSpaces = width - s6.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                             ___________________________________________)");
        printw("\n");
        printw(R"(                                            /\                                          \)");
        printw("\n");
        printw(R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))");
        printw("\n");
        printw(R"(                                            \/''''''''''''''''''''''''''''''''''''''''''/)");
        printw("\n");
        printw(R"(                                            (   The sliding puzzle revealed a hidden  ()");
        printw("\n");
        printw(R"(                                             )  cache of letters. These letters, add   ))");
        printw("\n");
        printw(R"(                                            (   ressed to the cryptic "The Moth," hi  ()");
        printw("\n");
        printw(R"(                                                nt at an escape plan that remained u)");
        printw("\n");
        printw(R"(                                             )  nfulfilled. Sam realizes that he's n  ))");
        printw("\n");
        printw(R"(                                            (   %-*s  ()", width, s6.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                             )                                         ))");
        printw("\n");
        printw(R"(                                            /\''''''''''''''''''''''''''''''''''''''''''\)");
        printw("\n");
        printw(R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))");
        printw("\n");
        printw(R"(                                            \/___________________________________________/)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s7 = "rapped....                          ";
    for (int i = 0; i < 36; i++)
    {
        int numSpaces = width - s7.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                             ___________________________________________)");
        printw("\n");
        printw(R"(                                            /\                                          \)");
        printw("\n");
        printw(R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))");
        printw("\n");
        printw(R"(                                            \/''''''''''''''''''''''''''''''''''''''''''/)");
        printw("\n");
        printw(R"(                                            (   The sliding puzzle revealed a hidden  ()");
        printw("\n");
        printw(R"(                                             )  cache of letters. These letters, add   ))");
        printw("\n");
        printw(R"(                                            (   ressed to the cryptic "The Moth," hi  ()");
        printw("\n");
        printw(R"(                                                nt at an escape plan that remained u)");
        printw("\n");
        printw(R"(                                             )  nfulfilled. Sam realizes that he's n  ))");
        printw("\n");
        printw(R"(                                            (   ot the first innocent person to be t  ()");
        printw("\n");
        printw(R"(                                             )  %-*s   ))", width, s7.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                            /\''''''''''''''''''''''''''''''''''''''''''\)");
        printw("\n");
        printw(R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))");
        printw("\n");
        printw(R"(                                            \/___________________________________________/)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // Add line break and
    // Prompt user to press enter after they have finished reading the text
    printw("\n");
    printw("                                                              Press ENTER to continue\n");
    int ch;
    do
    {
        ch = getch();
    } while (ch != '\n');
}

// Animations for Act Two:

void displayActTwo()
{
    // This function prints a UI representing the start of Act Two
    // Terminal cleared and wait time added before each output to create a motion effect

    using namespace std;

    // ASCII art generated from https://www.asciiart.eu/text-to-ascii-art

    for (int i = 0; i < 3; i++)
    {
        clear();
        printw(R"(                     ___           ___           ___                    ___           ___           ___     )");
        printw("\n");
        printw(R"(                    /\  \         /\  \         /\  \                  /\  \         /\__\         /\  \    )");
        printw("\n");
        printw(R"(                   /::\  \       /::\  \        \:\  \                 \:\  \       /:/ _/_       /::\  \   )");
        printw("\n");
        printw(R"(                  /:/\:\  \     /:/\:\  \        \:\  \                 \:\  \     /:/ /\__\     /:/\:\  \  )");
        printw("\n");
        printw(R"(                 /::\~\:\  \   /:/  \:\  \       /::\  \                /::\  \   /:/ /:/ _/_   /:/  \:\  \ )");
        printw("\n");
        printw(R"(                /:/\:\ \:\__\ /:/__/ \:\__\     /:/\:\__\              /:/\:\__\ /:/_/:/ /\__\ /:/__/ \:\__\)");
        printw("\n");
        printw(R"(                \/__\:\/:/  / \:\  \  \/__/    /:/  \/__/             /:/  \/__/ \:\/:/ /:/  / \:\  \ /:/  /)");
        printw("\n");
        printw(R"(                     \::/  /   \:\  \         /:/  /                 /:/  /       \::/_/:/  /   \:\  /:/  / )");
        printw("\n");
        printw(R"(                     /:/  /     \:\  \        \/__/                  \/__/         \:\/:/  /     \:\/:/  /  )");
        printw("\n");
        printw(R"(                    /:/  /       \:\__\                                             \::/  /       \::/  /   )");
        printw("\n");
        printw(R"(                    \/__/         \/__/                                              \/__/         \/__/    )");
        printw("\n");
        refresh();
        sleep(1.5);
        printw("\n");
        printw(R"(                     *   )   )          (                                (                          (  )");
        printw("\n");
        printw(R"(                   ` )  /(( /(   (      )\   (      )       (   (        )\   (        (          ) )\ )");
        printw("\n");
        printw(R"(                    ( )(_))\()) ))\  ((((_)( )(    (     (  )(  )\ )  ((((_)( )(  (   ))\ (    ( /(((_))");
        printw("\n");
        printw(R"(                   (_(_()|(_)\ /((_)  )\ _ )(()\   )\  ' )\(()\(()/(   )\ _ )(()\ )\ /((_))\ ) )(_))_  )");
        printw("\n");
        printw(R"(                   |_   _| |(_|_))    (_)_\(_|(_)_((_)) ((_)((_))(_))  (_)_\(_|(_|(_|_)) _(_/(((_)_| | )");
        printw("\n");
        printw(R"(                     | | | ' \/ -_)    / _ \| '_| '  \() _ \ '_| || |   / _ \| '_(_-< -_) ' \)) _` | | )");
        printw("\n");
        printw(R"(                     |_| |_||_\___|   /_/ \_\_| |_|_|_|\___/_|  \_, |  /_/ \_\_| /__|___|_||_|\__,_|_| )");
        printw("\n");
        printw(R"(                                                                |__/)");
        printw("\n");
        refresh();
        sleep(1.5);
    }

    // Generate line breaks
    printw("\n");
    printw("\n");

    // Prompt user to press enter after they have finished reading the text
    printw("                                                 Press any ENTER to continue\n");
    refresh();

    int ch;
    do
    {
        ch = getch();
    } while (ch != '\n');
}

void displayStoryTwo()
{
    // This function prints the story of Act Two line-by-line
    // character-by-character
    // This is done by storing separate lines as strings and outputting
    // them inside a border
    // Terminal cleared and wait time added before each output to create a motion effect

    // Border ASCII taken from https://www.asciiart.eu/art-and-design/borders

    using namespace std;

    int width = 40;

    string s1 = "Sam discovers an the guard's armory. The";
    for (int i = 0; i < 40; i++)
    {
        int numSpaces = width - s1.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw("                                        __| |____________________________________________| |__\n");
        printw("                                       (__   ____________________________________________   __)");
        printw("\n");
        printw("                                          | |                                            | |\n");
        printw("                                          | |  %-*s  | |\n", width, s1.substr(0, i + 1).c_str());
        printw("                                          | |                                            | |\n");
        printw("                                          | |                                            | |\n");
        printw("                                          | |                                            | |\n");
        printw("                                        __| |____________________________________________| |__\n");
        printw("                                       (__   ____________________________________________   __)");
        printw("\n");
        printw("                                          | |                                            | |\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s2 = "armory, usually a mundane storage room f";
    for (int i = 0; i < 40; i++)
    {
        int numSpaces = width - s2.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw("                                        __| |____________________________________________| |__\n");
        printw("                                       (__   ____________________________________________   __)");
        printw("\n");
        printw("                                          | |                                            | |\n");
        printw("                                          | |  Sam discovers an the guard's armory. The  | |\n");
        printw("                                          | |  %-*s  | |\n", width, s2.substr(0, i + 1).c_str());
        printw("                                          | |                                            | |\n");
        printw("                                          | |                                            | |\n");
        printw("                                        __| |____________________________________________| |__\n");
        printw("                                       (__   ____________________________________________   __)");
        printw("\n");
        printw("                                          | |                                            | |\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s3 = "or weapons, turns out to be a facade for";
    for (int i = 0; i < 40; i++)
    {
        int numSpaces = width - s3.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw("                                        __| |____________________________________________| |__\n");
        printw("                                       (__   ____________________________________________   __)");
        printw("\n");
        printw("                                          | |                                            | |\n");
        printw("                                          | |  Sam discovers an the guard's armory. The  | |\n");
        printw("                                          | |  armory, usually a mundane storage room f  | |\n");
        printw("                                          | |  %-*s  | |\n", width, s3.substr(0, i + 1).c_str());
        printw("                                          | |                                            | |\n");
        printw("                                        __| |____________________________________________| |__\n");
        printw("                                       (__   ____________________________________________   __)");
        printw("\n");
        printw("                                          | |                                            | |\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s4 = "         a secret research lab...       ";
    for (int i = 0; i < 40; i++)
    {
        int numSpaces = width - s4.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw("                                        __| |____________________________________________| |__\n");
        printw("                                       (__   ____________________________________________   __)");
        printw("\n");
        printw("                                          | |                                            | |\n");
        printw("                                          | |  Sam discovers an the guard's armory. The  | |\n");
        printw("                                          | |  armory, usually a mundane storage room f  | |\n");
        printw("                                          | |  or weapons, turns out to be a facade for  | |\n");
        printw("                                          | |  %-*s  | |\n", width, s4.substr(0, i + 1).c_str());
        printw("                                        __| |____________________________________________| |__\n");
        printw("                                       (__   ____________________________________________   __)");
        printw("\n");
        printw("                                          | |                                            | |\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // Add line break and
    // Prompt user to press enter after they have finished reading the text
    printw("\n");
    printw("                                                       Press ENTER to continue\n");
    int ch;
    do
    {
        ch = getch();
    } while (ch != '\n');
}

void displayIntroTwo()
{
    // Prints a logo representing the task of the act line by line
    // using an array
    // Terminal cleared and wait time added before each output to create a motion effect

    // Border ASCII taken from https://www.asciiart.eu/

    using namespace std;

    // Stored as an array of strings
    string keyArr[] = {
        R"(                                                   )         )",
        R"(                                                     (            )",
        R"(                                                   '    }      )",
        R"(                                                 (    '      )",
        R"(                                                '      (   )",
        R"(                                                 )  |    ) )",
        R"(                                               '   /|\    `)",
        R"(                                              )   / | \  ` )   )",
        R"(                                             {    | | |  {   )",
        R"(                                            }     | | |  .)",
        R"(                                             '    | | |    ))",
        R"(                                            (    /| | |\    .)",
        R"(                                             .  / | | | \  (  )",
        R"(                                           }    \ \ | / /  .        )",
        R"(                                            (    \ `-' /    })",
        R"(                                            '    / ,-. \    ' )",
        R"(                                             }  / / | \ \  })",
        R"(                                            '   \ | | | /   } )",
        R"(                                             (   \| | |/  ()",
        R"(                                               )  | | |  ))",
        R"(                                               .  | | |  '  )",
        R"(                                                  J | L)",
        R"(                                            /|    J_|_L    |\\)",
        R"(                                            \ \___/ o \___/ /)",
        R"(                                             \_____ _ _____/)",
        R"(                                                   |-|)",
        R"(                                                   |-|)",
        R"(                                                   |-|)",
        R"(                                                  ,'-''.)",
        R"(                                                  '---'')"};

    // Loops through the array and prints line by line
    for (int i = 0; i < 30; i++)
    {
        clear();
        for (int j = 0; j <= i; j++)
        {
            printw(keyArr[j].c_str());
            printw("\n");
        }
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // sleep time to allow user to see final logo
    refresh();
    sleep(3);
}

void displayOutroTwo()
{
    // This function prints the outro story of Act Two line-by-line
    // character-by-character
    // This is done by storing separate lines as strings and outputting
    // them inside a border
    // Terminal cleared and wait time added before each output to create a motion effect

    // Border ASCII taken from https://www.asciiart.eu/art-and-design/borders

    using namespace std;

    int width = 39;

    string s1 = "Solving the puzzle, Sam discovers the b";
    for (int i = 0; i < 39; i++)
    {
        int numSpaces = width - s1.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                          //\\  //\\  //\\  //\\  //\\  //\\  //\\  //\\)");
        printw("\n");
        printw(R"(                                         //  \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\)");
        printw("\n");
        printw(R"(                                        //\\                                          //\\)");
        printw("\n");
        printw(R"(                                        \\//  %-*s \\//)", width, s1.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                         //                                            \\)");
        printw("\n");
        printw(R"(                                        //\\                                          //\\)");
        printw("\n");
        printw(R"(                                        \\//                                          \\//)");
        printw("\n");
        printw(R"(                                         \\                                            //)");
        printw("\n");
        printw(R"(                                        //\\                                          //\\)");
        printw("\n");
        printw(R"(                                        \\//                                          \\//)");
        printw("\n");
        printw(R"(                                         \\  //\\  //\\  //\\  //\\  //\\  //\\  //\\  //)");
        printw("\n");
        printw(R"(                                          \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\//)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s2 = "lueprint, which reveals that Alacran Ma";
    for (int i = 0; i < 39; i++)
    {
        int numSpaces = width - s2.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                          //\\  //\\  //\\  //\\  //\\  //\\  //\\  //\\)");
        printw("\n");
        printw(R"(                                         //  \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\)");
        printw("\n");
        printw(R"(                                        //\\                                          //\\)");
        printw("\n");
        printw(R"(                                        \\//  Solving the puzzle, Sam discovers the b \\//)");
        printw("\n");
        printw(R"(                                         //   %-*s  \\)", width, s2.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                        //\\                                          //\\)");
        printw("\n");
        printw(R"(                                        \\//                                          \\//)");
        printw("\n");
        printw(R"(                                         \\                                            //)");
        printw("\n");
        printw(R"(                                        //\\                                          //\\)");
        printw("\n");
        printw(R"(                                        \\//                                          \\//)");
        printw("\n");
        printw(R"(                                         \\  //\\  //\\  //\\  //\\  //\\  //\\  //\\  //)");
        printw("\n");
        printw(R"(                                          \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\//)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s3 = "ximum Security Prison is part of a larg";
    for (int i = 0; i < 39; i++)
    {
        int numSpaces = width - s3.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                          //\\  //\\  //\\  //\\  //\\  //\\  //\\  //\\)");
        printw("\n");
        printw(R"(                                         //  \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\)");
        printw("\n");
        printw(R"(                                        //\\                                          //\\)");
        printw("\n");
        printw(R"(                                        \\//  Solving the puzzle, Sam discovers the b \\//)");
        printw("\n");
        printw(R"(                                         //   lueprint, which reveals that Alacran Ma  \\)");
        printw("\n");
        printw(R"(                                        //\\  %-*s //\\)", width, s3.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                        \\//                                          \\//)");
        printw("\n");
        printw(R"(                                         \\                                            //)");
        printw("\n");
        printw(R"(                                        //\\                                          //\\)");
        printw("\n");
        printw(R"(                                        \\//                                          \\//)");
        printw("\n");
        printw(R"(                                         \\  //\\  //\\  //\\  //\\  //\\  //\\  //\\  //)");
        printw("\n");
        printw(R"(                                          \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\//)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s4 = "er, sinister design. The prison's layou";
    for (int i = 0; i < 39; i++)
    {
        int numSpaces = width - s4.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                          //\\  //\\  //\\  //\\  //\\  //\\  //\\  //\\)");
        printw("\n");
        printw(R"(                                         //  \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\)");
        printw("\n");
        printw(R"(                                        //\\                                          //\\)");
        printw("\n");
        printw(R"(                                        \\//  Solving the puzzle, Sam discovers the b \\//)");
        printw("\n");
        printw(R"(                                         //   lueprint, which reveals that Alacran Ma  \\)");
        printw("\n");
        printw(R"(                                        //\\  ximum Security Prison is part of a larg //\\)");
        printw("\n");
        printw(R"(                                        \\//  %-*s \\//)", width, s4.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                         \\                                            //)");
        printw("\n");
        printw(R"(                                        //\\                                          //\\)");
        printw("\n");
        printw(R"(                                        \\//                                          \\//)");
        printw("\n");
        printw(R"(                                         \\  //\\  //\\  //\\  //\\  //\\  //\\  //\\  //)");
        printw("\n");
        printw(R"(                                          \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\//)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s5 = "t isn't random-it's purposefully design";
    for (int i = 0; i < 39; i++)
    {
        int numSpaces = width - s5.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                          //\\  //\\  //\\  //\\  //\\  //\\  //\\  //\\)");
        printw("\n");
        printw(R"(                                         //  \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\)");
        printw("\n");
        printw(R"(                                        //\\                                          //\\)");
        printw("\n");
        printw(R"(                                        \\//  Solving the puzzle, Sam discovers the b \\//)");
        printw("\n");
        printw(R"(                                         //   lueprint, which reveals that Alacran Ma  \\)");
        printw("\n");
        printw(R"(                                        //\\  ximum Security Prison is part of a larg //\\)");
        printw("\n");
        printw(R"(                                        \\//  er, sinister design. The prison's layou \\//)");
        printw("\n");
        printw(R"(                                         \\   %-*s  //)", width, s5.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                        //\\                                          //\\)");
        printw("\n");
        printw(R"(                                        \\//                                          \\//)");
        printw("\n");
        printw(R"(                                         \\  //\\  //\\  //\\  //\\  //\\  //\\  //\\  //)");
        printw("\n");
        printw(R"(                                          \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\//)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s6 = "ed to keep certain areas inaccessible. ";
    for (int i = 0; i < 39; i++)
    {
        int numSpaces = width - s6.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                          //\\  //\\  //\\  //\\  //\\  //\\  //\\  //\\)");
        printw("\n");
        printw(R"(                                         //  \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\)");
        printw("\n");
        printw(R"(                                        //\\                                          //\\)");
        printw("\n");
        printw(R"(                                        \\//  Solving the puzzle, Sam discovers the b \\//)");
        printw("\n");
        printw(R"(                                         //   lueprint, which reveals that Alacran Ma  \\)");
        printw("\n");
        printw(R"(                                        //\\  ximum Security Prison is part of a larg //\\)");
        printw("\n");
        printw(R"(                                        \\//  er, sinister design. The prison's layou \\//)");
        printw("\n");
        printw(R"(                                         \\   t isn't random-it's purposefully design  //)");
        printw("\n");
        printw(R"(                                        //\\  %-*s //\\)", width, s6.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                        \\//                                          \\//)");
        printw("\n");
        printw(R"(                                         \\  //\\  //\\  //\\  //\\  //\\  //\\  //\\  //)");
        printw("\n");
        printw(R"(                                          \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\//)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // Add line break and
    // Prompt user to press enter after they have finished reading the text
    printw("\n");
    printw("                                                        Press ENTER to continue\n");
    int ch;
    do
    {
        ch = getch();
    } while (ch != '\n');
}

// Animations for Act Three:

void displayActThree()
{
    // This function prints a UI representing the start of Act Three
    // Terminal cleared and wait time added before each output to create a motion effect

    using namespace std;

    // ASCII art generated from https://www.asciiart.eu/text-to-ascii-art

    for (int i = 0; i < 3; i++)
    {
        clear();
        printw(R"(                      __       ______  ___________      ___________  __    __    _______    _______   _______  )");
        printw("\n");
        printw(R"(                     /""\     /" _  "\("     _   ")    ("     _   ")/" |  | "\  /"      \  /"     "| /"     "| )");
        printw("\n");
        printw(R"(                    /    \   (: ( \___))__/  \\__/      )__/  \\__/(:  (__)  :)|:        |(: ______)(: ______) )");
        printw("\n");
        printw(R"(                   /' /\  \   \/ \        \\_ /            \\_ /    \/      \/ |_____/   ) \/    |   \/    |   )");
        printw("\n");
        printw(R"(                  //  __'  \  //  \ _     |.  |            |.  |    //  __  \\  //      /  // ___)_  // ___)_  )");
        printw("\n");
        printw(R"(                 /   /  \\  \(:   _) \    \:  |            \:  |   (:  (  )  :)|:  __   \ (:      "|(:      "| )");
        printw("\n");
        printw(R"(                (___/    \___)\_______)    \__|             \__|    \__|  |__/ |__|  \___) \_______) \_______))");
        printw("\n");
        refresh();
        sleep(1.5);
        printw("\n");
        printw("\n");
        printw(R"(                    ________            ______                     __        ______                __    __   )");
        printw("\n");
        printw(R"(                   /_  __/ /_  ___     / ____/_  ______ __________/ /____   / ____/___ _____ ___  / /_  / /__ )");
        printw("\n");
        printw(R"(                    / / / __ \/ _ \   / / __/ / / / __ `/ ___/ __  / ___/  / / __/ __ `/ __ `__ \/ __ \/ / _ \)");
        printw("\n");
        printw(R"(                   / / / / / /  __/  / /_/ / /_/ / /_/ / /  / /_/ (__  )  / /_/ / /_/ / / / / / / /_/ / /  __/)");
        printw("\n");
        printw(R"(                  /_/ /_/ /_/\___/   \____/\__,_/\__,_/_/   \__,_/____/   \____/\__,_/_/ /_/ /_/_.___/_/\___/)");
        printw("\n");
        refresh();
        sleep(1.5);
    }

    // Generate line breaks
    printw("\n");
    printw("\n");

    // Prompt user to press enter after they have finished reading the text
    printw("                                              Press any ENTER to continue\n");
    refresh();

    int ch;
    do
    {
        ch = getch();
    } while (ch != '\n');
}

void displayStoryThree()
{
    // This function prints the story of Act Three line-by-line
    // character-by-character
    // This is done by storing separate lines as strings and outputting
    // them inside a border
    // Terminal cleared and wait time added before each output to create a motion effect

    // Border ASCII taken from https://www.asciiart.eu/art-and-design/borders

    using namespace std;

    int width = 41;

    string s1 = "Sam overhears guards talking about a mine";
    for (int i = 0; i < 41; i++)
    {
        int numSpaces = width - s1.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw("                            __| |____________________________________________| |__\n");
        printw("                           (__   ____________________________________________   __)");
        printw("\n");
        printw("                              | |                                            | |\n");
        printw("                              | |  %-*s | |\n", width, s1.substr(0, i + 1).c_str());
        printw("                              | |                                            | |\n");
        printw("                              | |                                            | |\n");
        printw("                            __| |____________________________________________| |__\n");
        printw("                           (__   ____________________________________________   __)");
        printw("\n");
        printw("                              | |                                            | |\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s2 = "sweeper game they play during their break";
    for (int i = 0; i < 41; i++)
    {
        int numSpaces = width - s2.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw("                            __| |____________________________________________| |__\n");
        printw("                           (__   ____________________________________________   __)");
        printw("\n");
        printw("                              | |                                            | |\n");
        printw("                              | |  Sam overhears guards talking about a mine | |\n");
        printw("                              | |  %-*s | |\n", width, s2.substr(0, i + 1).c_str());
        printw("                              | |                                            | |\n");
        printw("                            __| |____________________________________________| |__\n");
        printw("                           (__   ____________________________________________   __)");
        printw("\n");
        printw("                              | |                                            | |\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s3 = "s. Curious, he investigates further....  ";
    for (int i = 0; i < 41; i++)
    {
        int numSpaces = width - s3.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw("                            __| |____________________________________________| |__\n");
        printw("                           (__   ____________________________________________   __)");
        printw("\n");
        printw("                              | |                                            | |\n");
        printw("                              | |  Sam overhears guards talking about a mine | |\n");
        printw("                              | |  sweeper game they play during their break | |\n");
        printw("                              | |  %-*s | |\n", width, s3.substr(0, i + 1).c_str());
        printw("                            __| |____________________________________________| |__\n");
        printw("                           (__   ____________________________________________   __)");
        printw("\n");
        printw("                              | |                                            | |\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // Add line break and
    // Prompt user to press enter after they have finished reading the text
    printw("\n");
    printw("                                           Press ENTER to continue\n");
    int ch;
    do
    {
        ch = getch();
    } while (ch != '\n');
}

void displayIntroThree()
{
    // Prints a logo representing the task of the act line by line
    // using an array
    // Terminal cleared and wait time added before each output to create a motion effect

    // Border ASCII taken from https://www.asciiart.eu/

    using namespace std;

    // Stored as an array of strings
    string keyArr[] = {
        R"(                       .----------------------------------------------------------------------.)",
        R"(                       |_.-._.-._.-._.-._.-._.-.    _.-._.-._.-.    _.-._.-._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.-._. .::db .-._.-._. .::db .-._.-._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.-._ .::d88b -._.-._ .::d88b -._.-._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.-. .::d8888b       .::d8888b ._.-._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.- .::d88!::::::::::::d888888b _.-._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.- \  Y88\_________\  Y888888P _.-._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.-. \  Y8888P ._.-. \  Y8888P ._.-._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.-._ /dbY88Pdb _.-._ /dbY88Pdb _.-._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.-. /d8P_YP Y8b .-. /d8P_YP Y8b .-._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-     /d8P .-.\ Y8b   /d8P .- \ Y8b -._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._ .::db/d8P _.-. \.::db/d8P _.-. \ Y8b ._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-. .::d88bYP ._.-. .::d88LSP ._.-._ \ Y8b    ._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.- .::d8888b       .::d8888b`b _.-._. \ Y8b:db _.-._.-._.-._.|)",
        R"(                       |_.-._.-._. .::d88!::::::::::::d888888b`b .-._.- \ YPd88b .-._.-._.-._.|)",
        R"(                       |_.-._.-._. \  Y88\_________\  Y888888Pd8b       .::d8888b -._.-._.-._.|)",
        R"(                       |_.-._.-._.- \  Y8888P -._.- \  Y8888P!::::::::::::d888888b ._.-._.-._.|)",
        R"(                       |_.-._.-._.-. \  Y88Pdb ._.-. \  Y88Pdb_________\  Y888888P ._.-._.-._.|)",
        R"(                       |_.-._.-._.-._ \__YP Y8b _.-._ \__YP Y8b`P -._.- \  Y8888P -._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._. \ Y8b .-._.-. /d\ Y8b .-._.-. /dbY88P .-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.- \ Y8b -._.- /d8P\ Y8b -._.- /d8P_YP _.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.-. \ Y8b     /d8P _\ Y8b     /d8P _.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.-._ \ Y8b:db/d8P ._ \ Y8b:db/d8P ._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.-._. \ YPd88bYP -._. \ YPd88bYP -._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.-._. .::d8888b       .::d8888b .-._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.-._ .::d88!::::::::::::d888888b -._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.-._ \  Y88\_________\  Y888888P -._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.-._. \  Y8888P .-._. \  Y8888P .-._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.-._.- \  Y88P _.-._.- \  Y88P _.-._.-._.-._.-._.-._.|)",
        R"(                       |_.-._.-._.-._.-._.-._.-. \__YP ._.-._.-. \__YP ._.-._.-._.-._.-._.-._.|)",
        R"(                       `----------------------------------------------------------------------')"};

    // Loops through the array and prints line by line
    for (int i = 0; i < 31; i++)
    {
        clear();
        for (int j = 0; j <= i; j++)
        {
            printw(keyArr[j].c_str());
            printw("\n");
        }
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // sleep time to allow user to see final logo
    refresh();
    sleep(3);
}

void displayOutroThree()
{
    // This function prints the outro story of Act Three line-by-line
    // character-by-character
    // This is done by storing separate lines as strings and outputting
    // them inside a border
    // Terminal cleared and wait time added before each output to create a motion effect

    // Border ASCII taken from https://www.asciiart.eu/art-and-design/borders

    using namespace std;

    int width = 72;

    string s1 = "To Sam's surprise, the minesweeper game is revealed to be a cover for an";
    for (int i = 0; i < 72; i++)
    {
        int numSpaces = width - s1.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                     _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._)");
        printw("\n");
        printw(R"(                  .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.)");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (   %-*s  ))", width, s1.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (___       _       _       _       _       _       _       _       _       ___))");
        printw("\n");
        printw(R"(                      `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-')");
        printw("\n");
        printw(R"(                              `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-')");
        printw("\n");
        printw(R"(                                      `-._.-' (__  _) (__  _) (_ _ _) `-._.-')");
        printw("\n");
        printw(R"(                                              `-._.-' (_ ___) `-._.-')");
        printw("\n");
        printw(R"(                                                      `-._.-')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s2 = "illegal betting ring run by the guards. They wager on the outcomes, dist";
    for (int i = 0; i < 72; i++)
    {
        int numSpaces = width - s2.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                     _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._)");
        printw("\n");
        printw(R"(                  .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.)");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (   To Sam's surprise, the minesweeper game is revealed to be a cover for an  ))");
        printw("\n");
        printw(R"(                   )  %-*s ( )", width, s2.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (___       _       _       _       _       _       _       _       _       ___))");
        printw("\n");
        printw(R"(                      `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-')");
        printw("\n");
        printw(R"(                              `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-')");
        printw("\n");
        printw(R"(                                      `-._.-' (__  _) (__  _) (_ _ _) `-._.-')");
        printw("\n");
        printw(R"(                                              `-._.-' (_ ___) `-._.-')");
        printw("\n");
        printw(R"(                                                      `-._.-')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s3 = "racting themselves from the monotony of prison duty....                 ";
    for (int i = 0; i < 72; i++)
    {
        int numSpaces = width - s3.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                     _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._)");
        printw("\n");
        printw(R"(                  .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.)");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (   To Sam's surprise, the minesweeper game is revealed to be a cover for an  ))");
        printw("\n");
        printw(R"(                   )  illegal betting ring run by the guards. They wager on the outcomes, dist ( )");
        printw("\n");
        printw(R"(                  (   %-*s  ))", width, s3.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (___       _       _       _       _       _       _       _       _       ___))");
        printw("\n");
        printw(R"(                      `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-')");
        printw("\n");
        printw(R"(                              `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-')");
        printw("\n");
        printw(R"(                                      `-._.-' (__  _) (__  _) (_ _ _) `-._.-')");
        printw("\n");
        printw(R"(                                              `-._.-' (_ ___) `-._.-')");
        printw("\n");
        printw(R"(                                                      `-._.-')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s4 = "Sam uses his detective skills to manipulate the game's outcome, creating";
    for (int i = 0; i < 72; i++)
    {
        int numSpaces = width - s4.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                     _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._)");
        printw("\n");
        printw(R"(                  .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.)");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (   To Sam's surprise, the minesweeper game is revealed to be a cover for an  ))");
        printw("\n");
        printw(R"(                   )  illegal betting ring run by the guards. They wager on the outcomes, dist ( )");
        printw("\n");
        printw(R"(                  (   racting themselves from the monotony of prison duty....                   ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (   %-*s  ))", width, s4.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (___       _       _       _       _       _       _       _       _       ___))");
        printw("\n");
        printw(R"(                      `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-')");
        printw("\n");
        printw(R"(                              `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-')");
        printw("\n");
        printw(R"(                                      `-._.-' (__  _) (__  _) (_ _ _) `-._.-')");
        printw("\n");
        printw(R"(                                              `-._.-' (_ ___) `-._.-')");
        printw("\n");
        printw(R"(                                                      `-._.-')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s5 = "a distraction that allows him to access restricted areas of the prison u";
    for (int i = 0; i < 72; i++)
    {
        int numSpaces = width - s5.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                     _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._)");
        printw("\n");
        printw(R"(                  .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.)");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (   To Sam's surprise, the minesweeper game is revealed to be a cover for an  ))");
        printw("\n");
        printw(R"(                   )  illegal betting ring run by the guards. They wager on the outcomes, dist ( )");
        printw("\n");
        printw(R"(                  (   racting themselves from the monotony of prison duty....                   ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (   Sam uses his detective skills to manipulate the game's outcome, creating  ))");
        printw("\n");
        printw(R"(                   )  )%-*s ( )", width, s5.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (___       _       _       _       _       _       _       _       _       ___))");
        printw("\n");
        printw(R"(                      `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-')");
        printw("\n");
        printw(R"(                              `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-')");
        printw("\n");
        printw(R"(                                      `-._.-' (__  _) (__  _) (_ _ _) `-._.-')");
        printw("\n");
        printw(R"(                                              `-._.-' (_ ___) `-._.-')");
        printw("\n");
        printw(R"(                                                      `-._.-')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s6 = "nnoticed. He discovers hidden compartments, secret tunnels, and coded me";
    for (int i = 0; i < 72; i++)
    {
        int numSpaces = width - s6.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                     _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._)");
        printw("\n");
        printw(R"(                  .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.)");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (   To Sam's surprise, the minesweeper game is revealed to be a cover for an  ))");
        printw("\n");
        printw(R"(                   )  illegal betting ring run by the guards. They wager on the outcomes, dist ( )");
        printw("\n");
        printw(R"(                  (   racting themselves from the monotony of prison duty....                   ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (   Sam uses his detective skills to manipulate the game's outcome, creating  ))");
        printw("\n");
        printw(R"(                   )  a distraction that allows him to access restricted areas of the prison u ( )");
        printw("\n");
        printw(R"(                  (   %-*s  ))", width, s6.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (___       _       _       _       _       _       _       _       _       ___))");
        printw("\n");
        printw(R"(                      `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-')");
        printw("\n");
        printw(R"(                              `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-')");
        printw("\n");
        printw(R"(                                      `-._.-' (__  _) (__  _) (_ _ _) `-._.-')");
        printw("\n");
        printw(R"(                                              `-._.-' (_ ___) `-._.-')");
        printw("\n");
        printw(R"(                                                      `-._.-')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s7 = "ssages left by other inmates who were part of The Moth's failed escape p";
    for (int i = 0; i < 72; i++)
    {
        int numSpaces = width - s7.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                     _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._)");
        printw("\n");
        printw(R"(                  .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.)");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (   To Sam's surprise, the minesweeper game is revealed to be a cover for an  ))");
        printw("\n");
        printw(R"(                   )  illegal betting ring run by the guards. They wager on the outcomes, dist ( )");
        printw("\n");
        printw(R"(                  (   racting themselves from the monotony of prison duty....                   ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (   Sam uses his detective skills to manipulate the game's outcome, creating  ))");
        printw("\n");
        printw(R"(                   )  a distraction that allows him to access restricted areas of the prison u ( )");
        printw("\n");
        printw(R"(                  (   nnoticed. He discovers hidden compartments, secret tunnels, and coded me  ))");
        printw("\n");
        printw(R"(                   )  %-*s ( )", width, s7.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                  (                                                                             ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (___       _       _       _       _       _       _       _       _       ___))");
        printw("\n");
        printw(R"(                      `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-')");
        printw("\n");
        printw(R"(                              `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-')");
        printw("\n");
        printw(R"(                                      `-._.-' (__  _) (__  _) (_ _ _) `-._.-')");
        printw("\n");
        printw(R"(                                              `-._.-' (_ ___) `-._.-')");
        printw("\n");
        printw(R"(                                                      `-._.-')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s8 = "lan............                                                         ";
    for (int i = 0; i < 72; i++)
    {
        int numSpaces = width - s8.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                     _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._)");
        printw("\n");
        printw(R"(                  .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.)");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (   To Sam's surprise, the minesweeper game is revealed to be a cover for an  ))");
        printw("\n");
        printw(R"(                   )  illegal betting ring run by the guards. They wager on the outcomes, dist ( )");
        printw("\n");
        printw(R"(                  (   racting themselves from the monotony of prison duty....                   ))");
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (   Sam uses his detective skills to manipulate the game's outcome, creating  ))");
        printw("\n");
        printw(R"(                   )  a distraction that allows him to access restricted areas of the prison u ( )");
        printw("\n");
        printw(R"(                  (   nnoticed. He discovers hidden compartments, secret tunnels, and coded me  ))");
        printw("\n");
        printw(R"(                   )  ssages left by other inmates who were part of The Moth's failed escape p ( )");
        printw("\n");
        printw(R"(                  (   %-*s  ))", width, s8.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                   )                                                                           ( )");
        printw("\n");
        printw(R"(                  (___       _       _       _       _       _       _       _       _       ___))");
        printw("\n");
        printw(R"(                      `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-')");
        printw("\n");
        printw(R"(                              `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-')");
        printw("\n");
        printw(R"(                                      `-._.-' (__  _) (__  _) (_ _ _) `-._.-')");
        printw("\n");
        printw(R"(                                              `-._.-' (_ ___) `-._.-')");
        printw("\n");
        printw(R"(                                                      `-._.-')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // Add line break and
    // Prompt user to press enter after they have finished reading the text
    printw("\n");
    printw("                                           Press ENTER to continue\n");
    int ch;
    do
    {
        ch = getch();
    } while (ch != '\n');
}

// Animations for Act Four:

void displayActFour()
{
    // This function prints a UI representing the start of Act Three
    // Terminal cleared and wait time added before each output to create a motion effect

    using namespace std;

    // ASCII art generated from https://www.asciiart.eu/text-to-ascii-art

    clear();
    printw("\n");
    printw("\n");
    printw(R"(                              /$$$$$$   /$$$$$$  /$$$$$$$$       /$$$$$$$$ /$$$$$$  /$$   /$$ /$$$$$$$)");
    printw("\n");
    printw(R"(                             /$$__  $$ /$$__  $$|__  $$__/      | $$_____//$$__  $$| $$  | $$| $$__  $$)");
    printw("\n");
    printw(R"(                            | $$  \ $$| $$  \__/   | $$         | $$     | $$  \ $$| $$  | $$| $$  \ $$)");
    printw("\n");
    printw(R"(                            | $$$$$$$$| $$         | $$         | $$$$$  | $$  | $$| $$  | $$| $$$$$$$/)");
    printw("\n");
    printw(R"(                            | $$__  $$| $$         | $$         | $$__/  | $$  | $$| $$  | $$| $$__  $$)");
    printw("\n");
    printw(R"(                            | $$  | $$| $$    $$   | $$         | $$     | $$  | $$| $$  | $$| $$  \ $$)");
    printw("\n");
    printw(R"(                            | $$  | $$|  $$$$$$/   | $$         | $$     |  $$$$$$/|  $$$$$$/| $$  | $$)");
    printw("\n");
    printw(R"(                            |__/  |__/ \______/    |__/         |__/      \______/  \______/ |__/  |__/)");
    printw("\n");
    printw("\n");
    printw("\n");
    printw(R"(                      ___  _   _  _____  ___  ____  __   _  _    ____  __  __  ____  ___  __  __  ____  ____  ___ )");
    printw("\n");
    printw(R"(                     / __)( )_( )(  _  )/ __)(_  _)(  ) ( \/ )  (  _ \(  )(  )(  _ \/ __)(  )(  )(_  _)(_  _)/ __))");
    printw("\n");
    printw(R"(                    ( (_-. ) _ (  )(_)( \__ \  )(   )(__ \  /    )___/ )(__)(  )   /\__ \ )(__)(  _)(_   )(  \__ \)");
    printw("\n");
    printw(R"(                     \___/(_) (_)(_____)(___/ (__) (____)(__)   (__)  (______)(_)\_)(___/(______)(____) (__) (___/)");
    printw("\n");
    refresh();
    sleep(1.5);

    clear();
    printw("\n");
    printw("\n");
    printw(R"(                             $$$$$$\   $$$$$$\ $$$$$$$$\       $$$$$$$$\  $$$$$$\  $$\   $$\ $$$$$$$\  )");
    printw("\n");
    printw(R"(                            $$  __$$\ $$  __$$\\__$$  __|      $$  _____|$$  __$$\ $$ |  $$ |$$  __$$\ )");
    printw("\n");
    printw(R"(                            $$ /  $$ |$$ /  \__|  $$ |         $$ |      $$ /  $$ |$$ |  $$ |$$ |  $$ |)");
    printw("\n");
    printw(R"(                            $$$$$$$$ |$$ |        $$ |         $$$$$\    $$ |  $$ |$$ |  $$ |$$$$$$$  |)");
    printw("\n");
    printw(R"(                            $$  __$$ |$$ |        $$ |         $$  __|   $$ |  $$ |$$ |  $$ |$$  __$$< )");
    printw("\n");
    printw(R"(                            $$ |  $$ |$$ |  $$\   $$ |         $$ |      $$ |  $$ |$$ |  $$ |$$ |  $$ |)");
    printw("\n");
    printw(R"(                            $$ |  $$ |\$$$$$$  |  $$ |         $$ |       $$$$$$  |\$$$$$$  |$$ |  $$ |)");
    printw("\n");
    printw(R"(                            \__|  \__| \______/   \__|         \__|       \______/  \______/ \__|  \__|)");
    printw("\n");
    printw("\n");
    printw("\n");
    printw(R"(                      ___  _   _  _____  ___  ____  __   _  _    ____  __  __  ____  ___  __  __  ____  ____  ___ )");
    printw("\n");
    printw(R"(                     / __)( )_( )(  _  )/ __)(_  _)(  ) ( \/ )  (  _ \(  )(  )(  _ \/ __)(  )(  )(_  _)(_  _)/ __))");
    printw("\n");
    printw(R"(                    ( (_-. ) _ (  )(_)( \__ \  )(   )(__ \  /    )___/ )(__)(  )   /\__ \ )(__)(  _)(_   )(  \__ \)");
    printw("\n");
    printw(R"(                     \___/(_) (_)(_____)(___/ (__) (____)(__)   (__)  (______)(_)\_)(___/(______)(____) (__) (___/)");
    printw("\n");
    refresh();
    sleep(1.5);

    clear();
    printw("\n");
    printw("\n");
    printw(R"(                              ______    ______   ________        ________  ______   __    __  _______)");
    printw("\n");
    printw(R"(                             /      \  /      \ /        |      /        |/      \ /  |  /  |/       \ )");
    printw("\n");
    printw(R"(                            /$$$$$$  |/$$$$$$  |$$$$$$$$/       $$$$$$$$//$$$$$$  |$$ |  $$ |$$$$$$$  |)");
    printw("\n");
    printw(R"(                            $$ |__$$ |$$ |  $$/    $$ |         $$ |__   $$ |  $$ |$$ |  $$ |$$ |__$$ |)");
    printw("\n");
    printw(R"(                            $$    $$ |$$ |         $$ |         $$    |  $$ |  $$ |$$ |  $$ |$$    $$< )");
    printw("\n");
    printw(R"(                            $$$$$$$$ |$$ |   __    $$ |         $$$$$/   $$ |  $$ |$$ |  $$ |$$$$$$$  |)");
    printw("\n");
    printw(R"(                            $$ |  $$ |$$ \__/  |   $$ |         $$ |     $$ \__$$ |$$ \__$$ |$$ |  $$ |)");
    printw("\n");
    printw(R"(                            $$ |  $$ |$$    $$/    $$ |         $$ |     $$    $$/ $$    $$/ $$ |  $$ |)");
    printw("\n");
    printw(R"(                            $$/   $$/  $$$$$$/     $$/          $$/       $$$$$$/   $$$$$$/  $$/   $$/ )");
    printw("\n");
    printw("\n");
    printw("\n");
    printw(R"(                      ___  _   _  _____  ___  ____  __   _  _    ____  __  __  ____  ___  __  __  ____  ____  ___ )");
    printw("\n");
    printw(R"(                     / __)( )_( )(  _  )/ __)(_  _)(  ) ( \/ )  (  _ \(  )(  )(  _ \/ __)(  )(  )(_  _)(_  _)/ __))");
    printw("\n");
    printw(R"(                    ( (_-. ) _ (  )(_)( \__ \  )(   )(__ \  /    )___/ )(__)(  )   /\__ \ )(__)(  _)(_   )(  \__ \)");
    printw("\n");
    printw(R"(                     \___/(_) (_)(_____)(___/ (__) (____)(__)   (__)  (______)(_)\_)(___/(______)(____) (__) (___/)");
    printw("\n");
    refresh();
    sleep(1.5);

    clear();
    printw("\n");
    printw("\n");
    printw(R"(                              ______    ______  ________        ________   ______   __    __  _______  )");
    printw("\n");
    printw(R"(                             /      \  /      \|        \      |        \ /      \ |  \  |  \|       \ )");
    printw("\n");
    printw(R"(                            |  $$$$$$\|  $$$$$$\\$$$$$$$$      | $$$$$$$$|  $$$$$$\| $$  | $$| $$$$$$$\)");
    printw("\n");
    printw(R"(                            | $$__| $$| $$   \$$  | $$         | $$__    | $$  | $$| $$  | $$| $$__| $$)");
    printw("\n");
    printw(R"(                            | $$    $$| $$        | $$         | $$  \   | $$  | $$| $$  | $$| $$    $$)");
    printw("\n");
    printw(R"(                            | $$$$$$$$| $$   __   | $$         | $$$$$   | $$  | $$| $$  | $$| $$$$$$$\)");
    printw("\n");
    printw(R"(                            | $$  | $$| $$__/  \  | $$         | $$      | $$__/ $$| $$__/ $$| $$  | $$)");
    printw("\n");
    printw(R"(                            | $$  | $$ \$$    $$  | $$         | $$       \$$    $$ \$$    $$| $$  | $$)");
    printw("\n");
    printw(R"(                             \$$   \$$  \$$$$$$    \$$          \$$        \$$$$$$   \$$$$$$  \$$   \$$)");
    printw("\n");
    printw("\n");
    printw("\n");
    printw(R"(                      ___  _   _  _____  ___  ____  __   _  _    ____  __  __  ____  ___  __  __  ____  ____  ___ )");
    printw("\n");
    printw(R"(                     / __)( )_( )(  _  )/ __)(_  _)(  ) ( \/ )  (  _ \(  )(  )(  _ \/ __)(  )(  )(_  _)(_  _)/ __))");
    printw("\n");
    printw(R"(                    ( (_-. ) _ (  )(_)( \__ \  )(   )(__ \  /    )___/ )(__)(  )   /\__ \ )(__)(  _)(_   )(  \__ \)");
    printw("\n");
    printw(R"(                     \___/(_) (_)(_____)(___/ (__) (____)(__)   (__)  (______)(_)\_)(___/(______)(____) (__) (___/)");
    printw("\n");
    refresh();
    sleep(1.5);

    // Generate line breaks
    printw("\n");
    printw("\n");

    // Prompt user to press enter after they have finished reading the text
    printw("                                              Press any ENTER to continue\n");
    refresh();

    int ch;
    do
    {
        ch = getch();
    } while (ch != '\n');
}

void displayStoryFour()
{
    // This function prints the story of Act Four line-by-line
    // character-by-character
    // This is done by storing separate lines as strings and outputting
    // them inside a border
    // Terminal cleared and wait time added before each output to create a motion effect

    // Border ASCII taken from https://www.asciiart.eu/art-and-design/borders

    using namespace std;

    int width = 61;

    string s1 = "As Sam collects evidence, he also finds pieces of his own pas";
    for (int i = 0; i < 61; i++)
    {
        int numSpaces = width - s1.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                        .-=~=-.                                                                 .-=~=-.)");
        printw("\n");
        printw(R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))");
        printw("\n");
        printw(R"(                        ( _ __)                                                                 ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)  %-*s  (__  _))", width, s1.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                        (_ ___)                                                                 (_ ___))");
        printw("\n");
        printw(R"(                        (__  _)                                                                 (__  _))");
        printw("\n");
        printw(R"(                        ( _ __)                                                                 ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)                                                                 (__  _))");
        printw("\n");
        printw(R"(                        (_ ___)                                                                 (_ ___))");
        printw("\n");
        printw(R"(                        ( _ __)                                                                 ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))");
        printw("\n");
        printw(R"(                        `-._.-'                                                                 `-._.-')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s2 = "t scattered throughout the prison. Old case files, personal b";
    for (int i = 0; i < 61; i++)
    {
        int numSpaces = width - s2.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                        .-=~=-.                                                                 .-=~=-.)");
        printw("\n");
        printw(R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))");
        printw("\n");
        printw(R"(                        ( _ __)                                                                 ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)  As Sam collects evidence, he also finds pieces of his own pas  (__  _))");
        printw("\n");
        printw(R"(                        (_ ___)  %-*s  (_ ___))", width, s2.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                        (__  _)                                                                 (__  _))");
        printw("\n");
        printw(R"(                        ( _ __)                                                                 ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)                                                                 (__  _))");
        printw("\n");
        printw(R"(                        (_ ___)                                                                 (_ ___))");
        printw("\n");
        printw(R"(                        ( _ __)                                                                 ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))");
        printw("\n");
        printw(R"(                        `-._.-'                                                                 `-._.-')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s3 = "elongings, and a letter from someone he thought was lost - al";
    for (int i = 0; i < 61; i++)
    {
        int numSpaces = width - s3.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                        .-=~=-.                                                                 .-=~=-.)");
        printw("\n");
        printw(R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))");
        printw("\n");
        printw(R"(                        ( _ __)                                                                 ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)  As Sam collects evidence, he also finds pieces of his own pas  (__  _))");
        printw("\n");
        printw(R"(                        (_ ___)  t scattered throughout the prison. Old case files, personal b  (_ ___))");
        printw("\n");
        printw(R"(                        (__  _)  %-*s  (__  _))", width, s3.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                        ( _ __)                                                                 ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)                                                                 (__  _))");
        printw("\n");
        printw(R"(                        (_ ___)                                                                 (_ ___))");
        printw("\n");
        printw(R"(                        ( _ __)                                                                 ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))");
        printw("\n");
        printw(R"(                        `-._.-'                                                                 `-._.-')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s4 = "l these items help him evade the guards. The maze of prison c";
    for (int i = 0; i < 61; i++)
    {
        int numSpaces = width - s4.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                        .-=~=-.                                                                 .-=~=-.)");
        printw("\n");
        printw(R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))");
        printw("\n");
        printw(R"(                        ( _ __)                                                                 ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)  As Sam collects evidence, he also finds pieces of his own pas  (__  _))");
        printw("\n");
        printw(R"(                        (_ ___)  t scattered throughout the prison. Old case files, personal b  (_ ___))");
        printw("\n");
        printw(R"(                        (__  _)  elongings, and a letter from someone he thought was lost - al  (__  _))");
        printw("\n");
        printw(R"(                        ( _ __)  %-*s  ( _ __))", width, s4.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                        (__  _)                                                                 (__  _))");
        printw("\n");
        printw(R"(                        (_ ___)                                                                 (_ ___))");
        printw("\n");
        printw(R"(                        ( _ __)                                                                 ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))");
        printw("\n");
        printw(R"(                        `-._.-'                                                                 `-._.-')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s5 = "orridors becomes a metaphorical labyrinth of memories and sec";
    for (int i = 0; i < 61; i++)
    {
        int numSpaces = width - s5.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                        .-=~=-.                                                                 .-=~=-.)");
        printw("\n");
        printw(R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))");
        printw("\n");
        printw(R"(                        ( _ __)                                                                 ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)  As Sam collects evidence, he also finds pieces of his own pas  (__  _))");
        printw("\n");
        printw(R"(                        (_ ___)  t scattered throughout the prison. Old case files, personal b  (_ ___))");
        printw("\n");
        printw(R"(                        (__  _)  elongings, and a letter from someone he thought was lost - al  (__  _))");
        printw("\n");
        printw(R"(                        ( _ __)  l these items help him evade the guards. The maze of prison c  ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)  %-*s  (__  _))", width, s5.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                        (_ ___)                                                                 (_ ___))");
        printw("\n");
        printw(R"(                        ( _ __)                                                                 ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))");
        printw("\n");
        printw(R"(                        `-._.-'                                                                 `-._.-')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s6 = "rets........                                                 ";
    for (int i = 0; i < 61; i++)
    {
        int numSpaces = width - s6.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                        .-=~=-.                                                                 .-=~=-.)");
        printw("\n");
        printw(R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))");
        printw("\n");
        printw(R"(                        ( _ __)                                                                 ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)  As Sam collects evidence, he also finds pieces of his own pas  (__  _))");
        printw("\n");
        printw(R"(                        (_ ___)  t scattered throughout the prison. Old case files, personal b  (_ ___))");
        printw("\n");
        printw(R"(                        (__  _)  elongings, and a letter from someone he thought was lost - al  (__  _))");
        printw("\n");
        printw(R"(                        ( _ __)  l these items help him evade the guards. The maze of prison c  ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)  orridors becomes a metaphorical labyrinth of memories and sec  (__  _))");
        printw("\n");
        printw(R"(                        (_ ___)  %-*s  (_ ___))", width, s6.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                        ( _ __)                                                                 ( _ __))");
        printw("\n");
        printw(R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))");
        printw("\n");
        printw(R"(                        `-._.-'                                                                 `-._.-')");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // Add line break and
    // Prompt user to press enter after they have finished reading the text
    printw("\n");
    printw("                                                     Press ENTER to continue\n");
    int ch;
    do
    {
        ch = getch();
    } while (ch != '\n');
}

void displayIntroFour()
{
    // Prints a logo representing the task of the act line by line
    // using an array
    // Terminal cleared and wait time added before each output to create a motion effect

    // Border ASCII taken from https://www.asciiart.eu/

    using namespace std;

    // Stored as an array of strings
    string keyArr[] = {
        R"(                            ,------------------------------.----------------------------------.)",
        R"(                            |                             |                                   |)",
        R"(                            |    .    .    ,---------     |     ------------------------.     |)",
        R"(                            |    |    |    |              |                             |     |)",
        R"(                            |    |    `----"--------------'    ,-------------------.    |     |)",
        R"(                            |    |                             |                   |    |     |)",
        R"(                            |    :--------------.--------------"----     ,---------:    |     |)",
        R"(                            |    |              |                        |         |    |     |)",
        R"(                            |    :---------     |    .    ,---------.    |    .    |    `----:)",
        R"(                            |    |              |    |    |         |    |    |    |         |)",
        R"(                            |    |     ---------'    |    :----     |    |    |    |    .    |)",
        R"(                            |    |                   |    |         |    |    |    |    |    |)",
        R"(                            |    `-------------------'    |     ----'    |    |    |    |    |)",
        R"(                            |                             |              |    |    |    |    |)",
        R"(                            :--------------.---------.    :--------------'    |    :----'    |)",
        R"(                            |              |         |    |                   |    |         |)",
        R"(                            |    .    .    |    .    |    |    ,--------------:    `----     |)",
        R"(                            |    |    |    |    |    |    |    |              |              |)",
        R"(                            |    |    |    "    |    |    |    |     ---------"---------.    |)",
        R"(                            |    |    |         |    |    |    |                        |    |)",
        R"(                            |    |    `---------"----'    |    |    ,---------.    .    |    |)",
        R"(                            |    |                        |    |    |         |    |    |    |)",
        R"(                            |    :---------.--------------:    |    |    .    |    |    |    |)",
        R"(                            |    |         |              |    |    |    |    |    |    |    |)",
        R"(                            |    "    .    `---------     |    |    `----'    |    `----'    |)",
        R"(                            |         |                   |    |              |              |)",
        R"(                            `---------"-------------------'    `--------------"--------------')"};

    // Loops through the array and prints line by line
    for (int i = 0; i < 27; i++)
    {
        clear();
        for (int j = 0; j <= i; j++)
        {
            printw(keyArr[j].c_str());
            printw("\n");
        }
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // sleep time to allow user to see final logo
    refresh();
    sleep(5);
}

// Animations for Outro:

void displayDoorOutro()
{
    // Prints a logo representing the epilogue of the game line by line
    // using an array
    // Terminal cleared and wait time added before each output to create a motion effect

    // Border ASCII taken from https://www.asciiart.eu/

    using namespace std;

    string keyArr[] = {
        R"(                            88888888888888888888888888888888888888888888888888888888888888888888888)",
        R"(                            88.._|      | `-.  | `.  -_-_ _-_  _-  _- -_ -  .'|   |.'|     |  _..88)",
        R"(                            88   `-.._  |    |`!  |`.  -_ -__ -_ _- _-_-  .'  |.;'   |   _.!-'|  88)",
        R"(                            88      | `-!._  |  `;!  ;. _______________ ,'| .-' |   _!.i'     |  88)",
        R"(                            88..__  |     |`-!._ | `.| |_______________||."'|  _!.;'   |     _|..88)",
        R"(                            88   |``"..__ |    |`";.| i|_|MMMMMMMMMMM|_|'| _!-|   |   _|..-|'    88)",
        R"(                            88   |      |``--..|_ | `;!|l|MMoMMMMoMMM|1|.'j   |_..!-'|     |     88)",
        R"(                            88   |      |    |   |`-,!_|_|MMMMP'YMMMM|_||.!-;'  |    |     |     88)",
        R"(                            88___|______|____!.,.!,.!,!|d|MMMo * loMM|p|,!,.!.,.!..__|_____|_____88)",
        R"(                            88      |     |    |  |  | |_|MMMMb,dMMMM|_|| |   |   |    |      |  88)",
        R"(                            88      |     |    |..!-;'i|r|MPYMoMMMMoM|r| |`-..|   |    |      |  88)",
        R"(                            88      |    _!.-j'  | _!,"|_|M<>MMMMoMMM|_||!._|  `i-!.._ |      |  88)",
        R"(                            88     _!.-'|    | _."|  !;|1|MbdMMoMMMMM|l|`.| `-._|    |``-.._  |  88)",
        R"(                            88..-i'     |  _.''|  !-| !|_|MMMoMMMMoMM|_|.|`-. | ``._ |     |``"..88)",
        R"(                            88   |      |.|    |.|  !| |u|MoMMMMoMMMM|n||`. |`!   | `".    |     88)",
        R"(                            88   |  _.-'  |  .'  |.' |/|_|MMMMoMMMMoM|_|.|`!  `,.|    |-._|      88)",
        R"(                            88  _!"'|     !.'|  .'| .'|[@]MMMMMMMMMMM[@] \|  `. | `._  |   `-._  88)",
        R"(                            88-'    |   .'   |.|  |/| /                 \|`.  |`!    |.|      |`-88)",
        R"(                            88      |_.'|   .' | .' |/                   \  \ |  `.  | `._    |  88)",
        R"(                            88     .'   | .'   |/|  /                     \ |`!   |`.|    `.  |  88)",
        R"(                            88  _.'     !'|   .' | /                       \|  `  |  `.    |`.|  88)",
        R"(                            88888888888888888888888888888888888888888888888888888888888888888888888)"};

    // Loops through the array and prints line by line
    for (int i = 0; i < 22; i++)
    {
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        for (int j = 0; j <= i; j++)
        {
            printw(keyArr[j].c_str());
            printw("\n");
        }
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // sleep time to allow user to see final logo
    refresh();
    sleep(5);
}

void displayOutroStory()
{
    // This function prints the outro story of game line-by-line
    // character-by-character
    // This is done by storing separate lines as strings and outputting
    // them inside a border
    // Terminal cleared and wait time added before each output to create a motion effect

    // Border ASCII taken from https://www.asciiart.eu/art-and-design/borders

    using namespace std;

    int width = 25;

    string s1 = "Having narrowly escaped A";
    for (int i = 0; i < 25; i++)
    {
        int numSpaces = width - s1.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                                      ______________________________)");
        printw("\n");
        printw(R"(                                                    / \                             \.)");
        printw("\n");
        printw(R"(                                                   |   |                            |.)");
        printw("\n");
        printw(R"(                                                   \_ |                            |.)");
        printw("\n");
        printw(R"(                                                      |  %-*s |.)", width, s1.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |   _________________________|___)");
        printw("\n");
        printw(R"(                                                      |  /                            /.)");
        printw("\n");
        printw(R"(                                                      \_/____________________________/.)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s2 = "lacran, Sam's heart raced";
    for (int i = 0; i < 25; i++)
    {
        int numSpaces = width - s2.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                                      ______________________________)");
        printw("\n");
        printw(R"(                                                    / \                             \.)");
        printw("\n");
        printw(R"(                                                   |   |                            |.)");
        printw("\n");
        printw(R"(                                                   \_ |                            |.)");
        printw("\n");
        printw(R"(                                                      |  Having narrowly escaped A |.)");
        printw("\n");
        printw(R"(                                                      |  %-*s |.)", width, s2.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |   _________________________|___)");
        printw("\n");
        printw(R"(                                                      |  /                            /.)");
        printw("\n");
        printw(R"(                                                      \_/____________________________/.)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s3 = "as he made his way to fre";
    for (int i = 0; i < 25; i++)
    {
        int numSpaces = width - s3.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                                      ______________________________)");
        printw("\n");
        printw(R"(                                                    / \                             \.)");
        printw("\n");
        printw(R"(                                                   |   |                            |.)");
        printw("\n");
        printw(R"(                                                   \_ |                            |.)");
        printw("\n");
        printw(R"(                                                      |  Having narrowly escaped A |.)");
        printw("\n");
        printw(R"(                                                      |  lacran, Sam's heart raced |.)");
        printw("\n");
        printw(R"(                                                      |  %-*s |.)", width, s3.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |   _________________________|___)");
        printw("\n");
        printw(R"(                                                      |  /                            /.)");
        printw("\n");
        printw(R"(                                                      \_/____________________________/.)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s4 = "edom. But as he emerged f";
    for (int i = 0; i < 25; i++)
    {
        int numSpaces = width - s4.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                                      ______________________________)");
        printw("\n");
        printw(R"(                                                    / \                             \.)");
        printw("\n");
        printw(R"(                                                   |   |                            |.)");
        printw("\n");
        printw(R"(                                                   \_ |                            |.)");
        printw("\n");
        printw(R"(                                                      |  Having narrowly escaped A |.)");
        printw("\n");
        printw(R"(                                                      |  lacran, Sam's heart raced |.)");
        printw("\n");
        printw(R"(                                                      |  as he made his way to fre |.)");
        printw("\n");
        printw(R"(                                                      |  %-*s |.)", width, s4.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |   _________________________|___)");
        printw("\n");
        printw(R"(                                                      |  /                            /.)");
        printw("\n");
        printw(R"(                                                      \_/____________________________/.)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s5 = "rom the prison's depths a";
    for (int i = 0; i < 25; i++)
    {
        int numSpaces = width - s5.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                                      ______________________________)");
        printw("\n");
        printw(R"(                                                    / \                             \.)");
        printw("\n");
        printw(R"(                                                   |   |                            |.)");
        printw("\n");
        printw(R"(                                                   \_ |                            |.)");
        printw("\n");
        printw(R"(                                                      |  Having narrowly escaped A |.)");
        printw("\n");
        printw(R"(                                                      |  lacran, Sam's heart raced |.)");
        printw("\n");
        printw(R"(                                                      |  as he made his way to fre |.)");
        printw("\n");
        printw(R"(                                                      |  edom. But as he emerged f |.)");
        printw("\n");
        printw(R"(                                                      |  %-*s |.)", width, s5.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |   _________________________|___)");
        printw("\n");
        printw(R"(                                                      |  /                            /.)");
        printw("\n");
        printw(R"(                                                      \_/____________________________/.)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s6 = "nd stepped into sunlight,";
    for (int i = 0; i < 25; i++)
    {
        int numSpaces = width - s6.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                                      ______________________________)");
        printw("\n");
        printw(R"(                                                    / \                             \.)");
        printw("\n");
        printw(R"(                                                   |   |                            |.)");
        printw("\n");
        printw(R"(                                                   \_ |                            |.)");
        printw("\n");
        printw(R"(                                                      |  Having narrowly escaped A |.)");
        printw("\n");
        printw(R"(                                                      |  lacran, Sam's heart raced |.)");
        printw("\n");
        printw(R"(                                                      |  as he made his way to fre |.)");
        printw("\n");
        printw(R"(                                                      |  edom. But as he emerged f |.)");
        printw("\n");
        printw(R"(                                                      |  rom the prison's depths a |.)");
        printw("\n");
        printw(R"(                                                      |  %-*s |.)", width, s6.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |   _________________________|___)");
        printw("\n");
        printw(R"(                                                      |  /                            /.)");
        printw("\n");
        printw(R"(                                                      \_/____________________________/.)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s7 = "he stumbled upon somethin";
    for (int i = 0; i < 25; i++)
    {
        int numSpaces = width - s7.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                                      ______________________________)");
        printw("\n");
        printw(R"(                                                    / \                             \.)");
        printw("\n");
        printw(R"(                                                   |   |                            |.)");
        printw("\n");
        printw(R"(                                                   \_ |                            |.)");
        printw("\n");
        printw(R"(                                                      |  Having narrowly escaped A |.)");
        printw("\n");
        printw(R"(                                                      |  lacran, Sam's heart raced |.)");
        printw("\n");
        printw(R"(                                                      |  as he made his way to fre |.)");
        printw("\n");
        printw(R"(                                                      |  edom. But as he emerged f |.)");
        printw("\n");
        printw(R"(                                                      |  rom the prison's depths a |.)");
        printw("\n");
        printw(R"(                                                      |  nd stepped into sunlight, |.)");
        printw("\n");
        printw(R"(                                                      |  %-*s |.)", width, s7.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |   _________________________|___)");
        printw("\n");
        printw(R"(                                                      |  /                            /.)");
        printw("\n");
        printw(R"(                                                      \_/____________________________/.)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    string s8 = "g spine-chilling.........";
    for (int i = 0; i < 25; i++)
    {
        int numSpaces = width - s8.substr(0, i + 1).length();
        if (numSpaces < 0)
            numSpaces = 0;
        clear();
        printw("\n");
        printw("\n");
        printw("\n");
        printw("\n");
        printw(R"(                                                      ______________________________)");
        printw("\n");
        printw(R"(                                                    / \                             \.)");
        printw("\n");
        printw(R"(                                                   |   |                            |.)");
        printw("\n");
        printw(R"(                                                   \_ |                            |.)");
        printw("\n");
        printw(R"(                                                      |  Having narrowly escaped A |.)");
        printw("\n");
        printw(R"(                                                      |  lacran, Sam's heart raced |.)");
        printw("\n");
        printw(R"(                                                      |  as he made his way to fre |.)");
        printw("\n");
        printw(R"(                                                      |  edom. But as he emerged f |.)");
        printw("\n");
        printw(R"(                                                      |  rom the prison's depths a |.)");
        printw("\n");
        printw(R"(                                                      |  nd stepped into sunlight, |.)");
        printw("\n");
        printw(R"(                                                      |  he stumbled upon somethin |.)");
        printw("\n");
        printw(R"(                                                      |  %-*s |.)", width, s8.substr(0, i + 1).c_str());
        printw("\n");
        printw(R"(                                                      |                            |.)");
        printw("\n");
        printw(R"(                                                      |   _________________________|___)");
        printw("\n");
        printw(R"(                                                      |  /                            /.)");
        printw("\n");
        printw(R"(                                                      \_/____________________________/.)");
        printw("\n");
        refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // Add line break and
    // Prompt user to press enter after they have finished reading the text
    printw("\n");
    printw("                                                           Press ENTER to continue\n");
    int ch;
    do
    {
        ch = getch();
    } while (ch != '\n');
}

void displayToBeContinued()
{
    // This function prints a UI representing the start of Act Three
    // Terminal cleared and wait time added before each output to create a motion effect

    // ASCII art generated from https://www.asciiart.eu/text-to-ascii-art

    using namespace std;

    clear();
    printw("\n");
    printw("\n");
    printw("\n");
    printw("\n");
    printw(R"(                                      ______   ______        ______     ______    )");
    printw("\n");
    printw(R"(                                     /\__  _\ /\  __ \      /\  == \   /\  ___\   )");
    printw("\n");
    printw(R"(                                     \/_/\ \/ \ \ \/\ \     \ \  __<   \ \  __\   )");
    printw("\n");
    printw(R"(                                        \ \_\  \ \_____\     \ \_____\  \ \_____\ )");
    printw("\n");
    printw(R"(                                         \/_/   \/_____/      \/_____/   \/_____/ )");
    printw("\n");
    printw("\n");
    printw(R"(                    ______     ______     __   __     ______   __     __   __     __  __     ______     _____    )");
    printw("\n");
    printw(R"(                   /\  ___\   /\  __ \   /\ "-.\ \   /\__  _\ /\ \   /\ "-.\ \   /\ \/\ \   /\  ___\   /\  __-.  )");
    printw("\n");
    printw(R"(                   \ \ \____  \ \ \/\ \  \ \ \-.  \  \/_/\ \/ \ \ \  \ \ \-.  \  \ \ \_\ \  \ \  __\   \ \ \/\ \ )");
    printw("\n");
    printw(R"(                    \ \_____\  \ \_____\  \ \_\\"\_\    \ \_\  \ \_\  \ \_\\"\_\  \ \_____\  \ \_____\  \ \____- )");
    printw("\n");
    printw(R"(                     \/_____/   \/_____/   \/_/ \/_/     \/_/   \/_/   \/_/ \/_/   \/_____/   \/_____/   \/____/ )");
    printw("\n");
    refresh();
    sleep(5.5);
}