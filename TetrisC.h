#ifndef __TETRISC_H__
#define __TETRISC_H__
#include "Pane.h"
#include "Infopane.h"
#include "Helppane.h"
#include "Nextpane.h"
#include "Boardpane.h"
#include "Statpane.h"

class Tetris {
  Pane *helpPane_, *nextPane_ ,*boardPane_;
public:
  Pane *statPane_,*infoPane_;
  Tetris();
  ~Tetris();
  void play();

  void updateScreen();
};
#endif
