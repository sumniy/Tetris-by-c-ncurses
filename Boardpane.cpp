#include<ncurses.h>
#include "Pane.h"
#include "Boardpane.h"

BoardPane :: BoardPane(int x, int y, int w, int h) : Pane(x,y,w,h){}

void BoardPane :: draw(){
  init_pair(11, COLOR_YELLOW, COLOR_YELLOW);
  init_pair(12, COLOR_BLUE, COLOR_BLUE);
  init_pair(13, COLOR_GREEN, COLOR_GREEN);
  init_pair(14, COLOR_MAGENTA, COLOR_MAGENTA);
  init_pair(15, COLOR_RED, COLOR_RED);
  init_pair(16, COLOR_CYAN, COLOR_CYAN);
  init_pair(17, COLOR_WHITE, COLOR_WHITE);
  init_pair(5, COLOR_BLUE, COLOR_BLACK);
  wattron(win_, COLOR_PAIR(5));
  box(win_,0,0);
  for(int i=1;i<height_-1;i++)
    mvwhline(win_, i, 1, ACS_CKBOARD, width_-2);
  wattroff(win_, COLOR_PAIR(5));
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      if(curboard[j][k]==1)
      {
        wattron(win_, COLOR_PAIR(11));
        mvwaddch(win_,j,k,ACS_CKBOARD);
        wattroff(win_, COLOR_PAIR(11));
      }
      else if(curboard[j][k]==2)
      {
        wattron(win_, COLOR_PAIR(12));
        mvwaddch(win_,j,k,ACS_CKBOARD);
        wattroff(win_, COLOR_PAIR(12));
      }
      else if(curboard[j][k]==3)
      {
        wattron(win_, COLOR_PAIR(13));
        mvwaddch(win_,j,k,ACS_CKBOARD);
        wattroff(win_, COLOR_PAIR(13));
      }
      else if(curboard[j][k]==4)
      {
        wattron(win_, COLOR_PAIR(14));
        mvwaddch(win_,j,k,ACS_CKBOARD);
        wattroff(win_, COLOR_PAIR(14));
      }
      else if(curboard[j][k]==5)
      {
        wattron(win_, COLOR_PAIR(15));
        mvwaddch(win_,j,k,ACS_CKBOARD);
        wattroff(win_, COLOR_PAIR(15));
      }
      else if(curboard[j][k]==6)
      {
        wattron(win_, COLOR_PAIR(16));
        mvwaddch(win_,j,k,ACS_CKBOARD);
        wattroff(win_, COLOR_PAIR(16));
      }
      else if(curboard[j][k]==7)
      {
        wattron(win_, COLOR_PAIR(17));
        mvwaddch(win_,j,k,ACS_CKBOARD);
        wattroff(win_, COLOR_PAIR(17));
      }
    }
  }
  wrefresh(win_);
}

void BoardPane :: draw(int x[22][22]){
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      curboard[j][k]=x[j][k];
    }
  }
  init_pair(10, COLOR_RED, COLOR_RED);
  init_pair(5, COLOR_BLUE, COLOR_BLACK);
  wattron(win_, COLOR_PAIR(5));
  box(win_,0,0);
  for(int i=1;i<height_-1;i++)
    mvwhline(win_, i, 1, ACS_CKBOARD, width_-2);
  wattroff(win_, COLOR_PAIR(5));
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      if(curboard[j][k]==1)
      {
        wattron(win_, COLOR_PAIR(11));
        mvwaddch(win_,j,k,ACS_CKBOARD);
        wattroff(win_, COLOR_PAIR(11));
      }
      else if(curboard[j][k]==2)
      {
        wattron(win_, COLOR_PAIR(12));
        mvwaddch(win_,j,k,ACS_CKBOARD);
        wattroff(win_, COLOR_PAIR(12));
      }
      else if(curboard[j][k]==3)
      {
        wattron(win_, COLOR_PAIR(13));
        mvwaddch(win_,j,k,ACS_CKBOARD);
        wattroff(win_, COLOR_PAIR(13));
      }
      else if(curboard[j][k]==4)
      {
        wattron(win_, COLOR_PAIR(14));
        mvwaddch(win_,j,k,ACS_CKBOARD);
        wattroff(win_, COLOR_PAIR(14));
      }
      else if(curboard[j][k]==5)
      {
        wattron(win_, COLOR_PAIR(15));
        mvwaddch(win_,j,k,ACS_CKBOARD);
        wattroff(win_, COLOR_PAIR(15));
      }
      else if(curboard[j][k]==6)
      {
        wattron(win_, COLOR_PAIR(16));
        mvwaddch(win_,j,k,ACS_CKBOARD);
        wattroff(win_, COLOR_PAIR(16));
      }
      else if(curboard[j][k]==7)
      {
        wattron(win_, COLOR_PAIR(17));
        mvwaddch(win_,j,k,ACS_CKBOARD);
        wattroff(win_, COLOR_PAIR(17));
      }
    }
  }
  wrefresh(win_);
}
