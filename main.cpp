#include<iostream>
#include<fstream>
#include<ctime>
#include<stdlib.h>
#include<string>
#include<time.h>
#include "Pane.h"
#include "Infopane.h"
#include "Helppane.h"
#include "Nextpane.h"
#include "Boardpane.h"
#include "Statpane.h"
#include "TetrisC.h"
#include "Boardnext.h"
using namespace std;
//게임에 사용될 블록 클래스를 정의한다.
void delay(clock_t n)
{
  clock_t start = clock();
  while(clock() - start < n);
}

int main(int argc, char * argv[])
{
  ifstream inStream;
  if(argc > 1)
    inStream.open("input.txt");
  bool isGameOver = false;
  int cur_key;
  char finput;
  string name;
  int seed;
  if(argc > 1){
    inStream>>name>>seed;
    srand(seed);
  }
  else{
    cout<<"테트리스 게임을 시작합니다.\n사용자의 이름을 입력하세요.\n이름: ";
    getline(cin, name);
    srand(time(NULL));
  }
  initscr();
  keypad(stdscr,true);
  Tetris t;
  t.infoPane_->setusername(name);
  t.play();
  BoardPane NB(30, 0, 22, 22);
  NEXTBOARD tete;
  curs_set(0);
  noecho();
  NB.draw(tete.currentboard);
  while(!isGameOver)
  {
    if (argc > 1){
      delay(150000);
      inStream>>finput;
      cur_key=finput;
    }
    else{
      cur_key = getch();
    }
    if(cur_key=='q')
      isGameOver = true;
    else{
      tete.moveblock(cur_key);
      NB.draw(tete.currentboard);
      t.statPane_->SetScore(tete.Score);
      t.statPane_->draw();
    }
  }
  if (1){
    mvprintw(22, 28, "Press any key to exit Tetris");
    getch();
  }
  endwin();
  return 0;
}
