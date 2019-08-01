#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
  int gd,gm;
  gd=DETECT;
  initgraph(&gd, &gm,"C:\\TC\\bgi");

  line(100,100,200,100);
  line(100,100,100,200);
  line(200,100,200,200);
  line(100,200,200,200);

  setfillstyle(SOLID_FILL,YELLOW); //For inside color
  floodfill(150,150,WHITE); //mapping for border size

  setcolor(LIGHTCYAN);
  outtextxy(120,210,"SQUARE");

  getch();
  closegraph();
  return 0;
}
