#include <ncurses.h>

int main() 
{
  initscr();
  printw("WarEnsemble");
  refresh();
  getch();
  endwin();
}