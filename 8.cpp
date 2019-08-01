#include<graphics.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int gd,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C://TurboC3//BGI");


	int x2,y2,x1,y1,tx,ty,x11,y11,x22,y22,x111,y111,x222,y222;
	printf("Enter Value: \n");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);//100 100 50 200
	printf("Again for 2nd: \n");
	scanf("%d%d%d%d",&x11,&y11,&x22,&y22);//100 100 150 200
	printf("Again for 3rd: \n");
	scanf("%d%d%d%d",&x111,&y111,&x222,&y222);//50 200 150 200

	line(x1,y1,x2,y2);
	line(x11,y11,x22,y22);
	line(x111,y111,x222,y222);

	printf("Enter Placing value: \n");
	scanf("%d%d",&tx,&ty);

	x1=x1*tx;
	y1=y1*ty;
	x2=x2*tx;
	y2=y2*ty;

	x11=x11*tx;
	y11=y11*ty;
	x22=x22*tx;
	y22=y22*ty;

	x111=x111*tx;
	y111=y111*ty;
	x222=x222*tx;
	y222=y222*ty;

	printf("Now Scaling Working");
	line(x1,y1,x2,y2);
	line(x11,y11,x22,y22);
	line(x111,y111,x222,y222);

	getch();
	closegraph();
}

