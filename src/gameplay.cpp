#include <iostream>
#include "../include/gameplay.h"
#include "../include/animations.h"
#include "../src/slidingblock/game.h"

#include <windows.h>
#include <unistd.h>
#include <stdlib.h>

void startGame(bool started, int stage){
    if (!started){
        storyLineIntro();
    }

    displayActOne();
    displayStoryOne();
    displayIntroOne();
    system("cls");
    slidingBlockGame();    
    displayOutroOne();

    displayActTwo();
    displayStoryTwo();
    displayIntroTwo();
    std::cout<<"Enter the gurgueon";
    sleep(3);
    displayOutroTwo();

    displayActThree();
    displayStoryThree();
    displayIntroThree();
    std::cout<<"Minesweeper";
    sleep(3);
    displayOutroThree();
    
    displayActFour();
    displayStoryFour();
    displayIntroFour();
    std::cout<<"PacMan";
    sleep(3);

    displayDoorOutro();
    displayOutroStory();
    displayToBeContinued();
}