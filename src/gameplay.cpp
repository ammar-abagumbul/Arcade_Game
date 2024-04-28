// This file controls the main gameflow, calling
// upon other game modules to display relevant animations
// and the game related to the relevant act

#include <iostream>
#include <stdlib.h>

#include "../include/gameplay.h"
#include "../include/animations.h"
#include "../src/slidingblock/game.h"
#include "../src/minesweeper/minesweeper.h"
#include "../src/bokosan/3.h"

// Comment according to need
// Library effective with Windows
#include <windows.h>
// Library effective with Linux
#include <unistd.h>


void startGame(int actNumber){
    switch (actNumber){
        case 1:
            // Show the intro of the story line
            // if this is a new game
            
            storyLineIntro();


            // Start of Act One:

            // Show the relevant intro animations of Act One
            displayActOne();
            displayStoryOne();
            displayIntroOne();

            // Clear the screen and start playing
            system("cls||clear");
            slidingBlockGame();

            // Display the outro story of Act One
            displayOutroOne();

            break;
        case 2:
            // Start of Act Two:

            // Show the relevant intro animations of Act Two
            displayActTwo();
            displayStoryTwo();
            displayIntroTwo();

            // Clear the screen and start playing
            system("cls||clear");
            playBokosan();
            sleep(3);
            

            // Display the outro story of Act Two
            displayOutroTwo();

            break;
        case 3:
            // Start of Act Three:

            // Show the relevant intro animations of Act Three
            displayActThree();
            displayStoryThree();
            displayIntroThree();

            // Clear the screen and start playing
            system("cls||clear");
            while(true){
                if (startMinesweeper()){
                    std::cout << "Congratulations! You won!" << std::endl;
                    sleep(2);
                    break;
                }else{
                    std::cout << "You Lost! Try again!" << std::endl;
                    sleep(2);
                    std::cout<<"Do you want to save and quit?"<<std::endl;

                    break;
                }
            }
            
            // Display the outro story of Act Three
            displayOutroThree();
            
            break;
        case 4:
            // Start of Act Four:

            // Show the relevant intro animations of Act Four
            displayActFour();
            displayStoryFour();
            displayIntroFour();

            // Clear the screen and start playing
            system("cls||clear");
            std::cout<<"PacMan";
            sleep(3);

            // Show the outro animations of the game
            displayDoorOutro();
            displayOutroStory();
            displayToBeContinued();
            
            break;
    }
}