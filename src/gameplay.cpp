#include <iostream>
#include "../include/gameplay.h"
#include "../include/animations.h"

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
    std::cout<<"Sliding block";
    sleep(5);
    displayOutroOne();
    displayActTwo();
    displayStoryTwo();
    displayIntroTwo();
    std::cout<<"Enter the gurgueon";
    sleep(5);
    displayOutroTwo();
    displayActThree();
    displayStoryThree();
    displayIntroThree();
    std::cout<<"Minesweeper";
    sleep(5);
    displayOutroThree();
    
}