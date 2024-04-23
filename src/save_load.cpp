#include <iostream>
#include <fstream>
#include "save_load.h"
using namespace std;

struct gameState{
    int playerX;
    int playerY;
    bool game1, game2, game3, game4; //games played ro to be played by the player
};



//taking bool of every game and add if its won or not and x, y coordinates of player
void saveGame(struct gameState& gs){
    ofstream file;
    file.open("save.txt");
    if (file.fail()){
        cout << "Error in saving" << endl;
        exit(1);
    }
    else{
        file << gs.game1 << "\n"; 
        file << gs.game2 << "\n"; 
        file << gs.game3 << "\n"; 
        file << gs.game4 << "\n"; 
        file << gs.playerX << "\n"; 
        file << gs.playerY << "\n"; 
    }
    file.close();
}

//load the game state from the file and send it as a struct gameState
gameState loadGame(){
    gameState loadedGame;
    ifstream file;
    file.open("save.txt");
    if (file.fail()){
        cout <<  "No saved data found!" << endl;
        exit(1);
    }
    else{
        string x;
        while(file >> x){
            file >> loadedGame.playerX;
            file >> loadedGame.playerY;
            file >>  loadedGame.game1;
            file  >>  loadedGame.game2;
            file >> loadedGame.game3;
            file >> loadedGame.game4;
        }
    }
    return loadedGame;
}