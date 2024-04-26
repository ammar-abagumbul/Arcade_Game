#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cctype>
#include <cstdlib>
#include <ctime>
using namespace std;

void initboard(int (&board)[3][3]){
  int num = 1;
  for (int i = 0;i < 3; i++){
    for (int j = 0; j < 3; j++){
      if (i == 2 && j == 2)
        board[i][j] = 0;
      else{
        board[i][j] = num;
        num++;
      }
    }
  }
}

vector<string> possiblemovecheck(int board[3][3]){
  int emptyrow = 0, emptycol = 0;
  vector <string> possiblemoves;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      if (board[i][j] == 0){
        emptyrow = i;
        emptycol = j;
        break;
      }
    }
  }
  // Up check
  if (emptyrow < 2)
    possiblemoves.push_back("w");
  // Down check
  if (emptyrow > 0)
    possiblemoves.push_back("s");
  // Left check
  if (emptycol < 2 )
    possiblemoves.push_back("a");
  // Right check
  if (emptycol > 0)
    possiblemoves.push_back("d");
  
  return possiblemoves;
}

string lowerString(string input){
  string lowerstring = input;
  for (int i = 0; i < lowerstring.length(); i++){
    lowerstring[i] = tolower(lowerstring[i]);
  }
  return lowerstring;
}

bool checklegal(string input, vector <string> possiblemoves){
  vector <string> :: iterator itr;
  for (itr = possiblemoves.begin(); itr != possiblemoves.end(); itr++){
    if (input == *itr)
      return true;
  }
  return false;
}

void printboard(int board[3][3]){
  for (int i = 0;i < 3; i++){
    for (int k = 0; k < 3; k++){
      cout << "+-----";
    }
    cout << "+" << endl;
        
    for (int j = 0 ; j < 3; j++){
      cout << "| " << setw(2) << board[i][j] << "  "; 
    }
    cout << "|" << endl;
        
    for (int k = 0; k < 3; k++){
      cout << "+-----";
    }
      cout << "+" << endl;
    }
}

void tileSwap(int (&board)[3][3],int emptyrow,int emptycol,int tilerow,int tilecol){
  int temp;
  temp = board[emptyrow][emptycol];
  board[emptyrow][emptycol] = board[tilerow][tilecol];
  board[tilerow][tilecol] = temp;
}

void makemove(string input, int (&board)[3][3]){
  int emptyrow = 0, emptycol = 0;
  vector <string> possiblemoves;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      if (board[i][j] == 0){
        emptyrow = i;
        emptycol = j;
        break;
      }
    }
  }
  if (input == "w")
    tileSwap(board, emptyrow, emptycol, emptyrow + 1, emptycol);
  if (input == "s")
    tileSwap(board, emptyrow, emptycol, emptyrow - 1, emptycol);
  if (input == "a")
    tileSwap(board, emptyrow, emptycol, emptyrow, emptycol + 1);
  if (input == "d")
    tileSwap(board, emptyrow, emptycol, emptyrow, emptycol - 1);
}

void shuffleboard(int(&board)[3][3]){
  srand(time(NULL));
  for (int i = 0; i < 1000; i++){
    vector <string> possiblemoves = possiblemovecheck(board);
    int randind = rand() % possiblemoves.size();
    string shufflemove = possiblemoves[randind].c_str();
    makemove(shufflemove, board);
  }
}

bool checkonemove(int (&board)[3][3]){
  int onedboard[9];
  int oneind = 0;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      onedboard[oneind] = board[i][j];
      oneind++;
    }
  }

  int inversioncount = 0;
  for (int i = 0; i < 8; i++){
    for (int j = 1; j < 9; j++){
      if ((onedboard[i] > onedboard[j]) && (onedboard[i] != 0) && (onedboard[j] != 0))
        inversioncount += 1;
    }
  }
  if (inversioncount == 1)
    return true;
  else
    return false;
}

bool checkwin(int (&board)[3][3], bool solved){
  int solvedboard[3][3] = {{1,2,3}, {4,5,6}, {7,8,0}};
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      if (board[i][j] != solvedboard[i][j]){
        solved = false;
        return solved;
      }
    }
  }
  solved = true;
  return solved;
}

int main(){
  int board[3][3];
  vector <string> possiblemoves;
  int num = 1;
  bool solved = false;
  initboard(board);
  shuffleboard(board);
  solved = checkwin(board, solved);
  if (solved || checkonemove(board)){
    while ((solved != false) || (checkonemove(board) != false)){
      shuffleboard(board);
      solved = checkwin(board, solved);
      checkonemove(board);
    }
  }
  printboard (board);
  string input;
  while (cin >> input){
    input = lowerString(input);
    possiblemoves = possiblemovecheck(board);
    //quit game if player types q
    if (input == "q"){
      cout << "You are weak" << endl;
      break;
    }
    else if (!checklegal(input, possiblemoves)){
      cout << "Please make a valid input (w, a, s, d, q + legal move)" << endl;
    }
    else{
      makemove(input, board);
      printboard(board);
      solved = checkwin(board, solved);
    }
    if (solved == true){
      cout << "Well done, soldier" << endl;
      break;
    }
  }
  return 0;
}
