#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unistd.h>
#include "minesweeper.h"

using namespace std;

void clearScreen() {
    usleep(200000); // Sleep for 0.2 seconds
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

char loc(int r, int c, vector<vector<char>>& board) {
    return board[r][c];
}

void printBoard(vector<vector<char>>& board, int size) {
    clearScreen();
    cout << setw(2) << ' ';
    for (int i = 0; i < size; i++) {
        cout << setw(4) << char('A' + i);
    }
    cout << '\n';
    cout << "   +";
    for (int i = 0; i < size; i++) {
        cout << "---+";
    }
    cout << '\n';

    for (int r = 0; r < size; r++) {
        cout << setw(3) << r << "|";
        for (int c = 0; c < size; c++) {
            char val = loc(r, c, board);
            if (val == '*') {
                cout << setw(3) << "*" << "|";
            } else {
                cout << setw(3) << board[r][c] << "|";
            }
        }
        cout << '\n';
        cout << "   +";
        for (int i = 0; i < size; i++) {
            cout << "---+";
        }
        cout << '\n';
    }
}

void updateValues(int rown, int col, vector<vector<char>>& board, int size) {
    for (int i = max(0, rown-1); i <= min(rown+1, size-1); i++) {
        for (int j = max(0, col-1); j <= min(col+1, size-1); j++) {
            if (board[i][j] != '*' && board[i][j] != 'F') {
                board[i][j]++;
            }
        }
    }
}

void placeBombs(vector<vector<char>>& board, int size, int numBombs) {
    while (numBombs > 0) {
        int row = rand() % size;
        int col = rand() % size;
        if (board[row][col] != '*' && board[row][col] != 'F') {
            board[row][col] = '*';
            updateValues(row, col, board, size);
            numBombs--;
        }
    }
}

bool checkWin(vector<vector<char>>& board, vector<vector<char>>& gridblank, int size) {
    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            if (board[r][c] != '*' && gridblank[r][c] == ' ') {
                return false;
            }
        }
    }
    return true;
}

bool chooseAndOpen(vector<vector<char>>& board, vector<vector<char>>& gridblank, int size) {
    char ch;
    int row, col;
    char action;
    cout << "Enter action ('o' for open, 'm' for mark) and position (e.g., oE4, mE4): ";
    cin >> action >> ch >> row;
    col = toupper(ch) - 'A';

    if (action == 'm' || action == 'M') {
        gridblank[row][col] = 'F';  // 'F' for flag
        printBoard(gridblank, size);
        return true;
    }

    if (board[row][col] == '*') {
        printBoard(board, size);
        cout << "Game Over!\n";
        return false;
    }

    gridblank[row][col] = board[row][col];
    printBoard(gridblank, size);
    return true;
}

bool playGame(int size) {
    vector<vector<char>> board(size, vector<char>(size, '0'));
    vector<vector<char>> gridblank(size, vector<char>(size, ' '));

    placeBombs(board, size, size + 1);
    printBoard(gridblank, size);

    bool gameContinue = true;
    while (gameContinue && !checkWin(board, gridblank, size)) {
        gameContinue = chooseAndOpen(board, gridblank, size);
    }
    return checkWin(board, gridblank, size);
}

bool startMinesweeper() {
    srand(time(NULL));
    int size = 3;
    bool won = playGame(size);
    if (won) {
        cout << "Congratulations! You won!" << endl;
        return true;
    } else {
        cout << "Try again!" << endl;
        return false;
    }
    //return 0;
}