#include "Pane.h"
#include "Boardpane.h"
#include "Boardnext.h"
#include "Block.h"
#include "Statpane.h"
#include <stdlib.h>
NEXTBOARD :: NEXTBOARD(){
  y__=1;
  x__=9;
  ran=rand();
  ran=ran%7;
  first();
  setNextboard();
  setStartBlock(ran);
  setcurrentboard();
  update();
}
void NEXTBOARD :: moveblock(int key){
  while(1){
    switch(key)
    {
      case 'r':
      if(!iscollisionR())
        moveR();
      break;
      case KEY_RIGHT:
        if(!iscollisionR())
          moveR();
        break;
      case KEY_LEFT:
      if(!iscollisionL())
        moveL();
        break;
      case 'l':
      if(!iscollisionL())
        moveL();
        break;
      case KEY_DOWN:
      if(!iscollisionD())
        moveD();
        break;
      case 'g':
      if(!iscollisionD())
        moveD();
        break;
      case ' ':
        while(1){
          if(!iscollisionD()){
            moveD();
            continue;
          }
          break;
        }
        break;
      case 'd':
      while(1){
        if(!iscollisionD()){
          moveD();
          continue;
        }
        break;
      }
      break;
      case KEY_UP:
        o->rotate(nextboard,y__,x__);
        break;
      case 't':
        o->rotate(nextboard,y__,x__);
        break;
      default:
        break;
    }
    break;
  }
  setcurrentboard();
  if( (iscollisionL()&&iscollisionR()&&iscollisionD()) || iscollisionD() )
  {
    delLine();
    if(end())
    {
      mvprintw(22, 36, "Game Over");
      getch();
      endwin();
      exit(0);
    }
    update();
    setStartBlock(ran);
  }
  setcurrentboard();
  update();
}
void NEXTBOARD :: first(){
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      currentboard[j][k]=0;
      if(j==0 || j==21)
        currentboard[j][k]=9;
      if(k==0 || k==21)
        currentboard[j][k]=9;
    }
  }
}
bool NEXTBOARD :: end(){
  for(int k=0;k<22;k++)
  {
    if(nextboard[1][k]==8)
      if(iscollisionD())
        return true;
  }
  return false;
}
void NEXTBOARD :: setNextboard(){
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      nextboard[j][k]=currentboard[j][k];
    }
  }
}
void NEXTBOARD :: setcurrentboard(){
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      currentboard[j][k]=nextboard[j][k];
    }
  }
}
void NEXTBOARD :: update(){
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      if(currentboard[j][k]==8)
        currentboard[j][k]=color;
    }
  }
}

void NEXTBOARD :: setStartBlock(int rannum){
  y__=1;
  x__=9;
  setNextboard();
  if(rannum==0)
    {o = new O_Block;
    color=1;}
  else if(rannum==1)
    {o = new L_Block;
    color=2;}
  else if(rannum==2)
    {o = new J_Block;
    color=3;}
  else if(rannum==3)
    {o = new S_Block;
    color=4;}
  else if(rannum==4)
    {o = new Z_Block;
    color=5;}
  else if(rannum==5)
    {o = new T_Block;
    color=6;}
  else if(rannum==6)
    {o = new I_Block;
    color=7;}
  o->draw(nextboard,y__,x__);
  ran=rand();
  ran=ran%7;
}

bool NEXTBOARD :: iscollisionL(){
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      if(nextboard[j][k]==8)
      {
        if(k==1)
          return true;
        if( (nextboard[j][k-2]>=1 && nextboard[j][k-2]<=7) || nextboard[j][k-2]==9)
          return true;
      }
    }
  }
  return false;
}
bool NEXTBOARD :: iscollisionR(){
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      if(nextboard[j][k]==8)
      {
        if(k==20)
          return true;
        if( (nextboard[j][k+2]>=1 && nextboard[j][k+2]<=7) || nextboard[j][k+2]==9)
          return true;
      }
    }
  }
  return false;
}
bool NEXTBOARD :: iscollisionD(){
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      if(nextboard[j][k]==8)
      {
        if(j==20)
          return true;
        if( (nextboard[j+1][k]>=1 && nextboard[j+1][k]<=7) || nextboard[j+1][k]==9)
          return true;
      }
    }
  }
  return false;
}

void NEXTBOARD :: moveL(){
  int tempboard[22][22];
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      tempboard[j][k]=0;
    }
  }
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      if(nextboard[j][k]==8)
      {
        tempboard[j][k-2]=8;
        nextboard[j][k]=0;
      }
    }
  }
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      if(tempboard[j][k]==8)
      {
        nextboard[j][k]=8;
      }
    }
  }
  x__-=2;
}
void NEXTBOARD :: moveR(){
  int tempboard[22][22];
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      tempboard[j][k]=0;
    }
  }
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      if(nextboard[j][k]==8)
      {
        tempboard[j][k+2]=8;
        nextboard[j][k]=0;
      }
    }
  }
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      if(tempboard[j][k]==8)
      {
        nextboard[j][k]=8;
      }
    }
  }
  x__+=2;
}
void NEXTBOARD :: moveD(){
  int tempboard[22][22];
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      tempboard[j][k]=0;
    }
  }
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      if(nextboard[j][k]==8)
      {
        tempboard[j+1][k]=8;
        nextboard[j][k]=0;
      }
    }
  }
  for(int j=0;j<22;j++)
  {
    for(int k=0;k<22;k++)
    {
      if(tempboard[j][k]==8)
      {
        nextboard[j][k]=8;
      }
    }
  }
  y__++;
}

void NEXTBOARD :: delLine(){
  int temp=0;
  while(temp<21)
  {
    for(int j=20;j>0;j--)
    {
      int Checkline=0;
      for(int k=1;k<21;k++)
      {
        if(nextboard[j][k]!=0)
          Checkline++;
      }
      if(Checkline==20)
      {
        Score++;
        for(int o=j;o>1;o--){
          for(int k=1;k<21;k++)
          {
            nextboard[o][k]=currentboard[o-1][k];
          }
        }
        setcurrentboard();
      }
    }
    temp++;
  }
}
