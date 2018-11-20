#ifndef __INFOPANE_H__
#define __INFOPANE_H__
#include "Pane.h"
#include<string>
using namespace std;

class InfoPane : public Pane {
public:
  const char * username;
  InfoPane(int x, int y, int w, int h);
  void draw();
  void setusername(string name);
};
#endif
