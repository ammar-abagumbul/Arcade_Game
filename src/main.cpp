#include <iostream>
#include <ncurses/ncurses.h>

using namespace std;

int main(){
    initscr();
    refresh();
    //getch();
    endwin();
    return 0;
}
