#ifndef __HELPPANE_H__
#define __HELPPANE_H__
#include "Pane.h"
using namespace std;

class HelpPane : public Pane {
public:
  HelpPane(int x, int y, int w, int h);
  void draw();
};
#endif
