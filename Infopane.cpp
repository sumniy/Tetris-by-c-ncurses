#include<ncurses.h>
#include<string>
#include "Infopane.h"
#include "Pane.h"
using namespace std;

InfoPane :: InfoPane(int x, int y, int w, int h) : Pane(x,y,w,h){}

void InfoPane :: draw(){
  init_pair(2, COLOR_GREEN, COLOR_BLACK);
  wattron(win_, COLOR_PAIR(2));
  for(int i=0; i<height_;i++)
    mvwhline(win_, i, 0, ACS_CKBOARD, width_);
  mvwprintw(win_, 0, 0, "INFO PANE");
  mvwprintw(win_, 1, 0, username);
  wattroff(win_, COLOR_PAIR(2));
  wrefresh(win_);
}

void InfoPane :: setusername(string str){
  username=str.c_str();
}
