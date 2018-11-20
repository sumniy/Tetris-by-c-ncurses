#ifndef __BOARDNEXT_H__
#define __BOARDNEXT_H__
#include "Boardpane.h"
#include "Statpane.h"
#include "Block.h"

class NEXTBOARD {
public:
  NEXTBOARD();
  Block* o;
  int ran;
  int color;
  int Score=0;
  int currentboard[22][22];
  int nextboard[22][22];
  int y__,x__;
  void first();
  bool end();
  void setNextboard();
  void setcurrentboard();
  void setStartBlock(int rannum);
  void update();
  void delLine();
  void moveblock(int key);
  bool iscollisionL();
  bool iscollisionR();
  bool iscollisionD();
  void moveL();
  void moveR();
  void moveD();
};
#endif
