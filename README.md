
# THE GREAT ESCAPE: Alacran's Shadow

# Menu 📄
    i. Team Members 🫂
    ii. How to Play 🎮
    iii. External/Non-standard Libraries 🤓
    iv. Features Implemented 🤯
    v. Description 📜
    
# Team Members 🫂


[Aosaf Ershad Chowdhury](https://github.com/aosaf-e-c) (3036253732)

[Sheik Mahmood Afif](https://github.com/mahmoodafif) (3036225230)

[Abagumbul Ammar Amin](https://github.com/ammar-abagumbul) (3036259243)

[Ignatius De Loyola Dominique Japar](https://github.com/iloevera) (3036184072)

[Ali Musaddiq](https://github.com/Musaddiq101) (3036259011)


# How to play 🎮

Maximize the terminal window for a better experience! 
*Disclaimer: Maximize if Pacman map is not visible in mini window*

```bash
  make game
```
```bash
  ./game
```
To clear progress and start the game anew
```bash
  make clean
```
- Press Enter to start
- Press 1 to Select Level
- Press 2 to see Credits
- Press 4 to Exit
- Tip: Press enter to skip story lines and dont forget to save (select exit) after each game!

Check our video out for a quick demo: [ENGG1340 2023-2024 Group 134: The Great Escape : Alacran's Shadow Playthrough](https://youtu.be/WCcUMjBhz6g)
       
## External/Non-standard Libraries 🤓

Our terminal game incorporates the ncurses library to elevate the visual experience for players. By leveraging the capabilities of ncurses, we enhance the aesthetics and user interface within the terminal environment. The library enables us to create interactive gameplay with visually appealing elements, such as colorful and dynamic graphics, smooth animations, and intuitive user controls. With the help of ncurses, we strive to deliver an immersive and enjoyable gaming experience right in the command line interface.

One of the standout features of our game's design is its stunning aesthetics, which were achieved using the help of the ncurses library. This library played a key role in implementing the main menu of our game and enabling the use of arrow keys as input. Some of the functions from the library we used are the mvprintw() function, which helps to align texts and graphics, and the refresh() function, which ensures that game updates are displayed promptly in real-time on the player's screen. Ncurses was also crucial in sprucing up the whole user interface, allowing us to implement vibrant colours to the otherwise plain-looking terminal. This can mostly be seen in the implementation of Pacman. These aesthetic improvements are not only easy on the player's eye but just overall contribute to a more polished and clean user interface, captivating gamers' interest in our game.

## Features Implemented 🤯

* Generation of random game sets or events:
  - Sliding Block Puzzle: Shuffles the tiles in random order every game, so the board is random every time. Check the shuffleboard() function in [board.cpp](https://github.com/ammar-abagumbul/ENGG1340_Hitman/blob/main/src/slidingblock/board.cpp)
  - Minesweeper: The positions of bombs are generated randomly, leading to a random game every time. Check the placeBombs() function in [minesweeper.cpp](https://github.com/ammar-abagumbul/ENGG1340_Hitman/blob/main/src/minesweeper/minesweeper.cpp)
  - Pacman: Ghost movement alternates between random behavior and path-tracking algorithm throughout the game. Check the PickRandomDirection() function in [Ghost.cpp](https://github.com/ammar-abagumbul/ENGG1340_Hitman/blob/main/src/pacman/src/Ghost.cpp)
    
* Data structures for storing game status
  - Pacman: 
    - set: for storing pellets and for checking if player has eaten any pellets
    - vector: for storing Nodes in the path finding implementation
    - arrays: 1D array to store Ghosts and 2D array to store maze representation
  - Minesweeper: Uses vectors to store the board bombs and flags
  - Bokosan: map stored in a dynamic 2D char array. All objects stored in vectors of struts that represent the object's various properties.

* Dynamic memory management
  - Pacman:
    - Navigator uses dynamically allocated arrays of string types to pass information between game and menu window
  - Minesweeper: Uses vectors to store the board bombs and flags
  - Sliding Block Puzzle: Uses vectors to store the possible moves a player can make. Check the possiblemovecheck() function in [move.cpp](https://github.com/ammar-abagumbul/ENGG1340_Hitman/blob/main/src/slidingblock/move.cpp)
  - Bokosan: Uses dynamically allocated 2D array to store map, and vectors of struts to store game objects.

* File input/output
  - Pacman: 
    - Reads map.txt to initialize game map and writes to savedGame.txt to save player's progress. Check the class Game, which has 3 functions LoadNewGame(), LoadOldGame() and Save() in [Game.cpp](https://github.com/ammar-abagumbul/ENGG1340_Hitman/blob/main/src/pacman/src/Game.cpp)
  - Sliding Block Puzzle: When the user presses 'esc', the file is saved in a .txt file under the user_cache directory. When the game loads up, it is checked whether a save file exists and if so it is loaded up accordingly. Check [game.cpp](https://github.com/ammar-abagumbul/ENGG1340_Hitman/blob/main/src/slidingblock/game.cpp), the saveBoard() & initSavedboard() functions in [board.cpp](https://github.com/ammar-abagumbul/ENGG1340_Hitman/blob/main/src/slidingblock/board.cpp)
  - Minesweeper: The player can save their progress in a .txt file and load it later from it. Check the functions saveGame() and loadGame() in [minesweeper.cpp](https://github.com/ammar-abagumbul/ENGG1340_Hitman/blob/main/src/minesweeper/minesweeper.cpp)
  - Bokosan: The and objects for each level of Bokosan is read from .txt files. Check playBokosan() in [bokosan.cpp](https://github.com/ammar-abagumbul/ENGG1340_Hitman/blob/main/src/bokosan/bokosan.cpp) and [1.txt](https://github.com/ammar-abagumbul/ENGG1340_Hitman/blob/main/maps/1.txt) Save states are written into a .txt file in the same format as the level files under the user_cache directory.

* Operator Overloading
  - Pacman:
    - Overloading of the insertion, extraction and less than operator to for the Direction class and PowerBalls struct in order to use ready-made solutions within the C++ library. Look [Direction.h](https://github.com/ammar-abagumbul/ENGG1340_Hitman/blob/main/src/pacman/include/Direction.h) and [Game.h](https://github.com/ammar-abagumbul/ENGG1340_Hitman/blob/main/src/pacman/include/Game.h) 

* Recursion
  - Bokosan: Recursion used to trace the path of lasers as well as to check whether multiple objects can be pushed at once.
  
* Program codes in multiple file
  - The header files are located in the "include" directory, while the corresponding implementation files (cpp files) are placed in the "src" directory. Each sub game has its own dedicated set of files. As for Pacman, its functionality and logic are distributed across multiple classes that collectively define its behavior and features.

* Proper indentation and naming styles
  - Proper indentation is used with spaces instead of tabs
  - Functions are named appropriately and clearly in order to avoid misunderstanding and for easy location if changes are required 

* In-code documentation
  - Our code is well-organized with comments explaining each function, so that we can keep up with the code easily.

## Description 📜
   The Great Escape:
  Alacran's Shadow

  Sam Riker, a former detective 🕵️, finds himself framed for a crime he didn't commit. Sentenced to life ⛓️ in Alacran Maximum Security Prison, he knows the only way to clear his name is to escape 🏃 and 
uncover the conspiracy that put him behind bars....
  
  Can you help Sam escape and uncover the reason for the conspiracy? 😶‍🌫️

  You have to complete 4 levels, each one having its own storyline and challenges. 📖

  The 4 Acts (Levels):

  Act 1️⃣ The Clue in the Cell:  🧩 Sliding Block Puzzle - The player has to rearrange the 8 number tiles in ascending order from top left to bottom right (i.e. First row: 1 2 3, Second row: 4 5 6, 
                                Third row: 7 8)

  Act 2️⃣ The Armory Arsenal:  🏮 Bokosan - The objective of Bokosan is to open the gate (X) by shining a laser into the button on the wall (#). Your goal is to enter the opened gate (O).

  Act 3️⃣ The Guards Gamble:  💣 Minesweeper - The player has to reveal the entire board and mark the correct position of mines 
  
  Act 4️⃣ Ghostly Pursuits:  👻 Pacman - A C++ implementation of the arcade classic Pacman, where the player has to collect all the pellets on the board while evading ghastly ghosts


  With your help, Sam successfully escapes the prison, but the journey is far from over. The truth he seeks lies beyond the walls of Alacran, and he now turns to you, the brave adventurer, to join him in unraveling the mystery that has ensnared his life 🕵️‍♂️. The story of Sam Riker will continue as you embark on a new chapter, where the stakes are higher, the challenges greater, and the truth more elusive than ever before. Are you ready to stand by his side and uncover the secrets that lie in the shadows? 

  NOTE: Each game has different input instructions, please follow the instructions on the screen for each game 💻💻

## Acknowledgements
  Our team would like to express our appreciation and gratitude to our professors, teaching assistants and above all, the players for making the development of this game not only possible but also immensely rewarding and worthwhile. 
  
  <br>

  Sources for ASCII Art implemented throughout the game:

  [https://patorjk.com/software/taag/](https://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20)
  
  [https://www.asciiart.eu/](https://www.asciiart.eu/)
