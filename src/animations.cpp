#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "../include/animations.h"

// Library effective with Windows
#include <windows.h>

// Library effective with Linux
#include <unistd.h>

void introAnimations()
{

    using namespace std;

    // Ascii Art generated from https://patorjk.com/software/taag/#p=testall&h=3&v=1&f=Graffiti&t=The%20Great%20Escape

    system("cls");
    cout << R"(               _______                                        )" << endl;
    cout << R"(              |__   __|                                      )" << endl;
    cout << R"(                 | |                                                                        ___)" << endl;
    cout << R"(                 | |                                                                       / _ \)" << endl;
    cout << R"(                 | |                                                                      |  __/)" << endl;
    cout << R"(                 |_|                                                                       \___|)" << endl;
    cout << R"(                                                                                             )" << endl;
    cout << R"(                                                                                             )" << endl;
    sleep(1);

    system("cls");
    cout << R"(               _______ _                                       )" << endl;
    cout << R"(              |__   __| |                                      )" << endl;
    cout << R"(                 | |  | |__                                                          _ __   ___)" << endl;
    cout << R"(                 | |  | '_ \                                                        | '_ \ / _ \)" << endl;
    cout << R"(                 | |  | | | |                                                       | |_) |  __/)" << endl;
    cout << R"(                 |_|  |_| |_|                                                       | .__/ \___|)" << endl;
    cout << R"(                                                                                    | |         )" << endl;
    cout << R"(                                                                                    |_|         )" << endl;
    sleep(1);

    system("cls");
    cout << R"(               _______ _                                       )" << endl;
    cout << R"(              |__   __| |                                      )" << endl;
    cout << R"(                 | |  | |__   ___                                           ___ __ _ _ __   ___)" << endl;
    cout << R"(                 | |  | '_ \ / _ \                                         / __/ _` | '_ \ / _ \)" << endl;
    cout << R"(                 | |  | | | |  __/                                        | (_| (_| | |_) |  __/)" << endl;
    cout << R"(                 |_|  |_| |_|\___|                                         \___\__,_| .__/ \___|)" << endl;
    cout << R"(                                                                                    | |         )" << endl;
    cout << R"(                                                                                    |_|         )" << endl;
    sleep(1);

    system("cls");
    cout << R"(               _______ _             _____                      ______)" << endl;
    cout << R"(              |__   __| |           / ____|                    |  ____|)" << endl;
    cout << R"(                 | |  | |__   ___  | |  __ _ __                | |__   ___  ___ __ _ _ __   ___)" << endl;
    cout << R"(                 | |  | '_ \ / _ \ | | |_ | '__/               |  __| / __|/ __/ _` | '_ \ / _ \)" << endl;
    cout << R"(                 | |  | | | |  __/ | |__| | |                  | |____\__ | (_| (_| | |_) |  __/)" << endl;
    cout << R"(                 |_|  |_| |_|\___|  \_____|_|                  |______|___/\___\__,_| .__/ \___|)" << endl;
    cout << R"(                                                                                    | |         )" << endl;
    cout << R"(                                                                                    |_|         )" << endl;
    sleep(1);

    system("cls");
    cout << R"(               _______ _             _____                _     ______)" << endl;
    cout << R"(              |__   __| |           / ____|              | |   |  ____|)" << endl;
    cout << R"(                 | |  | |__   ___  | |  __ _ __ ___  __ _| |_  | |__   ___  ___ __ _ _ __   ___)" << endl;
    cout << R"(                 | |  | '_ \ / _ \ | | |_ | '__/ _ \/ _` | __| |  __| / __|/ __/ _` | '_ \ / _ \)" << endl;
    cout << R"(                 | |  | | | |  __/ | |__| | | |  __| (_| | |_  | |____\__ | (_| (_| | |_) |  __/)" << endl;
    cout << R"(                 |_|  |_| |_|\___|  \_____|_|  \___|\__,_|\__| |______|___/\___\__,_| .__/ \___|)" << endl;
    cout << R"(                                                                                    | |         )" << endl;
    cout << R"(                                                                                    |_|         )" << endl;
    sleep(1.5);

    system("cls");
    cout << R"(               _______ _             _____                _     ______)" << endl;
    cout << R"(              |__   __| |           / ____|              | |   |  ____|)" << endl;
    cout << R"(                 | |  | |__   ___  | |  __ _ __ ___  __ _| |_  | |__   ___  ___ __ _ _ __   ___)" << endl;
    cout << R"(                 | |  | '_ \ / _ \ | | |_ | '__/ _ \/ _` | __| |  __| / __|/ __/ _` | '_ \ / _ \)" << endl;
    cout << R"(                 | |  | | | |  __/ | |__| | | |  __| (_| | |_  | |____\__ | (_| (_| | |_) |  __/)" << endl;
    cout << R"(                 |_|  |_| |_|\___|  \_____|_|  \___|\__,_|\__| |______|___/\___\__,_| .__/ \___|)" << endl;
    cout << R"(                                                                                    | |         )" << endl;
    cout << R"(                                                                                    |_|         )" << endl;
    cout << R"(                         _   _   _   _   _   _   _   _   _     _   _   _   _   _   _)" << endl;
    cout << R"(                        / \ / \ / \ / \ / \ / \ / \ / \ / \   / \ / \ / \ / \ / \ / \)" << endl;
    cout << R"(                       ( A ( L ( A ( C ( R ( A ( N ( ' ( S ) ( S ( H ( A ( D ( O ( W ))" << endl;
    cout << R"(                        \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/   \_/ \_/ \_/ \_/ \_/ \_/)" << endl;
    sleep(1.5);

    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                                     Press any ENTER to continue" << endl;
    cin.ignore();
}

void printCredits()
{
    using namespace std;

    system("cls");
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                            ______                          ________ __ __" << endl;
    cout << R"(                           / _____________  __  ______     <  |__  // // /)" << endl;
    cout << R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)" << endl;
    cout << R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)" << endl;
    cout << R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)" << endl;
    cout << R"(                                              /_/                         )" << endl;
    cout << R"(                      =====================================================)" << endl;
    sleep(1);

    system("cls");
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                            ______                          ________ __ __" << endl;
    cout << R"(                           / _____________  __  ______     <  |__  // // /)" << endl;
    cout << R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)" << endl;
    cout << R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)" << endl;
    cout << R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)" << endl;
    cout << R"(                                              /_/                         )" << endl;
    cout << R"(                      =====================================================)" << endl;
    cout << "                                                                              " << endl;
    sleep(1);

    system("cls");
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                            ______                          ________ __ __" << endl;
    cout << R"(                           / _____________  __  ______     <  |__  // // /)" << endl;
    cout << R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)" << endl;
    cout << R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)" << endl;
    cout << R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)" << endl;
    cout << R"(                                              /_/                         )" << endl;
    cout << R"(                      =====================================================)" << endl;
    cout << "                                                                              " << endl;
    cout << "                           Abagumbul Ammar Amin                3036259243                " << endl;
    sleep(1);

    system("cls");
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                            ______                          ________ __ __" << endl;
    cout << R"(                           / _____________  __  ______     <  |__  // // /)" << endl;
    cout << R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)" << endl;
    cout << R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)" << endl;
    cout << R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)" << endl;
    cout << R"(                                              /_/                         )" << endl;
    cout << R"(                      =====================================================)" << endl;
    cout << "                                                                              " << endl;
    cout << "                           Abagumbul Ammar Amin                3036259243                " << endl;
    cout << "                           Ali Musaddiq                        3036259011                " << endl;
    sleep(1);

    system("cls");
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                            ______                          ________ __ __" << endl;
    cout << R"(                           / _____________  __  ______     <  |__  // // /)" << endl;
    cout << R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)" << endl;
    cout << R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)" << endl;
    cout << R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)" << endl;
    cout << R"(                                              /_/                         )" << endl;
    cout << R"(                      =====================================================)" << endl;
    cout << "                                                                              " << endl;
    cout << "                           Abagumbul Ammar Amin                3036259243                " << endl;
    cout << "                           Ali Musaddiq                        3036259011                " << endl;
    cout << "                           Chowdhury Aosaf Ershad              3036253732                " << endl;
    sleep(1);

    system("cls");
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                            ______                          ________ __ __" << endl;
    cout << R"(                           / _____________  __  ______     <  |__  // // /)" << endl;
    cout << R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)" << endl;
    cout << R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)" << endl;
    cout << R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)" << endl;
    cout << R"(                                              /_/                         )" << endl;
    cout << R"(                      =====================================================)" << endl;
    cout << "                                                                              " << endl;
    cout << "                           Abagumbul Ammar Amin                3036259243                " << endl;
    cout << "                           Ali Musaddiq                        3036259011                " << endl;
    cout << "                           Chowdhury Aosaf Ershad              3036253732                " << endl;
    cout << "                           Ignatius De Loyola Dominique Japar  3036184072                " << endl;
    sleep(1);

    system("cls");
    cout << "                                                                              " << endl;
    cout << "                            ______                          ________ __ __" << endl;
    cout << R"(                           / _____________  __  ______     <  |__  // // /)" << endl;
    cout << R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)" << endl;
    cout << R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)" << endl;
    cout << R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)" << endl;
    cout << R"(                                              /_/                         )" << endl;
    cout << R"(                      =====================================================)" << endl;
    cout << "                                                                              " << endl;
    cout << "                           Abagumbul Ammar Amin                3036259243                " << endl;
    cout << "                           Ali Musaddiq                        3036259011                " << endl;
    cout << "                           Chowdhury Aosaf Ershad              3036253732                " << endl;
    cout << "                           Ignatius De Loyola Dominique Japar  3036184072                " << endl;
    cout << "                           Sheik Mahmood Afif                  3036225230                " << endl;
    sleep(1);

    system("cls");
    cout << "                            ______                          ________ __ __" << endl;
    cout << R"(                           / _____________  __  ______     <  |__  // // /)" << endl;
    cout << R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)" << endl;
    cout << R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)" << endl;
    cout << R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)" << endl;
    cout << R"(                                              /_/                         )" << endl;
    cout << R"(                      =====================================================)" << endl;
    cout << "                                                                              " << endl;
    cout << "                           Abagumbul Ammar Amin                3036259243                " << endl;
    cout << "                           Ali Musaddiq                        3036259011                " << endl;
    cout << "                           Chowdhury Aosaf Ershad              3036253732                " << endl;
    cout << "                           Ignatius De Loyola Dominique Japar  3036184072                " << endl;
    cout << "                           Sheik Mahmood Afif                  3036225230                " << endl;
    sleep(1.5);

    system("cls");
    cout << "                            ______                          ________ __ __" << endl;
    cout << R"(                           / _____________  __  ______     <  |__  // // /)" << endl;
    cout << R"(                          / / __/ ___/ __ \/ / / / __ \    / / /_ </ // /_)" << endl;
    cout << R"(                         / /_/ / /  / /_/ / /_/ / /_/ /   / /___/ /__  __/)" << endl;
    cout << R"(                         \____/_/   \____/\__,_/ .___/   /_//____/  /_/)" << endl;
    cout << R"(                                              /_/                         )" << endl;
    cout << R"(                      =====================================================)" << endl;
    cout << "                                                                              " << endl;
    cout << "                           Abagumbul Ammar Amin                3036259243                " << endl;
    cout << "                           Ali Musaddiq                        3036259011                " << endl;
    cout << "                           Chowdhury Aosaf Ershad              3036253732                " << endl;
    cout << "                           Ignatius De Loyola Dominique Japar  3036184072                " << endl;
    cout << "                           Sheik Mahmood Afif                  3036225230                " << endl;
    cout << endl;
    cout << "                                    Press any ENTER to continue" << endl;
}

void storyLineIntro()
{
    using namespace std;

    string s1 = "Sam Riker, a former detective, finds himse";
    for (int i = 0; i < 42; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << R"(                              __| |____________________________________________| |__)" << endl;
        cout << R"(                             (__   ____________________________________________   __))" << endl;
        cout << R"(                                | | )" << setw(42) << left << s1.substr(0, i + 1) << R"( | |)" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        cout << R"(                              __| |____________________________________________| |__)" << endl;
        cout << R"(                             (__   ____________________________________________   __))" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        sleep(0.1);
    }

    string s2 = "lf framed for a crime he didn't commit. Se";
    for (int i = 0; i < 42; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << R"(                              __| |____________________________________________| |__)" << endl;
        cout << R"(                             (__   ____________________________________________   __))" << endl;
        cout << R"(                                | | Sam Riker, a former detective, finds himse | |)" << endl;
        cout << R"(                                | | )" << setw(42) << left << s2.substr(0, i + 1) << R"( | |)" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        cout << R"(                              __| |____________________________________________| |__)" << endl;
        cout << R"(                             (__   ____________________________________________   __))" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        sleep(0.1);
    }

    string s3 = "ntenced to life in Alacran Maximum Securit";
    for (int i = 0; i < 42; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << R"(                              __| |____________________________________________| |__)" << endl;
        cout << R"(                             (__   ____________________________________________   __))" << endl;
        cout << R"(                                | | Sam Riker, a former detective, finds himse | |)" << endl;
        cout << R"(                                | | lf framed for a crime he didn't commit. Se | |)" << endl;
        cout << R"(                                | | )" << setw(42) << left << s3.substr(0, i + 1) << R"( | |)" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        cout << R"(                              __| |____________________________________________| |__)" << endl;
        cout << R"(                             (__   ____________________________________________   __))" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        sleep(0.1);
    }

    string s4 = "y Prison, he knows the only way to clear h";
    for (int i = 0; i < 42; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << R"(                              __| |____________________________________________| |__)" << endl;
        cout << R"(                             (__   ____________________________________________   __))" << endl;
        cout << R"(                                | | Sam Riker, a former detective, finds himse | |)" << endl;
        cout << R"(                                | | lf framed for a crime he didn't commit. Se | |)" << endl;
        cout << R"(                                | | ntenced to life in Alacran Maximum Securit | |)" << endl;
        cout << R"(                                | | )" << setw(42) << left << s4.substr(0, i + 1) << R"( | |)" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        cout << R"(                              __| |____________________________________________| |__)" << endl;
        cout << R"(                             (__   ____________________________________________   __))" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        sleep(0.1);
    }

    string s5 = "is name is to escape and uncover the consp";
    for (int i = 0; i < 42; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << R"(                              __| |____________________________________________| |__)" << endl;
        cout << R"(                             (__   ____________________________________________   __))" << endl;
        cout << R"(                                | | Sam Riker, a former detective, finds himse | |)" << endl;
        cout << R"(                                | | lf framed for a crime he didn't commit. Se | |)" << endl;
        cout << R"(                                | | ntenced to life in Alacran Maximum Securit | |)" << endl;
        cout << R"(                                | | y Prison, he knows the only way to clear h | |)" << endl;
        cout << R"(                                | | )" << setw(42) << left << s5.substr(0, i + 1) << R"( | |)" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        cout << R"(                              __| |____________________________________________| |__)" << endl;
        cout << R"(                             (__   ____________________________________________   __))" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        sleep(0.1);
    }

    string s6 = "iracy that put him behind bars.....";
    for (int i = 0; i < 42; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << R"(                              __| |____________________________________________| |__)" << endl;
        cout << R"(                             (__   ____________________________________________   __))" << endl;
        cout << R"(                                | | Sam Riker, a former detective, finds himse | |)" << endl;
        cout << R"(                                | | lf framed for a crime he didn't commit. Se | |)" << endl;
        cout << R"(                                | | ntenced to life in Alacran Maximum Securit | |)" << endl;
        cout << R"(                                | | y Prison, he knows the only way to clear h | |)" << endl;
        cout << R"(                                | | is name is to escape and uncover the consp | |)" << endl;
        cout << R"(                                | | )" << setw(42) << left << s6.substr(0, i + 1) << R"( | |)" << endl;
        cout << R"(                              __| |____________________________________________| |__)" << endl;
        cout << R"(                             (__   ____________________________________________   __))" << endl;
        cout << R"(                                | |                                            | |)" << endl;
        sleep(0.1);
    }

    cout << endl;

    cout << "                                            Press ENTER to continue" << endl;

    cin.ignore();
    cin.ignore();
}