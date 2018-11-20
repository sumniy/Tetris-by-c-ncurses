#ifndef __STATPANE_H__
#define __STATPANE_H__
#include "Pane.h"

class StatPane : public Pane {
public:
  int Score=0;
  StatPane(int x, int y, int w, int h);
  void draw();
  void SetScore(int s);
};
#endif
