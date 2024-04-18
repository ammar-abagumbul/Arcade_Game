#include <iostream>
#include "../include/animations.h"
#include "../include/menu_screen.h"
#include "../include/gameplay.h"

using namespace std;

int main()
{
    introAnimations();
    while (true)
    {
        int currentOption = showMenuScreen();
        cout<<currentOption;
        if (currentOption == 1){
            startGame();
        }
        else if (currentOption == 3)
        {
            printCredits();
            cin.ignore();
            cin.ignore();
        }
        else{
            break;
        }
    }
}
