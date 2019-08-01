#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
  int gd,gm,x,y,rad;
  gd=DETECT;
  initgraph(&gd, &gm,"C:\\TC\\bgi");

  printf("Enter Values: \n");
  scanf("%d%d",&x,&y);//250 200

  setcolor(RED);
  circle(x,y,10);
  setcolor(GREEN);
  circle(x,y,20);
  setcolor(BLUE);
  circle(x,y,30);
  setcolor(CYAN);
  circle(x,y,40);
  setcolor(MAGENTA);
  circle(x,y,50);
  setcolor(YELLOW);
  circle(x,y,60);
  setcolor(LIGHTRED);
  circle(x,y,70);
  setcolor(LIGHTGREEN);
  circle(x,y,80);
  setcolor(LIGHTBLUE);
  circle(x,y,90);
  setcolor(LIGHTGRAY);
  circle(x,y,100);

  outtextxy(170,310,"Series Concentric Circle");

  getch();
  closegraph();
  return 0;
}
