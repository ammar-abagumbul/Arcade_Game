#include <iostream>
#include "ncurses/curses.h"

using namespace std;

int main(){
    initscr();
    refresh();
    getch();
    endwin();
    return 0;
}
