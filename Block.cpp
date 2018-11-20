#include "Boardnext.h"
#include "Block.h"

void Block::draw(int board[22][22],int y, int x){};
void Block::rotate(int board[22][22],int y, int x){};

void O_Block::draw(int board[22][22],int y, int x){
  state=0;
  board[y][x]=8;
  board[y][x+1]=8;
  board[y][x+2]=8;
  board[y][x+3]=8;
  board[y+1][x]=8;
  board[y+1][x+1]=8;
  board[y+1][x+2]=8;
  board[y+1][x+3]=8;
};
void O_Block::rotate(int board[22][22],int y, int x){

};

void L_Block::draw(int board[22][22],int y, int x){
  state=0;
  board[y][x+2]=8;
  board[y][x+3]=8;
  board[y+1][x+2]=8;
  board[y+1][x+3]=8;
  board[y+2][x+2]=8;
  board[y+2][x+3]=8;
  board[y+2][x+4]=8;
  board[y+2][x+5]=8;
};
void L_Block::rotate(int board[22][22],int y, int x){
  if(state==0){
    if(board[y][x+4]==0 && board[y+1][x]==0 && board[y+1][x+4]==0)
    {
      board[y][x+4]=8;
      board[y][x+5]=8;
      board[y+1][x]=8;
      board[y+1][x+1]=8;
      board[y+1][x+4]=8;
      board[y+1][x+5]=8;
      board[y][x+2]=0;
      board[y][x+3]=0;
      board[y+2][x+2]=0;
      board[y+2][x+3]=0;
      board[y+2][x+4]=0;
      board[y+2][x+5]=0;
      state++;
      state=state%4;
    }
  }
  else if(state==1){
    if(board[y][x]==0 && board[y][x+2]==0 && board[y+2][x+2]==0)
    {
      board[y][x]=8;
      board[y][x+1]=8;
      board[y][x+2]=8;
      board[y][x+3]=8;
      board[y+2][x+2]=8;
      board[y+2][x+3]=8;
      board[y][x+4]=0;
      board[y][x+5]=0;
      board[y+1][x+4]=0;
      board[y+1][x+5]=0;
      board[y+1][x]=0;
      board[y+1][x+1]=0;
      state++;
      state=state%4;
    }
  }
  else if(state==2){
    if(board[y+1][x]==0 && board[y+2][x]==0 && board[y+1][x+4]==0)
    {
      board[y+1][x]=8;
      board[y+1][x+1]=8;
      board[y+2][x]=8;
      board[y+2][x+1]=8;
      board[y+1][x+4]=8;
      board[y+1][x+5]=8;
      board[y][x]=0;
      board[y][x+1]=0;
      board[y][x+2]=0;
      board[y][x+3]=0;
      board[y+2][x+2]=0;
      board[y+2][x+3]=0;
      state++;
      state=state%4;
    }
  }
  else if(state==3){
    if(board[y][x+2]==0 && board[y+2][x+2]==0 && board[y+2][x+4]==0)
    {
      board[y][x+2]=8;
      board[y][x+3]=8;
      board[y+2][x+2]=8;
      board[y+2][x+3]=8;
      board[y+2][x+4]=8;
      board[y+2][x+5]=8;
      board[y+1][x]=0;
      board[y+1][x+1]=0;
      board[y+2][x]=0;
      board[y+2][x+1]=0;
      board[y+1][x+4]=0;
      board[y+1][x+5]=0;
      state++;
      state=state%4;
    }
  }
};

void J_Block::draw(int board[22][22],int y, int x){
  state=0;
  board[y][x+2]=8;
  board[y][x+3]=8;
  board[y+1][x+2]=8;
  board[y+1][x+3]=8;
  board[y+2][x+2]=8;
  board[y+2][x+3]=8;
  board[y+2][x]=8;
  board[y+2][x+1]=8;
};
void J_Block::rotate(int board[22][22],int y, int x){
  if(state==0){
    if(board[y+2][x+4]==0 && board[y+1][x]==0 && board[y+1][x+4]==0)
    {
      board[y+2][x+4]=8;
      board[y+2][x+5]=8;
      board[y+1][x]=8;
      board[y+1][x+1]=8;
      board[y+1][x+4]=8;
      board[y+1][x+5]=8;
      board[y][x+2]=0;
      board[y][x+3]=0;
      board[y+2][x+2]=0;
      board[y+2][x+3]=0;
      board[y+2][x]=0;
      board[y+2][x+1]=0;
      state++;
      state=state%4;
    }
  }
  else if(state==1){
    if(board[y][x+4]==0 && board[y][x+2]==0 && board[y+2][x+2]==0)
    {
      board[y][x+4]=8;
      board[y][x+5]=8;
      board[y][x+2]=8;
      board[y][x+3]=8;
      board[y+2][x+2]=8;
      board[y+2][x+3]=8;
      board[y+2][x+4]=0;
      board[y+2][x+5]=0;
      board[y+1][x+4]=0;
      board[y+1][x+5]=0;
      board[y+1][x]=0;
      board[y+1][x+1]=0;
      state++;
      state=state%4;
    }
  }
  else if(state==2){
    if(board[y+1][x]==0 && board[y][x]==0 && board[y+1][x+4]==0)
    {
      board[y+1][x]=8;
      board[y+1][x+1]=8;
      board[y][x]=8;
      board[y][x+1]=8;
      board[y+1][x+4]=8;
      board[y+1][x+5]=8;
      board[y][x+4]=0;
      board[y][x+5]=0;
      board[y][x+2]=0;
      board[y][x+3]=0;
      board[y+2][x+2]=0;
      board[y+2][x+3]=0;
      state++;
      state=state%4;
    }
  }
  else if(state==3){
    if(board[y][x+2]==0 && board[y+2][x+2]==0 && board[y+2][x]==0)
    {
      board[y][x+2]=8;
      board[y][x+3]=8;
      board[y+2][x+2]=8;
      board[y+2][x+3]=8;
      board[y+2][x]=8;
      board[y+2][x+1]=8;
      board[y+1][x]=0;
      board[y+1][x+1]=0;
      board[y][x]=0;
      board[y][x+1]=0;
      board[y+1][x+4]=0;
      board[y+1][x+5]=0;
      state++;
      state=state%4;
    }
  }
};

void S_Block::draw(int board[22][22],int y, int x){
  state=0;
  board[y][x+2]=8;
  board[y][x+3]=8;
  board[y+1][x+2]=8;
  board[y+1][x+3]=8;
  board[y+1][x+4]=8;
  board[y+1][x+5]=8;
  board[y+2][x+4]=8;
  board[y+2][x+5]=8;
};
void S_Block::rotate(int board[22][22],int y, int x){
  if(state==0){
    if(board[y][x+4]==0 && board[y+1][x]==0)
    {
      board[y][x+4]=8;
      board[y][x+5]=8;
      board[y+1][x]=8;
      board[y+1][x+1]=8;
      board[y+1][x+4]=0;
      board[y+1][x+5]=0;
      board[y+2][x+4]=0;
      board[y+2][x+5]=0;
      state++;
      state=state%2;
    }
  }
  else if(state==1){
    if(board[y+1][x+4]==0 && board[y+2][x+4]==0)
    {
      board[y+1][x+4]=8;
      board[y+1][x+5]=8;
      board[y+2][x+4]=8;
      board[y+2][x+5]=8;
      board[y][x+4]=0;
      board[y][x+5]=0;
      board[y+1][x]=0;
      board[y+1][x+1]=0;
      state++;
      state=state%2;
    }
  }
};

void Z_Block::draw(int board[22][22],int y, int x){
  state=0;
  board[y][x+2]=8;
  board[y][x+3]=8;
  board[y+1][x+2]=8;
  board[y+1][x+3]=8;
  board[y+1][x]=8;
  board[y+1][x+1]=8;
  board[y+2][x]=8;
  board[y+2][x+1]=8;
};
void Z_Block::rotate(int board[22][22],int y, int x){
  if(state==0){
    if(board[y][x]==0 && board[y+1][x+4]==0)
    {
      board[y][x]=8;
      board[y][x+1]=8;
      board[y+1][x+4]=8;
      board[y+1][x+5]=8;
      board[y+1][x]=0;
      board[y+1][x+1]=0;
      board[y+2][x]=0;
      board[y+2][x+1]=0;
      state++;
      state=state%2;
    }
  }
  else if(state==1){
    if(board[y+1][x]==0 && board[y+2][x]==0)
    {
      board[y+1][x]=8;
      board[y+1][x+1]=8;
      board[y+2][x]=8;
      board[y+2][x+1]=8;
      board[y][x]=0;
      board[y][x+1]=0;
      board[y+1][x+4]=0;
      board[y+1][x+5]=0;
      state++;
      state=state%2;
    }
  }
};

void T_Block::draw(int board[22][22],int y, int x){
  state=0;
  board[y][x+2]=8;
  board[y][x+3]=8;
  board[y+1][x]=8;
  board[y+1][x+1]=8;
  board[y+1][x+2]=8;
  board[y+1][x+3]=8;
  board[y+1][x+4]=8;
  board[y+1][x+5]=8;
};
void T_Block::rotate(int board[22][22],int y, int x){
  if(state==0){
    if(board[y+2][x+2]==0)
    {
      board[y+2][x+2]=8;
      board[y+2][x+3]=8;
      board[y+1][x+4]=0;
      board[y+1][x+5]=0;
      state++;
      state=state%4;
    }
  }
  else if(state==1){
    if(board[y+1][x+4]==0)
    {
      board[y+1][x+4]=8;
      board[y+1][x+5]=8;
      board[y][x+2]=0;
      board[y][x+3]=0;
      state++;
      state=state%4;
    }
  }
  else if(state==2){
    if(board[y][x+2]==0)
    {
      board[y][x+2]=8;
      board[y][x+3]=8;
      board[y+1][x]=0;
      board[y+1][x+1]=0;
      state++;
      state=state%4;
    }
  }
  else if(state==3){
    if(board[y+1][x]==0)
    {
      board[y+1][x]=8;
      board[y+1][x+1]=8;
      board[y+2][x+2]=0;
      board[y+2][x+3]=0;
      state++;
      state=state%4;
    }
  }
};

void I_Block::draw(int board[22][22],int y, int x){
  state=0;
  board[y][x+2]=8;
  board[y][x+3]=8;
  board[y+1][x+2]=8;
  board[y+1][x+3]=8;
  board[y+2][x+2]=8;
  board[y+2][x+3]=8;
  board[y+3][x+2]=8;
  board[y+3][x+3]=8;
};
void I_Block::rotate(int board[22][22],int y, int x){
  if(state==0){
    if(board[y+1][x]==0 && board[y+1][x+4]==0 && board[y+1][x+6]==0)
    {
      board[y+1][x]=8;
      board[y+1][x+1]=8;
      board[y+1][x+4]=8;
      board[y+1][x+5]=8;
      board[y+1][x+6]=8;
      board[y+1][x+7]=8;
      board[y][x+2]=0;
      board[y][x+3]=0;
      board[y+2][x+2]=0;
      board[y+2][x+3]=0;
      board[y+3][x+2]=0;
      board[y+3][x+3]=0;
      state++;
      state=state%2;
    }
  }
  else if(state==1){
    if(board[y][x+2]==0 && board[y+2][x+2]==0 && board[y+3][x+2]==0)
    {
      board[y][x+2]=8;
      board[y][x+3]=8;
      board[y+2][x+2]=8;
      board[y+2][x+3]=8;
      board[y+3][x+2]=8;
      board[y+3][x+3]=8;
      board[y+1][x]=0;
      board[y+1][x+1]=0;
      board[y+1][x+4]=0;
      board[y+1][x+5]=0;
      board[y+1][x+6]=0;
      board[y+1][x+7]=0;
      state++;
      state=state%2;
    }
  }
};
