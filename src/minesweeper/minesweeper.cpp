#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include "minesweeper.h"
#include "ncurses.h"
using namespace std;

//initialisisng ncurses
void initCurses() {
    initscr();              // Start curses mode
    raw();               // Line buffering disabled, Pass on every char to me
    noecho();               // Don't echo input values
    keypad(stdscr, TRUE);   // Get special keys like arrows
    curs_set(0);            // Hide cursor
}

//to reinitialise ncurses after every game loop
void reinitialiseCurses() {
    endwin();
    refresh();
    clear();
    initCurses();
	
}

void finishCurses() {
    endwin(); // End curses mode to revert back to normal terminal mode
}

//delete the saved file
void clearFile(const string& filename){
    remove(filename.c_str());
}

//printing to center align
void printCentered(int row, const string& text) {
    int xPos = (COLS - text.length()) / 2; // Center text horizontally
    mvprintw(row, xPos, "%s", text.c_str());
}

//print the board
void printBoard(const vector<vector<char>>& board, int size) {
    clear(); // Clear the screen
    int start_row = (LINES - size * 2) / 2;
    int start_col = (COLS - size * 4) / 2;

    // Print column labels
    mvprintw(start_row - 1, start_col, "     ");
    for (int i = 0; i < size; i++) {
        printw("%4c", 'A' + i);
    }
    printw("\n");
    mvprintw(start_row + 1 * 2 + 2, start_col + 4, "   +");
    for (int i =0; i < size; i++){
	printw("---+");
    }
    printw("\n");
    // Print rows
    for (int r = 0; r < size; r++) {
        mvprintw(start_row + r * 2 + 1, start_col + 4, "%2d |", r);
        for (int c = 0; c < size; c++) {
            printw("%3c|", board[r][c]);
        }
        printw("\n");
        mvprintw(start_row + r * 2 + 2, start_col + 4, "   +");
        for (int i = 0; i < size; i++) {
            printw("---+");
        }
        printw("\n");
    }
    refresh();
}


//save the game in a text file
void saveGame(const vector<vector<char>>& board, const vector<vector<char>>& gridblank, int size) {
    ofstream saveFile("minesweeper_save.txt");
    saveFile << size << '\n';
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            saveFile << board[i][j];
        }
        saveFile << '\n';
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            saveFile << gridblank[i][j];
        }
        saveFile << '\n';
    }
    saveFile.close();
    printCentered(0, "Game saved successfully.");
    refresh();
    napms(1000); // Pause for 2 seconds
}


// load the saved game 
bool loadGame(vector<vector<char>>& board, vector<vector<char>>& gridblank, int& size) {
    ifstream saveFile("minesweeper_save.txt");
    if (!saveFile.is_open()) {
        return false;
    }
    saveFile >> size; // Read the size of the board
    board.resize(size, vector<char>(size, '0'));
    gridblank.resize(size, vector<char>(size, ' '));

    char val;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            saveFile >> noskipws >> val;
            if (val == '\n') saveFile >> noskipws >> val;
            board[i][j] = val;
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            saveFile >> noskipws >> val;
            if (val == '\n') saveFile >> noskipws >> val;
            gridblank[i][j] = val;
        }
    }

    saveFile.close();
    return true;
}

//check if the user wins or not
bool checkWin(const vector<vector<char>>& board, const vector<vector<char>>& gridblank, int size) {
    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            if (board[r][c] != '*' && gridblank[r][c] == ' ') {
                return false;
            }
        }
    }
    return true;
}


//ask for inout and handle it 
bool chooseAndOpen(vector<vector<char>>& board, vector<vector<char>>& gridblank, int size) {
    int row, col;
    char ch, action;
    mvprintw(LINES - 1, 0, "Enter action (o-open, m-mark, s-save, q-quit) and position (e.g., oE4): ");
    echo();
    scanw("%c%c%d", &action, &ch, &row);
    noecho();
    col = toupper(ch) - 'A';

    if (action == 's' || action == 'S') {
        saveGame(board, gridblank, size);
        return true;
    } else if (action == 'q' || action == 'Q') {
        printCentered(0, "Quitting game. Goodbye!");
	refresh();
        napms(1000); // Wait before exit
        return false;
    }

    if (action == 'm' || action == 'M') {
        gridblank[row][col] = 'F'; // Flag the cell
        printBoard(gridblank, size);
        return true;
    } else if (board[row][col] == '*') {
        printBoard(board, size);
        printCentered(0, "Game Over!");
	refresh();
        napms(1000); // Display message before exit
        return false;
    } else {
        gridblank[row][col] = board[row][col];
        printBoard(gridblank, size);
        return true;
    }
}

//place the bombs randomly in the  empty cells of the grid
void placeBombs(vector<vector<char>>& board, int size) {
    srand(time(NULL));
    int bombs = size; // Number of bombs is equal to the grid size
    while (bombs > 0) {
        int r = rand() % size;
        int c = rand() % size;
        if (board[r][c] == '0') { // Ensure we don't place a bomb on an already placed bomb
            board[r][c] = '*';
            for (int di = -1; di <= 1; di++) {
                for (int dj = -1; dj <= 1; dj++) {
                    int ni = r + di, nj = c + dj;
                    if (ni >= 0 && ni < size && nj >= 0 && nj < size && board[ni][nj] != '*') {
                        board[ni][nj]++; // Increment surrounding cells
                    }
                }
            }
            bombs--;
        }
    }
}

//the game logic
bool playGame(int size, bool newGame) {
    // If it's a new game, initialize the board and place bombs
    vector<vector<char>> board(size, vector<char>(size, '0'));
    vector<vector<char>> gridblank(size, vector<char>(size, ' '));
    if (newGame) {
        placeBombs(board, size);  // Place bombs equivalent to the size of the board for simplicity
    } else {
        // Attempt to load the game; if it fails, start a new game instead
        if (!loadGame(board, gridblank, size)) {
            printCentered(0, "No saved game found. Starting a new one.");
	    refresh();
            napms(1000);  // Pause for 2 seconds to show the message
            placeBombs(board, size);
        }
    }
    
    printBoard(gridblank, size);

    // Game continues until a bomb is triggered or all non-bomb cells are revealed
    bool gameContinue = true;
    while (gameContinue && !checkWin(board, gridblank, size)) {
        gameContinue = chooseAndOpen(board, gridblank, size);
    }

    // After exiting the loop, check if the player has won
    if (checkWin(board, gridblank, size)) {
        printCentered(0, "Congratulations! You won!");
	refresh();
	napms(1000);  // Show winning message for 2 seconds
        return true;
    } else {
        printCentered(0, "Game Over! Try again.");
	refresh();
	napms(1000);  // Show game over message for 2 seconds
        return false;
    }
}


//to setuo the game and main menu
bool startMinesweeper() {
    initCurses();

    int choice, gridSize = 5;  // Default grid size
    vector<vector<char>> board(gridSize, vector<char>(gridSize, '0'));
    vector<vector<char>> gridblank(gridSize, vector<char>(gridSize, ' '));
    bool gameResult = false;

    do {
        clear();
	refresh();
        printCentered(5, "Minesweeper Menu");
        printCentered(7, "1. Start New Game");
        printCentered(8, "2. Resume Game");
        printCentered(9, "3. Change Grid Size (Current: " + to_string(gridSize) + ")");
        printCentered(10, "4. Exit");
        printCentered(12, "Enter your choice: ");
        refresh();
	timeout(-1);
        echo();
        move(13, (COLS - 3) / 2);  // Move cursor to correct position
        scanw("%d", &choice);
        noecho();
	flushinp();

        switch (choice) {
            case 1:
                gameResult = playGame(gridSize, true);
		reinitialiseCurses();
		
                break;
            case 2:
                gameResult = playGame(gridSize, false);
		reinitialiseCurses();
                break;
            case 3:
                printCentered(15, "Enter new grid size (3-10): ");
                echo();
                scanw("%d", &gridSize);
                noecho();
                if (gridSize < 3 || gridSize > 10) {
                    gridSize = 5;
                    printCentered(16, "Invalid size! Grid size set to 5.");
		    refresh();
                    napms(1000);
                }
                break;
            case 4:
                printCentered(0, "Exiting game.");
		refresh();
                napms(1000);
                break;
        }
	clear();
    } while (choice != 4);

    finishCurses();
    return gameResult;
}

//to return if user has saved game or not
vector<string> checkSaved(){
    vector<string> options;
    ifstream saveFile("minesweeper_save.txt");
    if (!saveFile.is_open()) {
        options.push_back("New Game");
        options.push_back("Exit");
        options.push_back("0");
        return options;
    }
    else{
        saveFile.close();
        options.push_back("Resume");
        options.push_back("New Game");
        options.push_back("Exit");
        options.push_back("0");
        return options;
    }    
} 