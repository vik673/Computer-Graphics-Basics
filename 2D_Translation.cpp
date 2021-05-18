#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main()
{
int graphdriver=DETECT,graphmode,errorcode;
int i;
int x2,y2,x1,y1,x,y;
printf("Enter the 2 line end points (x1,y1, x2,y2): ");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
initgraph(&graphdriver,&graphmode,"");
line(x1,y1,x2,y2);
delay(400);
printf("Enter translation co-ordinates (x,y): ");
scanf("%d%d",&x,&y);
x1=x1+x;
y1=y1+y;
x2=x2+x;
y2=y2+y;
printf("Line after translation ...");
line(x1,y1,x2,y2);
delay(400);
getch();
closegraph();
}
