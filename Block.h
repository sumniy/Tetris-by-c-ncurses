#ifndef __BLOCK_H__
#define __BLOCK_H__
#include "Boardnext.h"

class Block{
protected:
  int state;
public:
  virtual void draw(int board[22][22],int y,int x);
  virtual void rotate(int board[22][22], int y,int x);
};

class O_Block : public Block{
public:
  virtual void draw(int board[22][22],int y,int x);
  virtual void rotate(int board[22][22], int y,int x);
};

class L_Block : public Block{
public:
  virtual void draw(int board[22][22],int y,int x);
  virtual void rotate(int board[22][22], int y,int x);
};

class J_Block : public Block{
public:
  virtual void draw(int board[22][22],int y,int x);
  virtual void rotate(int board[22][22], int y,int x);
};

class S_Block : public Block{
public:
  virtual void draw(int board[22][22],int y,int x);
  virtual void rotate(int board[22][22], int y,int x);
};

class Z_Block : public Block{
public:
  virtual void draw(int board[22][22],int y,int x);
  virtual void rotate(int board[22][22], int y,int x);
};

class T_Block : public Block{
public:
  virtual void draw(int board[22][22],int y,int x);
  virtual void rotate(int board[22][22], int y,int x);
};

class I_Block : public Block{
public:
  virtual void draw(int board[22][22],int y,int x);
  virtual void rotate(int board[22][22], int y,int x);
};
#endif
