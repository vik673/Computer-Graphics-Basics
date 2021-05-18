#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int x1,y1,x2,y2,x,y;
main()
{
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "");
	printf("Enter the top left coordinates: ");
	scanf("%d%d",&x1,&y1);
	printf("Enter the bottom right coordinates: ");
	scanf("%d%d",&x2,&y2);
	printf("Enter the values of shearing coordinate for x_shear:\n");
	scanf("%d",&x);
	printf("Enter the values of shearing coordinate for y_shear:\n");
	scanf("%d",&y);
	rectangle(x1,y1,x2,y2);
	//cleardevice();
	printf("Now hit a key to see shear in x_axis: ");
	getchar();
	rectangle(x1+x,y1-x,x2+x,y2-x);
	printf("\nNow hit a key to see shear in y_axis: ");
	getchar();
	rectangle(x1,y1,x2,y2+y);
	getch();
	closegraph();
}
