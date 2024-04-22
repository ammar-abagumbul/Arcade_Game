#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <algorithm>
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

void displayActOne()
{

    using namespace std;

    // ASCII art generated from https://www.asciiart.eu/text-to-ascii-art

    for (int i = 0; i < 6; i++)
    {
        system("cls");
        cout << endl;
        cout << endl;
        cout << "                    _____         _____   _________________               _____  _____   ______        ______   " << endl;
        cout << R"(                ___|\    \    ___|\    \ /                 \         ____|\    \|\    \ |\     \   ___|\     \  )" << endl;
        cout << R"(               /    /\    \  /    /\    \\______     ______/        /     /\    \\\    \| \     \ |     \     \)" << endl;
        cout << R"(              |    |  |    ||    |  |    |  \( /    /  )/          /     /  \    \\|    \  \     ||     ,_____/|)" << endl;
        cout << R"(              |    |__|    ||    |  |____|   ' |   |   '          |     |    |    ||     \  |    ||     \--'\_|/)" << endl;
        cout << R"(              |    .--.    ||    |   ____      |   |              |     |    |    ||      \ |    ||     /___/|)" << endl;
        cout << R"(              |    |  |    ||    |  |    |    /   //              |\     \  /    /||    |\ \|    ||     \____|\)" << endl;
        cout << R"(              |____|  |____||\ ___\/    /|   /___//               | \_____\/____/ ||____||\_____/||____ '     /|)" << endl;
        cout << R"(              |    |  |    || |   /____/ |  |`   |                 \ |    ||    | /|    |/ \|   |||    /_____/ |)" << endl;
        cout << R"(              |____|  |____| \|___|    | /  |____|                  \|____||____|/ |____|   |___|/|____|     | /)" << endl;
        cout << R"(                \(      )/     \( |____|/     \(                       \(    )/      \(       )/    \( |_____|/ )" << endl;
        cout << R"(                 '      '       '   )/         '                        '    '        '       '      '    )/    )" << endl;
        cout << R"(                                    '                                                                     '     )" << endl;

        string text = "TheClueintheCell";
        string r;
        if (i != 5)
        {
            r = randomize_letters(text);
        }
        else
        {
            r = text;
        }
        cout << endl;
        cout << R"(                            _   _   _     _   _   _   _     _   _     _   _   _     _   _   _   _)" << endl;
        cout << R"(                           / \ / \ / \   / \ / \ / \ / \   / \ / \   / \ / \ / \   / \ / \ / \ / \)" << endl;
        cout << R"(                          ( )" << r[0] << " | " << r[1] << " | " << r[2] << " ) ( " << r[3] << " | " << r[4] << " | " << r[5] << " | " << r[6] << " ) ( " << r[7] << " | " << r[8] << " ) ( " << r[9] << " | " << r[10] << " | " << r[11] << " ) ( " << r[12] << " | " << r[13] << " | " << r[14] << " | " << r[15] << " )" << endl;
        cout << R"(                           \_/ \_/ \_/   \_/ \_/ \_/ \_/   \_/ \_/   \_/ \_/ \_/   \_/ \_/ \_/ \_/)" << endl;
        sleep(1.5);
    }
    sleep(1.5);
    cout << endl;
    cout << endl;
    cout << "                                                 Press any ENTER to continue" << endl;
    cin.ignore();
    cin.ignore();
}

std::string randomize_letters(const std::string input)
{
    // Made with Generative AI
    std::string output = input;
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(output.begin(), output.end(), g);
    return output;
}

void displayStoryOne(){
    using namespace std;

    string s1 = "In his cell's dimness, Sam takes comfort in Mr.";
    for (int i = 0; i < 47; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                           / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)" << std::endl;
        std::cout << R"(                           \ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \   )" << setw(47) << left << s1.substr(0, i + 1) << R"(  /\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\ \                                                  / /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /                                                  \ \/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/                                                    \ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \                                                    /\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\ \                                                   / /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /                                                   \ \/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/                                                    \ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ /)" << std::endl;
        std::cout << R"(                           \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)" << std::endl;
        std::cout << R"(                            `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--')" << std::endl;
        sleep(0.1);
    }

    string s2 = "Finch's  tales. The old man reminisces about hi";
    for (int i = 0; i < 47; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                           / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)" << std::endl;
        std::cout << R"(                           \ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \   In his cell's dimness, Sam takes comfort in Mr.  /\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\ \  )" << setw(47) << left << s2.substr(0, i + 1) << R"( / /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /                                                  \ \/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/                                                    \ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \                                                    /\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\ \                                                   / /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /                                                   \ \/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/                                                    \ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ /)" << std::endl;
        std::cout << R"(                           \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)" << std::endl;
        std::cout << R"(                            `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--')" << std::endl;
        sleep(0.1);
    }

    string s3 = "s lively home and inquisitive grandkids, partic";
    for (int i = 0; i < 47; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                           / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)" << std::endl;
        std::cout << R"(                           \ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \   In his cell's dimness, Sam takes comfort in Mr.  /\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\ \  Finch's  tales. The old man reminisces about hi / /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /  )" << setw(47) << left << s3.substr(0, i + 1) << R"( \ \/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/                                                    \ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \                                                    /\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\ \                                                   / /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /                                                   \ \/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/                                                    \ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ /)" << std::endl;
        std::cout << R"(                           \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)" << std::endl;
        std::cout << R"(                            `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--')" << std::endl;
        sleep(0.1);
    }

    string s4 = "ularly drawn to the gleaming fireplace tiles. T";
    for (int i = 0; i < 47; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                           / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)" << std::endl;
        std::cout << R"(                           \ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \)" << std::endl;
        std::cout << R"(                          \ \/\ \   In his cell's dimness, Sam takes comfort in Mr.  /\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\ \  Finch's  tales. The old man reminisces about hi / /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /  s lively home and inquisitive grandkids, partic \ \/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/   )" << setw(47) << left << s4.substr(0, i + 1) << R"(  \ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \                                                    /\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\ \                                                   / /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /                                                   \ \/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/                                                    \ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ /)" << std::endl;
        std::cout << R"(                           \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)" << std::endl;
        std::cout << R"(                            `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--')" << std::endl;
        sleep(0.1);
    }

    string s5 = "hese stories prompt Sam to inspect his cell, le";
    for (int i = 0; i < 47; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                           / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)" << std::endl;
        std::cout << R"(                           \ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \   In his cell's dimness, Sam takes comfort in Mr.  /\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\ \  Finch's  tales. The old man reminisces about hi / /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /  s lively home and inquisitive grandkids, partic \ \/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/   ularly drawn to the gleaming fireplace tiles. T  \ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \   )" << setw(47) << left << s5.substr(0, i + 1) << R"(  /\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\ \                                                   / /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /                                                   \ \/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/                                                    \ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ /)" << std::endl;
        std::cout << R"(                           \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)" << std::endl;
        std::cout << R"(                            `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--')" << std::endl;
        sleep(0.1);
    }

    string s6 = "ading to a surprising discovery - a loose tile.";
    for (int i = 0; i < 47; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                           / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)" << std::endl;
        std::cout << R"(                           \ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \   In his cell's dimness, Sam takes comfort in Mr.  /\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\ \  Finch's  tales. The old man reminisces about hi / /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /  s lively home and inquisitive grandkids, partic \ \/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/   ularly drawn to the gleaming fireplace tiles. T  \ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \   hese stories prompt Sam to inspect his cell, le  /\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\ \  )" << setw(47) << left << s6.substr(0, i + 1) << R"(  / /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /                                                   \ \/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/                                                    \ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ /)" << std::endl;
        std::cout << R"(                           \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)" << std::endl;
        std::cout << R"(                            `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--')" << std::endl;
        sleep(0.1);
    }

    string s7 = "Further investigations leads to finding that it";
    for (int i = 0; i < 47; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                           / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)" << std::endl;
        std::cout << R"(                           \ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \   In his cell's dimness, Sam takes comfort in Mr.  /\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\ \  Finch's  tales. The old man reminisces about hi / /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /  s lively home and inquisitive grandkids, partic \ \/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/   ularly drawn to the gleaming fireplace tiles. T  \ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \   hese stories prompt Sam to inspect his cell, le  /\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\ \  ading to a surprising discovery - a loose tile.  / /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /  )" << setw(47) << left << s7.substr(0, i + 1) << R"(  \ \/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/                                                    \ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ /)" << std::endl;
        std::cout << R"(                           \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)" << std::endl;
        std::cout << R"(                            `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--')" << std::endl;
        sleep(0.1);
    }

    string s8 = "conceals a sliding puzzle......";
    for (int i = 0; i < 47; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                           / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)" << std::endl;
        std::cout << R"(                           \ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \   In his cell's dimness, Sam takes comfort in Mr.  /\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\ \  Finch's  tales. The old man reminisces about hi / /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /  s lively home and inquisitive grandkids, partic \ \/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/   ularly drawn to the gleaming fireplace tiles. T  \ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \   hese stories prompt Sam to inspect his cell, le  /\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\ \  ading to a surprising discovery - a loose tile.  / /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /  Further investigations leads to finding that it  \ \/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/   )" << setw(47) << left << s8.substr(0, i + 1) << R"(  \ \/\ \)" << std::endl;
        std::cout << R"(                           \ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ /)" << std::endl;
        std::cout << R"(                            \/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /)" << std::endl;
        std::cout << R"(                            / /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\)" << std::endl;
        std::cout << R"(                           / /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ /)" << std::endl;
        std::cout << R"(                           \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)" << std::endl;
        std::cout << R"(                            `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--')" << std::endl;
        sleep(0.1);
    }
    cout << endl;

    cout << "                                               Press ENTER to continue" << endl;

    cin.ignore();
    cin.ignore();
}

void displayIntroOne()
{
    using namespace std;
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
        "                                           .+=-+***********####**+=+--******     ",
        "                                           .+-=.+***********####+=+++********    ",
        "                                           .===.:***===-.+**##%+-=*+**=-:=-=*=   ",
        "                                            :+=-..-+-:=++-.+**#+=*+**=:+++++-.   ",
        "                                            .+-:-=+..:+++-=.+--*#%#**::++++=     ",
        "                                             .---     .---===-=+@#****   .       ",
        "                                                        -+=+=-+*@******       =+     ",
        "                                                  -*+: :-+*+=+**@@*+*****=..+***+   ",
        "                                               .:= .========++*******************-  ",
        "                                              .-=-..-=-====+++*******************+ ",
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
    for (int i=0; i<32; i++){
        system("cls");
        for (int j=0; j<=i; j++){
            cout<<keyArr[j]<<endl;
        }
        sleep(0.1);
    }
    sleep(5);
}

void displayOutroOne(){
    using namespace std;
    std::string s1 = "The sliding puzzle revealed a hidden";
    for (int i = 0; i < 36; i++)
    {
        system("cls");
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << R"(                               ___________________________________________)" << '\n';
        std::cout << R"(                              /\                                          \)" << '\n';
        std::cout << R"(                           (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                              \/''''''''''''''''''''''''''''''''''''''''''/)" << '\n';
        std::cout << R"(                              (   )" << setw(36) << left << s1.substr(0, i + 1) << R"(  ()" << '\n';
        std::cout << R"(                               )                                         ))" << '\n';
        std::cout << R"(                              (                                         ()" << '\n';
        std::cout << R"(                                                                      )" << '\n';
        std::cout << R"(                               )                                        ))" << '\n';
        std::cout << R"(                              (                                         ()" << '\n';
        std::cout << R"(                               )                                         ))" << '\n';
        std::cout << R"(                              /\''''''''''''''''''''''''''''''''''''''''''\)" << '\n';
        std::cout << R"(                           (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                              \/___________________________________________/)" << '\n';
        sleep(0.1);
    }

    std::string s2 = "cache of letters. These letters, add";
    for (int i = 0; i < 36; i++)
    {
        system("cls");
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << R"(                               ___________________________________________)" << '\n';
        std::cout << R"(                              /\                                          \)" << '\n';
        std::cout << R"(                           (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                              \/''''''''''''''''''''''''''''''''''''''''''/)" << '\n';
        std::cout << R"(                              (   The sliding puzzle revealed a hidden  ()" << '\n';
        std::cout << R"(                               )  )" << setw(36) << left << s2.substr(0, i + 1) << R"(   ))" << '\n';
        std::cout << R"(                              (                                         ()" << '\n';
        std::cout << R"(                                                                      )" << '\n';
        std::cout << R"(                               )                                        ))" << '\n';
        std::cout << R"(                              (                                         ()" << '\n';
        std::cout << R"(                               )                                         ))" << '\n';
        std::cout << R"(                              /\''''''''''''''''''''''''''''''''''''''''''\)" << '\n';
        std::cout << R"(                           (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                              \/___________________________________________/)" << '\n';
        sleep(0.1);
    }

    std::string s3 = "ressed to the cryptic \"The Moth,\" hi";
    for (int i = 0; i < 36; i++)
    {
        system("cls");
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << R"(                               ___________________________________________)" << '\n';
        std::cout << R"(                              /\                                          \)" << '\n';
        std::cout << R"(                           (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                              \/''''''''''''''''''''''''''''''''''''''''''/)" << '\n';
        std::cout << R"(                              (   The sliding puzzle revealed a hidden  ()" << '\n';
        std::cout << R"(                               )  cache of letters. These letters, add   ))" << '\n';
        std::cout << R"(                              (   )" << setw(36) << left << s3.substr(0, i + 1) << R"(  ()" << '\n';
        std::cout << R"(                                                                      )" << '\n';
        std::cout << R"(                               )                                        ))" << '\n';
        std::cout << R"(                              (                                         ()" << '\n';
        std::cout << R"(                               )                                         ))" << '\n';
        std::cout << R"(                              /\''''''''''''''''''''''''''''''''''''''''''\)" << '\n';
        std::cout << R"(                           (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                              \/___________________________________________/)" << '\n';
        sleep(0.1);
    }

    std::string s4 = "nt at an escape plan that remained u";
    for (int i = 0; i < 36; i++)
    {
        system("cls");
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << R"(                               ___________________________________________)" << '\n';
        std::cout << R"(                              /\                                          \)" << '\n';
        std::cout << R"(                           (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                              \/''''''''''''''''''''''''''''''''''''''''''/)" << '\n';
        std::cout << R"(                              (   The sliding puzzle revealed a hidden  ()" << '\n';
        std::cout << R"(                               )  cache of letters. These letters, add   ))" << '\n';
        std::cout << R"(                              (   ressed to the cryptic “The Moth,” hi  ()" << '\n';
        std::cout << R"(                                  )" << setw(36) << left << s4.substr(0, i + 1) << R"()" << '\n';
        std::cout << R"(                               )                                        ))" << '\n';
        std::cout << R"(                              (                                         ()" << '\n';
        std::cout << R"(                               )                                         ))" << '\n';
        std::cout << R"(                              /\''''''''''''''''''''''''''''''''''''''''''\)" << '\n';
        std::cout << R"(                           (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                              \/___________________________________________/)" << '\n';
        sleep(0.1);
    }

    std::string s5 = "nfulfilled. Sam realizes that he's n";
    for (int i = 0; i < 36; i++)
    {
        system("cls");
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << R"(                               ___________________________________________)" << '\n';
        std::cout << R"(                              /\                                          \)" << '\n';
        std::cout << R"(                           (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                              \/''''''''''''''''''''''''''''''''''''''''''/)" << '\n';
        std::cout << R"(                              (   The sliding puzzle revealed a hidden  ()" << '\n';
        std::cout << R"(                               )  cache of letters. These letters, add   ))" << '\n';
        std::cout << R"(                              (   ressed to the cryptic “The Moth,” hi  ()" << '\n';
        std::cout << R"(                                  nt at an escape plan that remained u)" << '\n';
        std::cout << R"(                               )  )" << setw(36) << left << s5.substr(0, i + 1) << R"(  ))" << '\n';
        std::cout << R"(                              (                                         ()" << '\n';
        std::cout << R"(                               )                                         ))" << '\n';
        std::cout << R"(                              /\''''''''''''''''''''''''''''''''''''''''''\)" << '\n';
        std::cout << R"(                           (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                              \/___________________________________________/)" << '\n';
        sleep(0.1);
    }

    std::string s6 = "ot the first innocent person to be t";
    for (int i = 0; i < 36; i++)
    {
        system("cls");
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << R"(                               ___________________________________________)" << '\n';
        std::cout << R"(                              /\                                          \)" << '\n';
        std::cout << R"(                           (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                              \/''''''''''''''''''''''''''''''''''''''''''/)" << '\n';
        std::cout << R"(                              (   The sliding puzzle revealed a hidden  ()" << '\n';
        std::cout << R"(                               )  cache of letters. These letters, add   ))" << '\n';
        std::cout << R"(                              (   ressed to the cryptic “The Moth,” hi  ()" << '\n';
        std::cout << R"(                                  nt at an escape plan that remained u)" << '\n';
        std::cout << R"(                               )  nfulfilled. Sam realizes that he's n  ))" << '\n';
        std::cout << R"(                              (   )" << setw(36) << left << s6.substr(0, i + 1) << R"(  ()" << '\n';
        std::cout << R"(                               )                                         ))" << '\n';
        std::cout << R"(                              /\''''''''''''''''''''''''''''''''''''''''''\)" << '\n';
        std::cout << R"(                           (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                              \/___________________________________________/)" << '\n';
        sleep(0.1);
    }

    std::string s7 = "rapped....                          ";
    for (int i = 0; i < 36; i++)
    {
        system("cls");
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << R"(                               ___________________________________________)" << '\n';
        std::cout << R"(                              /\                                          \)" << '\n';
        std::cout << R"(                           (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                              \/''''''''''''''''''''''''''''''''''''''''''/)" << '\n';
        std::cout << R"(                              (   The sliding puzzle revealed a hidden  ()" << '\n';
        std::cout << R"(                               )  cache of letters. These letters, add   ))" << '\n';
        std::cout << R"(                              (   ressed to the cryptic “The Moth,” hi  ()" << '\n';
        std::cout << R"(                                  nt at an escape plan that remained u)" << '\n';
        std::cout << R"(                               )  nfulfilled. Sam realizes that he's n  ))" << '\n';
        std::cout << R"(                              (   ot the first innocent person to be t  ()" << '\n';
        std::cout << R"(                               )  )" << setw(36) << left << s7.substr(0, i + 1) << R"(   ))" << '\n';
        std::cout << R"(                              /\''''''''''''''''''''''''''''''''''''''''''\)" << '\n';
        std::cout << R"(                           (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                              \/___________________________________________/)" << '\n';
        sleep(0.1);
    }


    cout << endl;

    cout << "                                    Press ENTER to continue" << endl;

    cin.ignore();
    cin.ignore();
}