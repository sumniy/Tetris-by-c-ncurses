#ifndef __PANE_H__
#define __PANE_H__
#include<ncurses.h>
#include<string>
using namespace std;

class Pane {
protected :
  int width_, height_;
  int x_, y_;
  WINDOW *win_;
public:
  int Score;
  virtual void SetScore(int s);
  virtual void setusername(string name);
  Pane(int x, int y, int w, int h);

  virtual ~Pane();
  virtual void draw();
};

#endif
