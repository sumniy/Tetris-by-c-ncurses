#ifndef __BOARDPANE_H__
#define __BOARDPANE_H__
#include "Pane.h"

class BoardPane : public Pane {
public:
  BoardPane(int x, int y, int w, int h);
  int curboard[20+2][20+2];
  void draw();
  void draw(int x[22][22]);
};
#endif
