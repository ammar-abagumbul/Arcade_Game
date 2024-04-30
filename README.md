
# Project Title

# Menu
    i. Team Members
    ii. How to Play
    iii. Features Implemented
    iv. Description
    v. Non-standard Libraries

# Team Members


[Aosaf Ershad Chowdhury](https://github.com/aosaf-e-c) (3036259011)

[Sheik Mahmood Afif](https://github.com/mahmoodafif) (3036225230)

[Abagumbul Ammar Amin](https://github.com/ammar-abagumbul) (3036259243)

[Ignatius De Loyola Dominique Japar](https://github.com/iloevera) (3036184072)

[Ali Musaddiq](https://github.com/Musaddiq101) (3036259011)


# How to play


```bash
  make game
```
```bash
  ./game
```
- Press Enter to start
- Press 1 to start a New Game
- Press 2 to Load game
- Press 3 to see Credits
- Press 4 to Exit
- Tip: Dont forget to save after each game!



## External Libraries

Our terminal game incorporates the ncurses library to elevate the visual experience for players. By leveraging the capabilities of ncurses, we enhance the aesthetics and user interface within the terminal environment. The library enables us to create interactive gameplay with visually appealing elements, such as colorful and dynamic graphics, smooth animations, and intuitive user controls. With the help of ncurses, we strive to deliver an immersive and enjoyable gaming experience right in the command line interface.
    
## Features Implemented

* Generation of random game sets or events:
  - Sliding Block Puzzle: Shuffles the tiles in random order every game, so the board is random every time. Check the shuffleboard() function in board.cpp
  - Minesweeper: The positions of bombs are generated randomly, leading to a random game every time. Check the placeBombs() function in minesweeper.cpp
  - Bokosan:
  - Pacman: Ghost movement alternates between randomn behavior and path tracking algorithm throughout the game
    
* Data structures for storing game status
  - Pacman: 
    - set: for storing pallets and for checking if player has eaten any pallets
    - vector: for storing Nodes in the path finding implementation
    - arrays: 1D array to store Ghosts and 2D array to store maze representation
  - Minesweeper: Uses vectors to store the board bombs and flags

* Dynamic memory management
  - Pacman:
    - Navigator uses dynamically allocated arrays of string types to pass information between game and menu window
  - Minesweeper: Uses vectors to store the biard bombs and flags

* File input/output
  - Pacman: 
    - Reads map.txt to initialize game map and writes to savedGame.txt to save player's progress
  - Sliding Block Puzzle:
  - Minesweeper: The player can save their progress in a .txt file and load it later from it
  - Bokosan: The maps for each level of Bokosan is read from .txt files
  

* Program codes in multiple file
  - The header files are located in the "include" directory, while the corresponding implementation files (cpp files) are placed in the "src" directory. Each sub game has its own dedicated set of files. As for Pacman, its functionality and logic are distributed across multiple classes that collectively define its behavior and features.

* Proper indentation and naming styles
  - Proper indentation of 2 spaces is used
  - Functions are named appropriately and clearly in order to avoid misunderstanding and for easy location if changes are required 

* In-code documentation
  - Our code is well-organized with comments explaining each function, so that we can keep up with the code easily.

## Description
