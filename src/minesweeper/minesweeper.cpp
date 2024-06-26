#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <fstream>

#include "minesweeper.h"

#include "ncurses.h"

using namespace std;


void initCurses() {
    // Initialisisng ncurses for standalone testing

    initscr();              // Start curses mode
    raw();                  // Line buffering disabled, Pass on every char to me
    noecho();               // Don't echo input values
    keypad(stdscr, TRUE);   // Get special keys like arrows
    curs_set(0);            // Hide cursor
}


void reinitialiseCurses() {
    // Reinitialise ncurses after every game loop

    endwin();
    refresh();
    clear();
    initCurses();
}

void finishCurses() {
    // End curses mode to revert back to normal terminal mode
    endwin();
}


void clearFile(const string& filename){
    // Delete the saved file
    remove(filename.c_str());
}


void printCentered(int row, const string& text) {
    // Printing to center align

    int xPos = (COLS - text.length()) / 2; // Center text horizontally
    mvprintw(row, xPos, "%s", text.c_str());
}


void printBoard(const vector<vector<char>>& board, int size) {
    // Print the board

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


void saveGame(const vector<vector<char>>& board, const vector<vector<char>>& gridblank, int size) {
    // Save the game in a text file

    ofstream saveFile("./user_cache/minesweeper_save.txt");
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
    napms(500); // Pause for 0.5 seconds
}


bool loadGame(vector<vector<char>>& board, vector<vector<char>>& gridblank, int& size) {
    // Load the saved game 
    ifstream saveFile("./user_cache/minesweeper_save.txt");

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


bool checkWin(const vector<vector<char>>& board, const vector<vector<char>>& gridblank, int size) {
    // Check if the user has won
    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            if (board[r][c] != '*' && gridblank[r][c] == ' ') {
                return false;
            }
        }
    }

    return true;
}

int isValidAction(char action) {
    // Checks if the action is valid
    return (action == 'q' || action == 'Q' || action == 's' || action == 'S' || action == 'm' || action == 'M' || action == 'o' || action == 'O');
 }


bool chooseAndOpen(vector<vector<char>>& board, vector<vector<char>>& gridblank, int size) {
    // Asks for input and handles accordingly

    int row, col;
    char ch, action;
    char input[256];
    bool validInput = false;

    do {
        mvprintw(LINES - 1, 0, "Enter action (o-open, m-mark, sa0-save, qa0-quit) and position (e.g., oE4): ");
        echo();
        scanw("%s", input);
        noecho();

        if (strlen(input) != 3) {
            printCentered(0, "Invalid input. Please try again.");
            refresh();
            napms(500); // Wait before asking for input again
            continue; // Skip the rest of the loop and ask for input again
        }

        action = input[0];
        ch = input[1];
        col = toupper(ch) - 'A';
        row = input[2] - '0';

        if ((col < 0 || col > size-1 ) || (row < 0 || row > size-1 ) || !(isValidAction(action))){
            printCentered(0, "Invalid input. Please try again.");
            refresh();
            napms(500); // Wait before asking for input again
            continue; // Skip the rest of the loop and ask for input again
        }

        if (action == 's' || action == 'S') {
            saveGame(board, gridblank, size);
            validInput = true;
            return true;
        } else if (action == 'q' || action == 'Q') {
            printCentered(0, "Quitting game. Goodbye!");
            refresh();
            napms(500); // Wait before exit
            return false;
        }

        if (action == 'm' || action == 'M') {
            gridblank[row][col] = 'F'; // Flag the cell
            printBoard(gridblank, size);
            validInput = true;
        } else if (board[row][col] == '*') {
            printBoard(board, size);
            printCentered(0, "Game Over!");
            refresh();
            napms(500); // Display message before exit
            return false;
        } else {
            gridblank[row][col] = board[row][col];
            printBoard(gridblank, size);
            validInput = true;
        }
    } while (!validInput);

    return true;
}


void placeBombs(vector<vector<char>>& board, int size) {
    // Place the bombs randomly in the  empty cells of the grid

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


bool playGame(int size, bool newGame) {
    // Main game logic

    // If it is a new game, initialize the board and place bombs
    vector<vector<char>> board(size, vector<char>(size, '0'));
    vector<vector<char>> gridblank(size, vector<char>(size, ' '));

    if (newGame) {
        placeBombs(board, size);  // Place bombs equivalent to the size of the board for simplicity
    } else {
        // Attempt to load the game; if it fails, start a new game instead
        if (!loadGame(board, gridblank, size)) {
            printCentered(0, "No saved game found. Starting a new one.");
	    refresh();
            napms(500);  // Pause for 2 seconds to show the message
            placeBombs(board, size);
        }
    }
    
    printBoard(gridblank, size);

    // Game continues until a bomb is triggered or all non-bomb cells are revealed
    bool gameContinue = true;
    while (gameContinue && !checkWin(board, gridblank, size)) {
        gameContinue = chooseAndOpen(board, gridblank, size);
        refresh();
    }

    // After exiting the loop, check if the player has won
    if (checkWin(board, gridblank, size)) {
        printCentered(0, "Congratulations! You won!");
	refresh();
	napms(500);  // Show winning message for 2 seconds
        return true;
    } else {
        printCentered(0, "Game Over! Try again.");
	refresh();
	napms(500);  // Show game over message for 2 seconds
        return false;
    }
}


bool startMinesweeper() {
    // Sets up the game

    // initCurses();

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
                printCentered(15, "Enter new grid size (4-10): ");
                echo();
                scanw("%d", &gridSize);
                noecho();
                if (gridSize < 4 || gridSize > 10) {
                    gridSize = 5;
                    printCentered(16, "Invalid size! Grid size set to 5.");
		            refresh();
                    napms(500);
                }
                break;
            case 4:
                printCentered(0, "Exiting game.");
		        refresh();
                napms(500);
                break;
        }

        reinitialiseCurses();
	    clear();
    } while (choice != 4);

    // finishCurses();
    return gameResult;
}


std::vector<std::string> checkSaved(){
    // Returns if user has saved game

    vector<string> options;
    ifstream saveFile("./user_cache/minesweeper_save.txt");
    
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