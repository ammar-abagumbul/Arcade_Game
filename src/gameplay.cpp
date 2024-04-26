// This file controls the main gameflow, calling
// upon other game modules to display relevant animations
// and the game related to the relevant act

#include <iostream>
#include <stdlib.h>

#include "../include/gameplay.h"
#include "../include/animations.h"
#include "../src/slidingblock/game.h"

// Comment according to need
// Library effective with Windows
#include <windows.h>
// Library effective with Linux
#include <unistd.h>

void startGame(bool started, int stage){
    // Show the intro of the story line
    // if this is a new game
    if (!started){
        storyLineIntro();
    }


    // Start of Act One:

    // Show the relevant intro animations of Act One
    displayActOne();
    displayStoryOne();
    displayIntroOne();

    // Clear the screen and start playing
    system("cls");
    slidingBlockGame();

    // Display the outro story of Act One
    displayOutroOne();


    // Start of Act Two:

    // Show the relevant intro animations of Act Two
    displayActTwo();
    displayStoryTwo();
    displayIntroTwo();

    // Clear the screen and start playing
    system("cls");
    std::cout<<"Enter the gurgueon";
    sleep(3);

    // Display the outro story of Act Two
    displayOutroTwo();


    // Start of Act Three:

    // Show the relevant intro animations of Act Three
    displayActThree();
    displayStoryThree();
    displayIntroThree();

    // Clear the screen and start playing
    system("cls");
    std::cout<<"Minesweeper";
    sleep(3);
    
    // Display the outro story of Act Three
    displayOutroThree();
    

    // Start of Act Four:

    // Show the relevant intro animations of Act Four
    displayActFour();
    displayStoryFour();
    displayIntroFour();

    // Clear the screen and start playing
    system("cls");
    std::cout<<"PacMan";
    sleep(3);

    // Show the outro animations of the game
    displayDoorOutro();
    displayOutroStory();
    displayToBeContinued();
}