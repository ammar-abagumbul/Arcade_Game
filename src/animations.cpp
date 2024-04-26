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

void displayStoryOne()
{
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
    for (int i = 0; i < 32; i++)
    {
        system("cls");
        for (int j = 0; j <= i; j++)
        {
            cout << keyArr[j] << endl;
        }
        sleep(0.1);
    }
    sleep(3);
}

void displayOutroOne()
{
    using namespace std;
    std::string s1 = "The sliding puzzle revealed a hidden";
    for (int i = 0; i < 36; i++)
    {
        system("cls");
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << "                                                                              " << endl;
        std::cout << R"(                                             ___________________________________________)" << '\n';
        std::cout << R"(                                            /\                                          \)" << '\n';
        std::cout << R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                                            \/''''''''''''''''''''''''''''''''''''''''''/)" << '\n';
        std::cout << R"(                                            (   )" << setw(36) << left << s1.substr(0, i + 1) << R"(  ()" << '\n';
        std::cout << R"(                                             )                                         ))" << '\n';
        std::cout << R"(                                            (                                         ()" << '\n';
        std::cout << R"(                                                                                    )" << '\n';
        std::cout << R"(                                             )                                        ))" << '\n';
        std::cout << R"(                                            (                                         ()" << '\n';
        std::cout << R"(                                             )                                         ))" << '\n';
        std::cout << R"(                                            /\''''''''''''''''''''''''''''''''''''''''''\)" << '\n';
        std::cout << R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                                            \/___________________________________________/)" << '\n';
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
        std::cout << R"(                                             ___________________________________________)" << '\n';
        std::cout << R"(                                            /\                                          \)" << '\n';
        std::cout << R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                                            \/''''''''''''''''''''''''''''''''''''''''''/)" << '\n';
        std::cout << R"(                                            (   The sliding puzzle revealed a hidden  ()" << '\n';
        std::cout << R"(                                             )  )" << setw(36) << left << s2.substr(0, i + 1) << R"(   ))" << '\n';
        std::cout << R"(                                            (                                         ()" << '\n';
        std::cout << R"(                                                                                    )" << '\n';
        std::cout << R"(                                             )                                        ))" << '\n';
        std::cout << R"(                                            (                                         ()" << '\n';
        std::cout << R"(                                             )                                         ))" << '\n';
        std::cout << R"(                                            /\''''''''''''''''''''''''''''''''''''''''''\)" << '\n';
        std::cout << R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                                            \/___________________________________________/)" << '\n';
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
        std::cout << R"(                                             ___________________________________________)" << '\n';
        std::cout << R"(                                            /\                                          \)" << '\n';
        std::cout << R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                                            \/''''''''''''''''''''''''''''''''''''''''''/)" << '\n';
        std::cout << R"(                                            (   The sliding puzzle revealed a hidden  ()" << '\n';
        std::cout << R"(                                             )  cache of letters. These letters, add   ))" << '\n';
        std::cout << R"(                                            (   )" << setw(36) << left << s3.substr(0, i + 1) << R"(  ()" << '\n';
        std::cout << R"(                                                                      )" << '\n';
        std::cout << R"(                                             )                                        ))" << '\n';
        std::cout << R"(                                            (                                         ()" << '\n';
        std::cout << R"(                                             )                                         ))" << '\n';
        std::cout << R"(                                            /\''''''''''''''''''''''''''''''''''''''''''\)" << '\n';
        std::cout << R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                                            \/___________________________________________/)" << '\n';
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
        std::cout << R"(                                             ___________________________________________)" << '\n';
        std::cout << R"(                                            /\                                          \)" << '\n';
        std::cout << R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                                            \/''''''''''''''''''''''''''''''''''''''''''/)" << '\n';
        std::cout << R"(                                            (   The sliding puzzle revealed a hidden  ()" << '\n';
        std::cout << R"(                                             )  cache of letters. These letters, add   ))" << '\n';
        std::cout << R"(                                            (   ressed to the cryptic "The Moth," hi  ()" << '\n';
        std::cout << R"(                                                )" << setw(36) << left << s4.substr(0, i + 1) << R"()" << '\n';
        std::cout << R"(                                             )                                        ))" << '\n';
        std::cout << R"(                                            (                                         ()" << '\n';
        std::cout << R"(                                             )                                         ))" << '\n';
        std::cout << R"(                                            /\''''''''''''''''''''''''''''''''''''''''''\)" << '\n';
        std::cout << R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                                            \/___________________________________________/)" << '\n';
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
        std::cout << R"(                                             ___________________________________________)" << '\n';
        std::cout << R"(                                            /\                                          \)" << '\n';
        std::cout << R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                                            \/''''''''''''''''''''''''''''''''''''''''''/)" << '\n';
        std::cout << R"(                                            (   The sliding puzzle revealed a hidden  ()" << '\n';
        std::cout << R"(                                             )  cache of letters. These letters, add   ))" << '\n';
        std::cout << R"(                                            (   ressed to the cryptic "The Moth," hi  ()" << '\n';
        std::cout << R"(                                                nt at an escape plan that remained u)" << '\n';
        std::cout << R"(                                             )  )" << setw(36) << left << s5.substr(0, i + 1) << R"(  ))" << '\n';
        std::cout << R"(                                            (                                         ()" << '\n';
        std::cout << R"(                                             )                                         ))" << '\n';
        std::cout << R"(                                            /\''''''''''''''''''''''''''''''''''''''''''\)" << '\n';
        std::cout << R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                                            \/___________________________________________/)" << '\n';
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
        std::cout << R"(                                             ___________________________________________)" << '\n';
        std::cout << R"(                                            /\                                          \)" << '\n';
        std::cout << R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                                            \/''''''''''''''''''''''''''''''''''''''''''/)" << '\n';
        std::cout << R"(                                            (   The sliding puzzle revealed a hidden  ()" << '\n';
        std::cout << R"(                                             )  cache of letters. These letters, add   ))" << '\n';
        std::cout << R"(                                            (   ressed to the cryptic "The Moth," hi  ()" << '\n';
        std::cout << R"(                                                nt at an escape plan that remained u)" << '\n';
        std::cout << R"(                                             )  nfulfilled. Sam realizes that he's n  ))" << '\n';
        std::cout << R"(                                            (   )" << setw(36) << left << s6.substr(0, i + 1) << R"(  ()" << '\n';
        std::cout << R"(                                             )                                         ))" << '\n';
        std::cout << R"(                                            /\''''''''''''''''''''''''''''''''''''''''''\)" << '\n';
        std::cout << R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                                            \/___________________________________________/)" << '\n';
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
        std::cout << R"(                                             ___________________________________________)" << '\n';
        std::cout << R"(                                            /\                                          \)" << '\n';
        std::cout << R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                                            \/''''''''''''''''''''''''''''''''''''''''''/)" << '\n';
        std::cout << R"(                                            (   The sliding puzzle revealed a hidden  ()" << '\n';
        std::cout << R"(                                             )  cache of letters. These letters, add   ))" << '\n';
        std::cout << R"(                                            (   ressed to the cryptic "The Moth," hi  ()" << '\n';
        std::cout << R"(                                                nt at an escape plan that remained u)" << '\n';
        std::cout << R"(                                             )  nfulfilled. Sam realizes that he's n  ))" << '\n';
        std::cout << R"(                                            (   ot the first innocent person to be t  ()" << '\n';
        std::cout << R"(                                             )  )" << setw(36) << left << s7.substr(0, i + 1) << R"(   ))" << '\n';
        std::cout << R"(                                            /\''''''''''''''''''''''''''''''''''''''''''\)" << '\n';
        std::cout << R"(                                         (O)===)><><><><><><><><><><><><><><><><><><><><><>)==(O))" << '\n';
        std::cout << R"(                                            \/___________________________________________/)" << '\n';
        sleep(0.1);
    }

    cout << endl;

    cout << "                                                              Press ENTER to continue" << endl;

    cin.ignore();
}

void displayActTwo()
{

    using namespace std;

    // ASCII art generated from https://www.asciiart.eu/text-to-ascii-art

    for (int i = 0; i < 3; i++)
    {
        system("cls");
        std::cout << R"(                     ___           ___           ___                    ___           ___           ___     )" << endl;
        std::cout << R"(                    /\  \         /\  \         /\  \                  /\  \         /\__\         /\  \    )" << endl;
        std::cout << R"(                   /::\  \       /::\  \        \:\  \                 \:\  \       /:/ _/_       /::\  \   )" << endl;
        std::cout << R"(                  /:/\:\  \     /:/\:\  \        \:\  \                 \:\  \     /:/ /\__\     /:/\:\  \  )" << endl;
        std::cout << R"(                 /::\~\:\  \   /:/  \:\  \       /::\  \                /::\  \   /:/ /:/ _/_   /:/  \:\  \ )" << endl;
        std::cout << R"(                /:/\:\ \:\__\ /:/__/ \:\__\     /:/\:\__\              /:/\:\__\ /:/_/:/ /\__\ /:/__/ \:\__\)" << endl;
        std::cout << R"(                \/__\:\/:/  / \:\  \  \/__/    /:/  \/__/             /:/  \/__/ \:\/:/ /:/  / \:\  \ /:/  /)" << endl;
        std::cout << R"(                     \::/  /   \:\  \         /:/  /                 /:/  /       \::/_/:/  /   \:\  /:/  / )" << endl;
        std::cout << R"(                     /:/  /     \:\  \        \/__/                  \/__/         \:\/:/  /     \:\/:/  /  )" << endl;
        std::cout << R"(                    /:/  /       \:\__\                                             \::/  /       \::/  /   )" << endl;
        std::cout << R"(                    \/__/         \/__/                                              \/__/         \/__/    )" << endl;
        sleep(1.5);
        cout << endl;
        std::cout << R"(                     *   )   )          (                                (                          (  )" << endl;
        std::cout << R"(                   ` )  /(( /(   (      )\   (      )       (   (        )\   (        (          ) )\ )" << endl;
        std::cout << R"(                    ( )(_))\()) ))\  ((((_)( )(    (     (  )(  )\ )  ((((_)( )(  (   ))\ (    ( /(((_))" << endl;
        std::cout << R"(                   (_(_()|(_)\ /((_)  )\ _ )(()\   )\  ' )\(()\(()/(   )\ _ )(()\ )\ /((_))\ ) )(_))_  )" << endl;
        std::cout << R"(                   |_   _| |(_|_))    (_)_\(_|(_)_((_)) ((_)((_))(_))  (_)_\(_|(_|(_|_)) _(_/(((_)_| | )" << endl;
        std::cout << R"(                     | | | ' \/ -_)    / _ \| '_| '  \() _ \ '_| || |   / _ \| '_(_-< -_) ' \)) _` | | )" << endl;
        std::cout << R"(                     |_| |_||_\___|   /_/ \_\_| |_|_|_|\___/_|  \_, |  /_/ \_\_| /__|___|_||_|\__,_|_| )" << endl;
        std::cout << R"(                                                                |__/)" << endl;
        sleep(1.5);
    }
    cout << endl;
    cout << endl;
    cout << "                                                 Press any ENTER to continue" << endl;
    cin.ignore();
}

void displayStoryTwo()
{
    using namespace std;

    string s1 = "Sam discovers an the guard's armory. The";
    for (int i = 0; i < 40; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << "                                             __| |____________________________________________| |__" << std::endl;
        std::cout << "                                            (__   ____________________________________________   __)" << std::endl;
        std::cout << "                                               | |                                            | |" << std::endl;
        std::cout << "                                               | |  " << setw(40) << left << s1.substr(0, i + 1) << "  | |" << std::endl;
        std::cout << "                                               | |                                            | |" << std::endl;
        std::cout << "                                               | |                                            | |" << std::endl;
        std::cout << "                                               | |                                            | |" << std::endl;
        std::cout << "                                             __| |____________________________________________| |__" << std::endl;
        std::cout << "                                            (__   ____________________________________________   __)" << std::endl;
        std::cout << "                                               | |                                            | |" << std::endl;
        sleep(0.1);
    }

    string s2 = "armory, usually a mundane storage room f";
    for (int i = 0; i < 40; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << "                                             __| |____________________________________________| |__" << std::endl;
        std::cout << "                                            (__   ____________________________________________   __)" << std::endl;
        std::cout << "                                               | |                                            | |" << std::endl;
        std::cout << "                                               | |  Sam discovers an the guard's armory. The  | |" << std::endl;
        std::cout << "                                               | |  " << setw(40) << left << s2.substr(0, i + 1) << "  | |" << std::endl;
        std::cout << "                                               | |                                            | |" << std::endl;
        std::cout << "                                               | |                                            | |" << std::endl;
        std::cout << "                                             __| |____________________________________________| |__" << std::endl;
        std::cout << "                                            (__   ____________________________________________   __)" << std::endl;
        std::cout << "                                               | |                                            | |" << std::endl;
        sleep(0.1);
    }

    string s3 = "or weapons, turns out to be a facade for";
    for (int i = 0; i < 40; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << "                                             __| |____________________________________________| |__" << std::endl;
        std::cout << "                                            (__   ____________________________________________   __)" << std::endl;
        std::cout << "                                               | |                                            | |" << std::endl;
        std::cout << "                                               | |  Sam discovers an the guard's armory. The  | |" << std::endl;
        std::cout << "                                               | |  armory, usually a mundane storage room f  | |" << std::endl;
        std::cout << "                                               | |  " << setw(40) << left << s3.substr(0, i + 1) << "  | |" << std::endl;
        std::cout << "                                               | |                                            | |" << std::endl;
        std::cout << "                                             __| |____________________________________________| |__" << std::endl;
        std::cout << "                                            (__   ____________________________________________   __)" << std::endl;
        std::cout << "                                               | |                                            | |" << std::endl;
        sleep(0.1);
    }

    string s4 = "         a secret research lab...       ";
    for (int i = 0; i < 40; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << "                                             __| |____________________________________________| |__" << std::endl;
        std::cout << "                                            (__   ____________________________________________   __)" << std::endl;
        std::cout << "                                               | |                                            | |" << std::endl;
        std::cout << "                                               | |  Sam discovers an the guard's armory. The  | |" << std::endl;
        std::cout << "                                               | |  armory, usually a mundane storage room f  | |" << std::endl;
        std::cout << "                                               | |  or weapons, turns out to be a facade for  | |" << std::endl;
        std::cout << "                                               | |  " << setw(40) << left << s4.substr(0, i + 1) << "  | |" << std::endl;
        std::cout << "                                             __| |____________________________________________| |__" << std::endl;
        std::cout << "                                            (__   ____________________________________________   __)" << std::endl;
        std::cout << "                                               | |                                            | |" << std::endl;
        sleep(0.1);
    }
    cout << endl;

    cout << "                                                            Press ENTER to continue" << endl;

    cin.ignore();
}

void displayIntroTwo()
{
    using namespace std;
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
    for (int i = 0; i < 30; i++)
    {
        system("cls");
        for (int j = 0; j <= i; j++)
        {
            cout << keyArr[j] << endl;
        }
        sleep(0.1);
    }
    sleep(3);
}

void displayOutroTwo()
{

    using namespace std;

    string s1 = "Solving the puzzle, Sam discovers the b";
    for (int i = 0; i < 39; i++)
    {
        system("cls");
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        std::cout << R"(                                          //\\  //\\  //\\  //\\  //\\  //\\  //\\  //\\)" << std::endl;
        std::cout << R"(                                         //  \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\)" << std::endl;
        std::cout << R"(                                        //\\                                          //\\)" << std::endl;
        std::cout << R"(                                        \\//  )" << setw(39) << left << s1.substr(0, i + 1) << R"( \\//)" << std::endl;
        std::cout << R"(                                         //                                            \\)" << std::endl;
        std::cout << R"(                                        //\\                                          //\\)" << std::endl;
        std::cout << R"(                                        \\//                                          \\//)" << std::endl;
        std::cout << R"(                                         \\                                            //)" << std::endl;
        std::cout << R"(                                        //\\                                          //\\)" << std::endl;
        std::cout << R"(                                        \\//                                          \\//)" << std::endl;
        std::cout << R"(                                         \\  //\\  //\\  //\\  //\\  //\\  //\\  //\\  //)" << std::endl;
        std::cout << R"(                                          \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\//)" << std::endl;
        sleep(0.1);
    }

    string s2 = "lueprint, which reveals that Alacran Ma";
    for (int i = 0; i < 39; i++)
    {
        system("cls");
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        std::cout << R"(                                          //\\  //\\  //\\  //\\  //\\  //\\  //\\  //\\)" << std::endl;
        std::cout << R"(                                         //  \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\)" << std::endl;
        std::cout << R"(                                        //\\                                          //\\)" << std::endl;
        std::cout << R"(                                        \\//  Solving the puzzle, Sam discovers the b \\//)" << std::endl;
        std::cout << R"(                                         //   )" << setw(39) << left << s2.substr(0, i + 1) << R"(  \\)" << std::endl;
        std::cout << R"(                                        //\\                                          //\\)" << std::endl;
        std::cout << R"(                                        \\//                                          \\//)" << std::endl;
        std::cout << R"(                                         \\                                            //)" << std::endl;
        std::cout << R"(                                        //\\                                          //\\)" << std::endl;
        std::cout << R"(                                        \\//                                          \\//)" << std::endl;
        std::cout << R"(                                         \\  //\\  //\\  //\\  //\\  //\\  //\\  //\\  //)" << std::endl;
        std::cout << R"(                                          \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\//)" << std::endl;
        sleep(0.1);
    }

    string s3 = "ximum Security Prison is part of a larg";
    for (int i = 0; i < 39; i++)
    {
        system("cls");
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        std::cout << R"(                                          //\\  //\\  //\\  //\\  //\\  //\\  //\\  //\\)" << std::endl;
        std::cout << R"(                                         //  \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\)" << std::endl;
        std::cout << R"(                                        //\\                                          //\\)" << std::endl;
        std::cout << R"(                                        \\//  Solving the puzzle, Sam discovers the b \\//)" << std::endl;
        std::cout << R"(                                         //   lueprint, which reveals that Alacran Ma  \\)" << std::endl;
        std::cout << R"(                                        //\\  )" << setw(39) << left << s3.substr(0, i + 1) << R"( //\\)" << std::endl;
        std::cout << R"(                                        \\//                                          \\//)" << std::endl;
        std::cout << R"(                                         \\                                            //)" << std::endl;
        std::cout << R"(                                        //\\                                          //\\)" << std::endl;
        std::cout << R"(                                        \\//                                          \\//)" << std::endl;
        std::cout << R"(                                         \\  //\\  //\\  //\\  //\\  //\\  //\\  //\\  //)" << std::endl;
        std::cout << R"(                                          \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\//)" << std::endl;
        sleep(0.1);
    }

    string s4 = "er, sinister design. The prison's layou";
    for (int i = 0; i < 39; i++)
    {
        system("cls");
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        std::cout << R"(                                          //\\  //\\  //\\  //\\  //\\  //\\  //\\  //\\)" << std::endl;
        std::cout << R"(                                         //  \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\)" << std::endl;
        std::cout << R"(                                        //\\                                          //\\)" << std::endl;
        std::cout << R"(                                        \\//  Solving the puzzle, Sam discovers the b \\//)" << std::endl;
        std::cout << R"(                                         //   lueprint, which reveals that Alacran Ma  \\)" << std::endl;
        std::cout << R"(                                        //\\  ximum Security Prison is part of a larg //\\)" << std::endl;
        std::cout << R"(                                        \\//  )" << setw(39) << left << s4.substr(0, i + 1) << R"( \\//)" << std::endl;
        std::cout << R"(                                         \\                                            //)" << std::endl;
        std::cout << R"(                                        //\\                                          //\\)" << std::endl;
        std::cout << R"(                                        \\//                                          \\//)" << std::endl;
        std::cout << R"(                                         \\  //\\  //\\  //\\  //\\  //\\  //\\  //\\  //)" << std::endl;
        std::cout << R"(                                          \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\//)" << std::endl;
        sleep(0.1);
    }

    string s5 = "t isn't random-it's purposefully design";
    for (int i = 0; i < 39; i++)
    {
        system("cls");
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        std::cout << R"(                                          //\\  //\\  //\\  //\\  //\\  //\\  //\\  //\\)" << std::endl;
        std::cout << R"(                                         //  \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\)" << std::endl;
        std::cout << R"(                                        //\\                                          //\\)" << std::endl;
        std::cout << R"(                                        \\//  Solving the puzzle, Sam discovers the b \\//)" << std::endl;
        std::cout << R"(                                         //   lueprint, which reveals that Alacran Ma  \\)" << std::endl;
        std::cout << R"(                                        //\\  ximum Security Prison is part of a larg //\\)" << std::endl;
        std::cout << R"(                                        \\//  er, sinister design. The prison's layou \\//)" << std::endl;
        std::cout << R"(                                         \\   )" << setw(39) << left << s5.substr(0, i + 1) << R"(  //)" << std::endl;
        std::cout << R"(                                        //\\                                          //\\)" << std::endl;
        std::cout << R"(                                        \\//                                          \\//)" << std::endl;
        std::cout << R"(                                         \\  //\\  //\\  //\\  //\\  //\\  //\\  //\\  //)" << std::endl;
        std::cout << R"(                                          \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\//)" << std::endl;
        sleep(0.1);
    }

    string s6 = "ed to keep certain areas inaccessible. ";
    for (int i = 0; i < 39; i++)
    {
        system("cls");
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        std::cout << R"(                                          //\\  //\\  //\\  //\\  //\\  //\\  //\\  //\\)" << std::endl;
        std::cout << R"(                                         //  \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\)" << std::endl;
        std::cout << R"(                                        //\\                                          //\\)" << std::endl;
        std::cout << R"(                                        \\//  Solving the puzzle, Sam discovers the b \\//)" << std::endl;
        std::cout << R"(                                         //   lueprint, which reveals that Alacran Ma  \\)" << std::endl;
        std::cout << R"(                                        //\\  ximum Security Prison is part of a larg //\\)" << std::endl;
        std::cout << R"(                                        \\//  er, sinister design. The prison's layou \\//)" << std::endl;
        std::cout << R"(                                         \\   t isn't random-it's purposefully design  //)" << std::endl;
        std::cout << R"(                                        //\\  )" << setw(39) << left << s6.substr(0, i + 1) << R"( //\\)" << std::endl;
        std::cout << R"(                                        \\//                                          \\//)" << std::endl;
        std::cout << R"(                                         \\  //\\  //\\  //\\  //\\  //\\  //\\  //\\  //)" << std::endl;
        std::cout << R"(                                          \\//  \\//  \\//  \\//  \\//  \\//  \\//  \\//)" << std::endl;
        sleep(0.1);
    }

    cout << endl;

    cout << "                                                        Press ENTER to continue" << endl;

    cin.ignore();
}

void displayActThree()
{

    using namespace std;

    // ASCII art generated from https://www.asciiart.eu/text-to-ascii-art

    for (int i = 0; i < 3; i++)
    {
        system("cls");
        std::cout << R"(                      __       ______  ___________      ___________  __    __    _______    _______   _______  )" << std::endl;
        std::cout << R"(                     /""\     /" _  "\("     _   ")    ("     _   ")/" |  | "\  /"      \  /"     "| /"     "| )" << std::endl;
        std::cout << R"(                    /    \   (: ( \___))__/  \\__/      )__/  \\__/(:  (__)  :)|:        |(: ______)(: ______) )" << std::endl;
        std::cout << R"(                   /' /\  \   \/ \        \\_ /            \\_ /    \/      \/ |_____/   ) \/    |   \/    |   )" << std::endl;
        std::cout << R"(                  //  __'  \  //  \ _     |.  |            |.  |    //  __  \\  //      /  // ___)_  // ___)_  )" << std::endl;
        std::cout << R"(                 /   /  \\  \(:   _) \    \:  |            \:  |   (:  (  )  :)|:  __   \ (:      "|(:      "| )" << std::endl;
        std::cout << R"(                (___/    \___)\_______)    \__|             \__|    \__|  |__/ |__|  \___) \_______) \_______))" << std::endl;
        sleep(1.5);
        cout << endl;
        cout << endl;
        std::cout << R"(                    ________            ______                     __        ______                __    __   )" << std::endl;
        std::cout << R"(                   /_  __/ /_  ___     / ____/_  ______ __________/ /____   / ____/___ _____ ___  / /_  / /__ )" << std::endl;
        std::cout << R"(                    / / / __ \/ _ \   / / __/ / / / __ `/ ___/ __  / ___/  / / __/ __ `/ __ `__ \/ __ \/ / _ \)" << std::endl;
        std::cout << R"(                   / / / / / /  __/  / /_/ / /_/ / /_/ / /  / /_/ (__  )  / /_/ / /_/ / / / / / / /_/ / /  __/)" << std::endl;
        std::cout << R"(                  /_/ /_/ /_/\___/   \____/\__,_/\__,_/_/   \__,_/____/   \____/\__,_/_/ /_/ /_/_.___/_/\___/)" << std::endl;
        sleep(1.5);
    }
    cout << endl;
    cout << endl;
    cout << "                                              Press any ENTER to continue" << endl;
    cin.ignore();
}

void displayIntroThree()
{
    using namespace std;
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
    for (int i = 0; i < 31; i++)
    {
        system("cls");
        for (int j = 0; j <= i; j++)
        {
            cout << keyArr[j] << endl;
        }
        sleep(0.1);
    }
    sleep(3);
}

void displayStoryThree()
{
    using namespace std;

    string s1 = "Sam overhears guards talking about a mine";
    for (int i = 0; i < 41; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << "                            __| |____________________________________________| |__" << std::endl;
        std::cout << "                           (__   ____________________________________________   __)" << std::endl;
        std::cout << "                              | |                                            | |" << std::endl;
        std::cout << "                              | |  " << setw(41) << left << s1.substr(0, i + 1) << " | |" << std::endl;
        std::cout << "                              | |                                            | |" << std::endl;
        std::cout << "                              | |                                            | |" << std::endl;
        std::cout << "                            __| |____________________________________________| |__" << std::endl;
        std::cout << "                           (__   ____________________________________________   __)" << std::endl;
        std::cout << "                              | |                                            | |" << std::endl;
        sleep(0.1);
    }

    string s2 = "sweeper game they play during their break";
    for (int i = 0; i < 41; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << "                            __| |____________________________________________| |__" << std::endl;
        std::cout << "                           (__   ____________________________________________   __)" << std::endl;
        std::cout << "                              | |                                            | |" << std::endl;
        std::cout << "                              | |  Sam overhears guards talking about a mine | |" << std::endl;
        std::cout << "                              | |  " << setw(41) << left << s2.substr(0, i + 1) << " | |" << std::endl;
        std::cout << "                              | |                                            | |" << std::endl;
        std::cout << "                            __| |____________________________________________| |__" << std::endl;
        std::cout << "                           (__   ____________________________________________   __)" << std::endl;
        std::cout << "                              | |                                            | |" << std::endl;
        sleep(0.1);
    }

    string s3 = "s. Curious, he investigates further....  ";
    for (int i = 0; i < 41; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << "                            __| |____________________________________________| |__" << std::endl;
        std::cout << "                           (__   ____________________________________________   __)" << std::endl;
        std::cout << "                              | |                                            | |" << std::endl;
        std::cout << "                              | |  Sam overhears guards talking about a mine | |" << std::endl;
        std::cout << "                              | |  sweeper game they play during their break | |" << std::endl;
        std::cout << "                              | |  " << setw(41) << left << s3.substr(0, i + 1) << " | |" << std::endl;
        std::cout << "                            __| |____________________________________________| |__" << std::endl;
        std::cout << "                           (__   ____________________________________________   __)" << std::endl;
        std::cout << "                              | |                                            | |" << std::endl;
        sleep(0.1);
    }

    cout << endl;

    cout << "                                           Press ENTER to continue" << endl;

    cin.ignore();
}

void displayOutroThree()
{
    using namespace std;

    string s1 = "To Sam's surprise, the minesweeper game is revealed to be a cover for an";
    for (int i = 0; i < 72; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                     _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._)" << std::endl;
        std::cout << R"(                  .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.)" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (   )" << setw(72) << left << s1.substr(0, i + 1) << R"(  ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (___       _       _       _       _       _       _       _       _       ___))" << std::endl;
        std::cout << R"(                      `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-')" << std::endl;
        std::cout << R"(                              `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-')" << std::endl;
        std::cout << R"(                                      `-._.-' (__  _) (__  _) (_ _ _) `-._.-')" << std::endl;
        std::cout << R"(                                              `-._.-' (_ ___) `-._.-')" << std::endl;
        std::cout << R"(                                                      `-._.-')" << std::endl;
    }

    string s2 = "illegal betting ring run by the guards. They wager on the outcomes, dist";
    for (int i = 0; i < 72; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                     _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._)" << std::endl;
        std::cout << R"(                  .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.)" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (   To Sam's surprise, the minesweeper game is revealed to be a cover for an  ))" << std::endl;
        std::cout << R"(                   )  )" << setw(72) << left << s2.substr(0, i + 1) << R"( ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (___       _       _       _       _       _       _       _       _       ___))" << std::endl;
        std::cout << R"(                      `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-')" << std::endl;
        std::cout << R"(                              `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-')" << std::endl;
        std::cout << R"(                                      `-._.-' (__  _) (__  _) (_ _ _) `-._.-')" << std::endl;
        std::cout << R"(                                              `-._.-' (_ ___) `-._.-')" << std::endl;
        std::cout << R"(                                                      `-._.-')" << std::endl;
    }

    string s3 = "racting themselves from the monotony of prison duty....                 ";
    for (int i = 0; i < 72; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                     _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._)" << std::endl;
        std::cout << R"(                  .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.)" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (   To Sam's surprise, the minesweeper game is revealed to be a cover for an  ))" << std::endl;
        std::cout << R"(                   )  illegal betting ring run by the guards. They wager on the outcomes, dist ( )" << std::endl;
        std::cout << R"(                  (   )" << setw(72) << left << s3.substr(0, i + 1) << R"(  ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (___       _       _       _       _       _       _       _       _       ___))" << std::endl;
        std::cout << R"(                      `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-')" << std::endl;
        std::cout << R"(                              `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-')" << std::endl;
        std::cout << R"(                                      `-._.-' (__  _) (__  _) (_ _ _) `-._.-')" << std::endl;
        std::cout << R"(                                              `-._.-' (_ ___) `-._.-')" << std::endl;
        std::cout << R"(                                                      `-._.-')" << std::endl;
    }

    string s4 = "Sam uses his detective skills to manipulate the game's outcome, creating";
    for (int i = 0; i < 72; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                     _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._)" << std::endl;
        std::cout << R"(                  .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.)" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (   To Sam's surprise, the minesweeper game is revealed to be a cover for an  ))" << std::endl;
        std::cout << R"(                   )  illegal betting ring run by the guards. They wager on the outcomes, dist ( )" << std::endl;
        std::cout << R"(                  (   racting themselves from the monotony of prison duty....                   ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (   )" << setw(72) << left << s4.substr(0, i + 1) << R"(  ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (___       _       _       _       _       _       _       _       _       ___))" << std::endl;
        std::cout << R"(                      `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-')" << std::endl;
        std::cout << R"(                              `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-')" << std::endl;
        std::cout << R"(                                      `-._.-' (__  _) (__  _) (_ _ _) `-._.-')" << std::endl;
        std::cout << R"(                                              `-._.-' (_ ___) `-._.-')" << std::endl;
        std::cout << R"(                                                      `-._.-')" << std::endl;
    }

    string s5 = "a distraction that allows him to access restricted areas of the prison u";
    for (int i = 0; i < 72; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                     _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._)" << std::endl;
        std::cout << R"(                  .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.)" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (   To Sam's surprise, the minesweeper game is revealed to be a cover for an  ))" << std::endl;
        std::cout << R"(                   )  illegal betting ring run by the guards. They wager on the outcomes, dist ( )" << std::endl;
        std::cout << R"(                  (   racting themselves from the monotony of prison duty....                   ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (   Sam uses his detective skills to manipulate the game's outcome, creating  ))" << std::endl;
        std::cout << R"(                   )  )" << setw(72) << left << s5.substr(0, i + 1) << R"( ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (___       _       _       _       _       _       _       _       _       ___))" << std::endl;
        std::cout << R"(                      `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-')" << std::endl;
        std::cout << R"(                              `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-')" << std::endl;
        std::cout << R"(                                      `-._.-' (__  _) (__  _) (_ _ _) `-._.-')" << std::endl;
        std::cout << R"(                                              `-._.-' (_ ___) `-._.-')" << std::endl;
        std::cout << R"(                                                      `-._.-')" << std::endl;
    }

    string s6 = "nnoticed. He discovers hidden compartments, secret tunnels, and coded me";
    for (int i = 0; i < 72; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                     _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._)" << std::endl;
        std::cout << R"(                  .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.)" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (   To Sam's surprise, the minesweeper game is revealed to be a cover for an  ))" << std::endl;
        std::cout << R"(                   )  illegal betting ring run by the guards. They wager on the outcomes, dist ( )" << std::endl;
        std::cout << R"(                  (   racting themselves from the monotony of prison duty....                   ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (   Sam uses his detective skills to manipulate the game's outcome, creating  ))" << std::endl;
        std::cout << R"(                   )  a distraction that allows him to access restricted areas of the prison u ( )" << std::endl;
        std::cout << R"(                  (   )" << setw(72) << left << s6.substr(0, i + 1) << R"(  ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (___       _       _       _       _       _       _       _       _       ___))" << std::endl;
        std::cout << R"(                      `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-')" << std::endl;
        std::cout << R"(                              `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-')" << std::endl;
        std::cout << R"(                                      `-._.-' (__  _) (__  _) (_ _ _) `-._.-')" << std::endl;
        std::cout << R"(                                              `-._.-' (_ ___) `-._.-')" << std::endl;
        std::cout << R"(                                                      `-._.-')" << std::endl;
    }

    string s7 = "ssages left by other inmates who were part of The Moth's failed escape p";
    for (int i = 0; i < 72; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                     _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._)" << std::endl;
        std::cout << R"(                  .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.)" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (   To Sam's surprise, the minesweeper game is revealed to be a cover for an  ))" << std::endl;
        std::cout << R"(                   )  illegal betting ring run by the guards. They wager on the outcomes, dist ( )" << std::endl;
        std::cout << R"(                  (   racting themselves from the monotony of prison duty....                   ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (   Sam uses his detective skills to manipulate the game's outcome, creating  ))" << std::endl;
        std::cout << R"(                   )  a distraction that allows him to access restricted areas of the prison u ( )" << std::endl;
        std::cout << R"(                  (   nnoticed. He discovers hidden compartments, secret tunnels, and coded me  ))" << std::endl;
        std::cout << R"(                   )  )" << setw(72) << left << s7.substr(0, i + 1) << R"( ( )" << std::endl;
        std::cout << R"(                  (                                                                             ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (___       _       _       _       _       _       _       _       _       ___))" << std::endl;
        std::cout << R"(                      `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-')" << std::endl;
        std::cout << R"(                              `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-')" << std::endl;
        std::cout << R"(                                      `-._.-' (__  _) (__  _) (_ _ _) `-._.-')" << std::endl;
        std::cout << R"(                                              `-._.-' (_ ___) `-._.-')" << std::endl;
        std::cout << R"(                                                      `-._.-')" << std::endl;
    }

    string s8 = "lan............                                                         ";
    for (int i = 0; i < 72; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                     _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._)" << std::endl;
        std::cout << R"(                  .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-.)" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (   To Sam's surprise, the minesweeper game is revealed to be a cover for an  ))" << std::endl;
        std::cout << R"(                   )  illegal betting ring run by the guards. They wager on the outcomes, dist ( )" << std::endl;
        std::cout << R"(                  (   racting themselves from the monotony of prison duty....                   ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (   Sam uses his detective skills to manipulate the game's outcome, creating  ))" << std::endl;
        std::cout << R"(                   )  a distraction that allows him to access restricted areas of the prison u ( )" << std::endl;
        std::cout << R"(                  (   nnoticed. He discovers hidden compartments, secret tunnels, and coded me  ))" << std::endl;
        std::cout << R"(                   )  ssages left by other inmates who were part of The Moth's failed escape p ( )" << std::endl;
        std::cout << R"(                  (   )" << setw(72) << left << s8.substr(0, i + 1) << R"(  ))" << std::endl;
        std::cout << R"(                   )                                                                           ( )" << std::endl;
        std::cout << R"(                  (___       _       _       _       _       _       _       _       _       ___))" << std::endl;
        std::cout << R"(                      `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-')" << std::endl;
        std::cout << R"(                              `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-')" << std::endl;
        std::cout << R"(                                      `-._.-' (__  _) (__  _) (_ _ _) `-._.-')" << std::endl;
        std::cout << R"(                                              `-._.-' (_ ___) `-._.-')" << std::endl;
        std::cout << R"(                                                      `-._.-')" << std::endl;
    }

    cout << endl;

    cout << "                                           Press ENTER to continue" << endl;

    cin.ignore();
}

void displayActFour()
{
    using namespace std;

    // ASCII art generated from https://www.asciiart.eu/text-to-ascii-art

    system("cls");
    cout << endl;
    cout << endl;
    std::cout << R"(                              /$$$$$$   /$$$$$$  /$$$$$$$$       /$$$$$$$$ /$$$$$$  /$$   /$$ /$$$$$$$)" << endl;
    std::cout << R"(                             /$$__  $$ /$$__  $$|__  $$__/      | $$_____//$$__  $$| $$  | $$| $$__  $$)" << endl;
    std::cout << R"(                            | $$  \ $$| $$  \__/   | $$         | $$     | $$  \ $$| $$  | $$| $$  \ $$)" << endl;
    std::cout << R"(                            | $$$$$$$$| $$         | $$         | $$$$$  | $$  | $$| $$  | $$| $$$$$$$/)" << endl;
    std::cout << R"(                            | $$__  $$| $$         | $$         | $$__/  | $$  | $$| $$  | $$| $$__  $$)" << endl;
    std::cout << R"(                            | $$  | $$| $$    $$   | $$         | $$     | $$  | $$| $$  | $$| $$  \ $$)" << endl;
    std::cout << R"(                            | $$  | $$|  $$$$$$/   | $$         | $$     |  $$$$$$/|  $$$$$$/| $$  | $$)" << endl;
    std::cout << R"(                            |__/  |__/ \______/    |__/         |__/      \______/  \______/ |__/  |__/)" << endl;
    cout << endl;
    cout << endl;
    cout << R"(                      ___  _   _  _____  ___  ____  __   _  _    ____  __  __  ____  ___  __  __  ____  ____  ___ )" << endl;
    cout << R"(                     / __)( )_( )(  _  )/ __)(_  _)(  ) ( \/ )  (  _ \(  )(  )(  _ \/ __)(  )(  )(_  _)(_  _)/ __))" << endl;
    cout << R"(                    ( (_-. ) _ (  )(_)( \__ \  )(   )(__ \  /    )___/ )(__)(  )   /\__ \ )(__)(  _)(_   )(  \__ \)" << endl;
    cout << R"(                     \___/(_) (_)(_____)(___/ (__) (____)(__)   (__)  (______)(_)\_)(___/(______)(____) (__) (___/)" << endl;
    sleep(1.5);

    system("cls");
    cout << endl;
    cout << endl;
    std::cout << R"(                             $$$$$$\   $$$$$$\ $$$$$$$$\       $$$$$$$$\  $$$$$$\  $$\   $$\ $$$$$$$\  )" << endl;
    std::cout << R"(                            $$  __$$\ $$  __$$\\__$$  __|      $$  _____|$$  __$$\ $$ |  $$ |$$  __$$\ )" << endl;
    std::cout << R"(                            $$ /  $$ |$$ /  \__|  $$ |         $$ |      $$ /  $$ |$$ |  $$ |$$ |  $$ |)" << endl;
    std::cout << R"(                            $$$$$$$$ |$$ |        $$ |         $$$$$\    $$ |  $$ |$$ |  $$ |$$$$$$$  |)" << endl;
    std::cout << R"(                            $$  __$$ |$$ |        $$ |         $$  __|   $$ |  $$ |$$ |  $$ |$$  __$$< )" << endl;
    std::cout << R"(                            $$ |  $$ |$$ |  $$\   $$ |         $$ |      $$ |  $$ |$$ |  $$ |$$ |  $$ |)" << endl;
    std::cout << R"(                            $$ |  $$ |\$$$$$$  |  $$ |         $$ |       $$$$$$  |\$$$$$$  |$$ |  $$ |)" << endl;
    std::cout << R"(                            \__|  \__| \______/   \__|         \__|       \______/  \______/ \__|  \__|)" << endl;
    cout << endl;
    cout << endl;
    cout << R"(                      ___  _   _  _____  ___  ____  __   _  _    ____  __  __  ____  ___  __  __  ____  ____  ___ )" << endl;
    cout << R"(                     / __)( )_( )(  _  )/ __)(_  _)(  ) ( \/ )  (  _ \(  )(  )(  _ \/ __)(  )(  )(_  _)(_  _)/ __))" << endl;
    cout << R"(                    ( (_-. ) _ (  )(_)( \__ \  )(   )(__ \  /    )___/ )(__)(  )   /\__ \ )(__)(  _)(_   )(  \__ \)" << endl;
    cout << R"(                     \___/(_) (_)(_____)(___/ (__) (____)(__)   (__)  (______)(_)\_)(___/(______)(____) (__) (___/)" << endl;
    sleep(1.5);

    system("cls");
    cout << endl;
    cout << endl;
    std::cout << R"(                              ______    ______   ________        ________  ______   __    __  _______)" << endl;
    std::cout << R"(                             /      \  /      \ /        |      /        |/      \ /  |  /  |/       \ )" << endl;
    std::cout << R"(                            /$$$$$$  |/$$$$$$  |$$$$$$$$/       $$$$$$$$//$$$$$$  |$$ |  $$ |$$$$$$$  |)" << endl;
    std::cout << R"(                            $$ |__$$ |$$ |  $$/    $$ |         $$ |__   $$ |  $$ |$$ |  $$ |$$ |__$$ |)" << endl;
    std::cout << R"(                            $$    $$ |$$ |         $$ |         $$    |  $$ |  $$ |$$ |  $$ |$$    $$< )" << endl;
    std::cout << R"(                            $$$$$$$$ |$$ |   __    $$ |         $$$$$/   $$ |  $$ |$$ |  $$ |$$$$$$$  |)" << endl;
    std::cout << R"(                            $$ |  $$ |$$ \__/  |   $$ |         $$ |     $$ \__$$ |$$ \__$$ |$$ |  $$ |)" << endl;
    std::cout << R"(                            $$ |  $$ |$$    $$/    $$ |         $$ |     $$    $$/ $$    $$/ $$ |  $$ |)" << endl;
    std::cout << R"(                            $$/   $$/  $$$$$$/     $$/          $$/       $$$$$$/   $$$$$$/  $$/   $$/ )" << endl;
    cout << endl;
    cout << endl;
    cout << R"(                      ___  _   _  _____  ___  ____  __   _  _    ____  __  __  ____  ___  __  __  ____  ____  ___ )" << endl;
    cout << R"(                     / __)( )_( )(  _  )/ __)(_  _)(  ) ( \/ )  (  _ \(  )(  )(  _ \/ __)(  )(  )(_  _)(_  _)/ __))" << endl;
    cout << R"(                    ( (_-. ) _ (  )(_)( \__ \  )(   )(__ \  /    )___/ )(__)(  )   /\__ \ )(__)(  _)(_   )(  \__ \)" << endl;
    cout << R"(                     \___/(_) (_)(_____)(___/ (__) (____)(__)   (__)  (______)(_)\_)(___/(______)(____) (__) (___/)" << endl;
    sleep(1.5);

    system("cls");
    cout << endl;
    cout << endl;
    std::cout << R"(                              ______    ______  ________        ________   ______   __    __  _______  )" << endl;
    std::cout << R"(                             /      \  /      \|        \      |        \ /      \ |  \  |  \|       \ )" << endl;
    std::cout << R"(                            |  $$$$$$\|  $$$$$$\\$$$$$$$$      | $$$$$$$$|  $$$$$$\| $$  | $$| $$$$$$$\)" << endl;
    std::cout << R"(                            | $$__| $$| $$   \$$  | $$         | $$__    | $$  | $$| $$  | $$| $$__| $$)" << endl;
    std::cout << R"(                            | $$    $$| $$        | $$         | $$  \   | $$  | $$| $$  | $$| $$    $$)" << endl;
    std::cout << R"(                            | $$$$$$$$| $$   __   | $$         | $$$$$   | $$  | $$| $$  | $$| $$$$$$$\)" << endl;
    std::cout << R"(                            | $$  | $$| $$__/  \  | $$         | $$      | $$__/ $$| $$__/ $$| $$  | $$)" << endl;
    std::cout << R"(                            | $$  | $$ \$$    $$  | $$         | $$       \$$    $$ \$$    $$| $$  | $$)" << endl;
    std::cout << R"(                             \$$   \$$  \$$$$$$    \$$          \$$        \$$$$$$   \$$$$$$  \$$   \$$)" << endl;
    cout << endl;
    cout << endl;
    cout << R"(                      ___  _   _  _____  ___  ____  __   _  _    ____  __  __  ____  ___  __  __  ____  ____  ___ )" << endl;
    cout << R"(                     / __)( )_( )(  _  )/ __)(_  _)(  ) ( \/ )  (  _ \(  )(  )(  _ \/ __)(  )(  )(_  _)(_  _)/ __))" << endl;
    cout << R"(                    ( (_-. ) _ (  )(_)( \__ \  )(   )(__ \  /    )___/ )(__)(  )   /\__ \ )(__)(  _)(_   )(  \__ \)" << endl;
    cout << R"(                     \___/(_) (_)(_____)(___/ (__) (____)(__)   (__)  (______)(_)\_)(___/(______)(____) (__) (___/)" << endl;
    sleep(1.5);

    cout << endl;
    cout << endl;
    cout << "                                              Press any ENTER to continue" << endl;
    cin.ignore();
}

void displayIntroFour()
{
    using namespace std;
    string keyArr[] = {
        R"(                            ,------------------------------.----------------------------------.)",
        R"(                            |                             |                                  |)",
        R"(                            |    .    .    ,---------     |     ------------------------.    |)",
        R"(                            |    |    |    |              |                             |    |)",
        R"(                            |    |    `----"--------------'    ,-------------------.    |    |)",
        R"(                            |    |                             |                   |    |    |)",
        R"(                            |    :--------------.--------------"----     ,---------:    |    |)",
        R"(                            |    |              |                        |         |    |    |)",
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
    for (int i = 0; i < 27; i++)
    {
        system("cls");
        for (int j = 0; j <= i; j++)
        {
            cout << keyArr[j] << endl;
        }
        sleep(0.1);
    }
    sleep(5);
}

void displayStoryFour()
{
    using namespace std;

    string s1 = "As Sam collects evidence, he also finds pieces of his own pas";
    for (int i = 0; i < 61; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                        .-=~=-.                                                                 .-=~=-.)" << std::endl;
        std::cout << R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))" << std::endl;
        std::cout << R"(                        ( _ __)                                                                 ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)  )" << setw(61) << left << s1.substr(0, i + 1) << R"(  (__  _))" << std::endl;
        std::cout << R"(                        (_ ___)                                                                 (_ ___))" << std::endl;
        std::cout << R"(                        (__  _)                                                                 (__  _))" << std::endl;
        std::cout << R"(                        ( _ __)                                                                 ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)                                                                 (__  _))" << std::endl;
        std::cout << R"(                        (_ ___)                                                                 (_ ___))" << std::endl;
        std::cout << R"(                        ( _ __)                                                                 ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))" << std::endl;
        std::cout << R"(                        `-._.-'                                                                 `-._.-')" << std::endl;
        sleep(0.1);
    }

    string s2 = "t scattered throughout the prison. Old case files, personal b";
    for (int i = 0; i < 61; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                        .-=~=-.                                                                 .-=~=-.)" << std::endl;
        std::cout << R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))" << std::endl;
        std::cout << R"(                        ( _ __)                                                                 ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)  As Sam collects evidence, he also finds pieces of his own pas  (__  _))" << std::endl;
        std::cout << R"(                        (_ ___)  )" << setw(61) << left << s2.substr(0, i + 1) << R"(  (_ ___))" << std::endl;
        std::cout << R"(                        (__  _)                                                                 (__  _))" << std::endl;
        std::cout << R"(                        ( _ __)                                                                 ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)                                                                 (__  _))" << std::endl;
        std::cout << R"(                        (_ ___)                                                                 (_ ___))" << std::endl;
        std::cout << R"(                        ( _ __)                                                                 ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))" << std::endl;
        std::cout << R"(                        `-._.-'                                                                 `-._.-')" << std::endl;
        sleep(0.1);
    }

    string s3 = "elongings, and a letter from someone he thought was lost - al";
    for (int i = 0; i < 61; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                        .-=~=-.                                                                 .-=~=-.)" << std::endl;
        std::cout << R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))" << std::endl;
        std::cout << R"(                        ( _ __)                                                                 ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)  As Sam collects evidence, he also finds pieces of his own pas  (__  _))" << std::endl;
        std::cout << R"(                        (_ ___)  t scattered throughout the prison. Old case files, personal b  (_ ___))" << std::endl;
        std::cout << R"(                        (__  _)  )" << setw(61) << left << s3.substr(0, i + 1) << R"(  (__  _))" << std::endl;
        std::cout << R"(                        ( _ __)                                                                 ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)                                                                 (__  _))" << std::endl;
        std::cout << R"(                        (_ ___)                                                                 (_ ___))" << std::endl;
        std::cout << R"(                        ( _ __)                                                                 ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))" << std::endl;
        std::cout << R"(                        `-._.-'                                                                 `-._.-')" << std::endl;
        sleep(0.1);
    }

    string s4 = "l these items help him evade the guards. The maze of prison c";
    for (int i = 0; i < 61; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                        .-=~=-.                                                                 .-=~=-.)" << std::endl;
        std::cout << R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))" << std::endl;
        std::cout << R"(                        ( _ __)                                                                 ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)  As Sam collects evidence, he also finds pieces of his own pas  (__  _))" << std::endl;
        std::cout << R"(                        (_ ___)  t scattered throughout the prison. Old case files, personal b  (_ ___))" << std::endl;
        std::cout << R"(                        (__  _)  elongings, and a letter from someone he thought was lost - al  (__  _))" << std::endl;
        std::cout << R"(                        ( _ __)  )" << setw(61) << left << s4.substr(0, i + 1) << R"(  ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)                                                                 (__  _))" << std::endl;
        std::cout << R"(                        (_ ___)                                                                 (_ ___))" << std::endl;
        std::cout << R"(                        ( _ __)                                                                 ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))" << std::endl;
        std::cout << R"(                        `-._.-'                                                                 `-._.-')" << std::endl;
        sleep(0.1);
    }

    string s5 = "orridors becomes a metaphorical labyrinth of memories and sec";
    for (int i = 0; i < 61; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                        .-=~=-.                                                                 .-=~=-.)" << std::endl;
        std::cout << R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))" << std::endl;
        std::cout << R"(                        ( _ __)                                                                 ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)  As Sam collects evidence, he also finds pieces of his own pas  (__  _))" << std::endl;
        std::cout << R"(                        (_ ___)  t scattered throughout the prison. Old case files, personal b  (_ ___))" << std::endl;
        std::cout << R"(                        (__  _)  elongings, and a letter from someone he thought was lost - al  (__  _))" << std::endl;
        std::cout << R"(                        ( _ __)  l these items help him evade the guards. The maze of prison c  ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)  )" << setw(61) << left << s5.substr(0, i + 1) << R"(  (__  _))" << std::endl;
        std::cout << R"(                        (_ ___)                                                                 (_ ___))" << std::endl;
        std::cout << R"(                        ( _ __)                                                                 ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))" << std::endl;
        std::cout << R"(                        `-._.-'                                                                 `-._.-')" << std::endl;
        sleep(0.1);
    }

    string s6 = "rets........                                                 ";
    for (int i = 0; i < 61; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                        .-=~=-.                                                                 .-=~=-.)" << std::endl;
        std::cout << R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))" << std::endl;
        std::cout << R"(                        ( _ __)                                                                 ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)  As Sam collects evidence, he also finds pieces of his own pas  (__  _))" << std::endl;
        std::cout << R"(                        (_ ___)  t scattered throughout the prison. Old case files, personal b  (_ ___))" << std::endl;
        std::cout << R"(                        (__  _)  elongings, and a letter from someone he thought was lost - al  (__  _))" << std::endl;
        std::cout << R"(                        ( _ __)  l these items help him evade the guards. The maze of prison c  ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)  orridors becomes a metaphorical labyrinth of memories and sec  (__  _))" << std::endl;
        std::cout << R"(                        (_ ___)  )" << setw(61) << left << s6.substr(0, i + 1) << R"(  (_ ___))" << std::endl;
        std::cout << R"(                        ( _ __)                                                                 ( _ __))" << std::endl;
        std::cout << R"(                        (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))" << std::endl;
        std::cout << R"(                        `-._.-'                                                                 `-._.-')" << std::endl;
        sleep(0.1);
    }

    cout << endl;

    cout << "                                                     Press ENTER to continue" << endl;

    cin.ignore();
}

void displayDoorOutro()
{
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
    for (int i = 0; i < 22; i++)
    {
        system("cls");
        cout << endl;
        cout << endl;
        cout << endl;
        for (int j = 0; j <= i; j++)
        {
            cout << keyArr[j] << endl;
        }
        sleep(0.1);
    }
    sleep(5);
}

void displayOutroStory()
{

    using namespace std;

    string s1 = "Having narrowly escaped A";
    for (int i = 0; i < 25; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                                                      ______________________________)" << std::endl;
        std::cout << R"(                                                    / \                             \.)" << std::endl;
        std::cout << R"(                                                   |   |                            |.)" << std::endl;
        std::cout << R"(                                                   \_ |                            |.)" << std::endl;
        std::cout << R"(                                                      |  )" << setw(25) << left << s1.substr(0, i + 1) << R"( |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |   _________________________|___)" << std::endl;
        std::cout << R"(                                                      |  /                            /.)" << std::endl;
        std::cout << R"(                                                      \_/____________________________/.)" << std::endl;
    }

    string s2 = "lacran, Sam's heart raced";
    for (int i = 0; i < 25; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                                                      ______________________________)" << std::endl;
        std::cout << R"(                                                    / \                             \.)" << std::endl;
        std::cout << R"(                                                   |   |                            |.)" << std::endl;
        std::cout << R"(                                                   \_ |                            |.)" << std::endl;
        std::cout << R"(                                                      |  Having narrowly escaped A |.)" << std::endl;
        std::cout << R"(                                                      |  )" << setw(25) << left << s2.substr(0, i + 1) << R"( |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |   _________________________|___)" << std::endl;
        std::cout << R"(                                                      |  /                            /.)" << std::endl;
        std::cout << R"(                                                      \_/____________________________/.)" << std::endl;
    }

    string s3 = "as he made his way to fre";
    for (int i = 0; i < 25; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                                                      ______________________________)" << std::endl;
        std::cout << R"(                                                    / \                             \.)" << std::endl;
        std::cout << R"(                                                   |   |                            |.)" << std::endl;
        std::cout << R"(                                                   \_ |                            |.)" << std::endl;
        std::cout << R"(                                                      |  Having narrowly escaped A |.)" << std::endl;
        std::cout << R"(                                                      |  lacran, Sam's heart raced |.)" << std::endl;
        std::cout << R"(                                                      |  )" << setw(25) << left << s3.substr(0, i + 1) << R"( |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |   _________________________|___)" << std::endl;
        std::cout << R"(                                                      |  /                            /.)" << std::endl;
        std::cout << R"(                                                      \_/____________________________/.)" << std::endl;
    }

    string s4 = "edom. But as he emerged f";
    for (int i = 0; i < 25; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                                                      ______________________________)" << std::endl;
        std::cout << R"(                                                    / \                             \.)" << std::endl;
        std::cout << R"(                                                   |   |                            |.)" << std::endl;
        std::cout << R"(                                                   \_ |                            |.)" << std::endl;
        std::cout << R"(                                                      |  Having narrowly escaped A |.)" << std::endl;
        std::cout << R"(                                                      |  lacran, Sam's heart raced |.)" << std::endl;
        std::cout << R"(                                                      |  as he made his way to fre |.)" << std::endl;
        std::cout << R"(                                                      |  )" << setw(25) << left << s4.substr(0, i + 1) << R"( |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |   _________________________|___)" << std::endl;
        std::cout << R"(                                                      |  /                            /.)" << std::endl;
        std::cout << R"(                                                      \_/____________________________/.)" << std::endl;
    }

    string s5 = "rom the prison's depths a";
    for (int i = 0; i < 25; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                                                      ______________________________)" << std::endl;
        std::cout << R"(                                                    / \                             \.)" << std::endl;
        std::cout << R"(                                                   |   |                            |.)" << std::endl;
        std::cout << R"(                                                   \_ |                            |.)" << std::endl;
        std::cout << R"(                                                      |  Having narrowly escaped A |.)" << std::endl;
        std::cout << R"(                                                      |  lacran, Sam's heart raced |.)" << std::endl;
        std::cout << R"(                                                      |  as he made his way to fre |.)" << std::endl;
        std::cout << R"(                                                      |  edom. But as he emerged f |.)" << std::endl;
        std::cout << R"(                                                      |  )" << setw(25) << left << s5.substr(0, i + 1) << R"( |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |   _________________________|___)" << std::endl;
        std::cout << R"(                                                      |  /                            /.)" << std::endl;
        std::cout << R"(                                                      \_/____________________________/.)" << std::endl;
    }

    string s6 = "nd stepped into sunlight,";
    for (int i = 0; i < 25; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                                                      ______________________________)" << std::endl;
        std::cout << R"(                                                    / \                             \.)" << std::endl;
        std::cout << R"(                                                   |   |                            |.)" << std::endl;
        std::cout << R"(                                                   \_ |                            |.)" << std::endl;
        std::cout << R"(                                                      |  Having narrowly escaped A |.)" << std::endl;
        std::cout << R"(                                                      |  lacran, Sam's heart raced |.)" << std::endl;
        std::cout << R"(                                                      |  as he made his way to fre |.)" << std::endl;
        std::cout << R"(                                                      |  edom. But as he emerged f |.)" << std::endl;
        std::cout << R"(                                                      |  rom the prison's depths a |.)" << std::endl;
        std::cout << R"(                                                      |  )" << setw(25) << left << s6.substr(0, i + 1) << R"( |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |   _________________________|___)" << std::endl;
        std::cout << R"(                                                      |  /                            /.)" << std::endl;
        std::cout << R"(                                                      \_/____________________________/.)" << std::endl;
    }

    string s7 = "he stumbled upon somethin";
    for (int i = 0; i < 25; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                                                      ______________________________)" << std::endl;
        std::cout << R"(                                                    / \                             \.)" << std::endl;
        std::cout << R"(                                                   |   |                            |.)" << std::endl;
        std::cout << R"(                                                   \_ |                            |.)" << std::endl;
        std::cout << R"(                                                      |  Having narrowly escaped A |.)" << std::endl;
        std::cout << R"(                                                      |  lacran, Sam's heart raced |.)" << std::endl;
        std::cout << R"(                                                      |  as he made his way to fre |.)" << std::endl;
        std::cout << R"(                                                      |  edom. But as he emerged f |.)" << std::endl;
        std::cout << R"(                                                      |  rom the prison's depths a |.)" << std::endl;
        std::cout << R"(                                                      |  nd stepped into sunlight, |.)" << std::endl;
        std::cout << R"(                                                      |  )" << setw(25) << left << s7.substr(0, i + 1) << R"( |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |   _________________________|___)" << std::endl;
        std::cout << R"(                                                      |  /                            /.)" << std::endl;
        std::cout << R"(                                                      \_/____________________________/.)" << std::endl;
    }

    string s8 = "g spine-chilling.........";
    for (int i = 0; i < 25; i++)
    {
        system("cls");
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;
        std::cout << R"(                                                      ______________________________)" << std::endl;
        std::cout << R"(                                                    / \                             \.)" << std::endl;
        std::cout << R"(                                                   |   |                            |.)" << std::endl;
        std::cout << R"(                                                   \_ |                            |.)" << std::endl;
        std::cout << R"(                                                      |  Having narrowly escaped A |.)" << std::endl;
        std::cout << R"(                                                      |  lacran, Sam's heart raced |.)" << std::endl;
        std::cout << R"(                                                      |  as he made his way to fre |.)" << std::endl;
        std::cout << R"(                                                      |  edom. But as he emerged f |.)" << std::endl;
        std::cout << R"(                                                      |  rom the prison's depths a |.)" << std::endl;
        std::cout << R"(                                                      |  nd stepped into sunlight, |.)" << std::endl;
        std::cout << R"(                                                      |  he stumbled upon somethin |.)" << std::endl;
        std::cout << R"(                                                      |  )" << setw(25) << left << s8.substr(0, i + 1) << R"( |.)" << std::endl;
        std::cout << R"(                                                      |                            |.)" << std::endl;
        std::cout << R"(                                                      |   _________________________|___)" << std::endl;
        std::cout << R"(                                                      |  /                            /.)" << std::endl;
        std::cout << R"(                                                      \_/____________________________/.)" << std::endl;
    }

    cout << endl;

    cout << "                                                           Press ENTER to continue" << endl;

    cin.ignore();
}

void displayToBeContinued()
{
    using namespace std;
    system("cls");
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << R"(                                      ______   ______        ______     ______    )" << endl;
    cout << R"(                                     /\__  _\ /\  __ \      /\  == \   /\  ___\   )" << endl;
    cout << R"(                                     \/_/\ \/ \ \ \/\ \     \ \  __<   \ \  __\   )" << endl;
    cout << R"(                                        \ \_\  \ \_____\     \ \_____\  \ \_____\ )" << endl;
    cout << R"(                                         \/_/   \/_____/      \/_____/   \/_____/ )" << endl;
    cout << endl;
    cout << R"(                    ______     ______     __   __     ______   __     __   __     __  __     ______     _____    )" << endl;
    cout << R"(                   /\  ___\   /\  __ \   /\ "-.\ \   /\__  _\ /\ \   /\ "-.\ \   /\ \/\ \   /\  ___\   /\  __-.  )" << endl;
    cout << R"(                   \ \ \____  \ \ \/\ \  \ \ \-.  \  \/_/\ \/ \ \ \  \ \ \-.  \  \ \ \_\ \  \ \  __\   \ \ \/\ \ )" << endl;
    cout << R"(                    \ \_____\  \ \_____\  \ \_\\"\_\    \ \_\  \ \_\  \ \_\\"\_\  \ \_____\  \ \_____\  \ \____- )" << endl;
    cout << R"(                     \/_____/   \/_____/   \/_/ \/_/     \/_/   \/_/   \/_/ \/_/   \/_____/   \/_____/   \/____/ )" << endl;
    sleep(5.5);
}