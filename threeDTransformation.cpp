#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int maxx,maxy,midx,midy;
void axis()
{
getch();
cleardevice();
line(midx,0,midx,maxy);
line(0,midy,maxx,midy);
}
main()
{
int gd,gm,x,y,z,o,x1,x2,y1,y2;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"");
setfillstyle(0,getmaxcolor());
maxx=getmaxx();
maxy=getmaxy();
midx=maxx/2;
midy=maxy/2;
axis();
bar3d(midx+100,midy-150,midx+60,midy-100,10,1);
printf("\Enter the translation factor");
scanf("%d%d",&x,&y);
axis();
printf("After translation");
bar3d(midx+100,midy-150,midx+60,midy-100,10,1);
bar3d(midx+x+100,midy-(y+150),midx+x+60,midy-(y+100),10,1);
axis();
bar3d(midx+100,midy-150,midx+60,midy-100,10,1);
printf("Enter the scaling factor");
scanf("%d%d%d",&x,&y,&z);
axis();
printf("After scaling");
bar3d(midx+100,midy-150,midx+60,midy-100,10,1);
bar3d(midx+(x*100),midy-(y*150),midx+(x*60),midy-(y*100),10*z,1);
axis();
bar3d(midx+100,midy-150,midx+60,midy-100,10,1);
printf("Enter the rotation angle");
scanf("%d",&o);
x1=50*cos(o*3.14/180)-100*sin(o*3.14/180);
y1=50*sin(o*3.14/180)+100*cos(o*3.14/180);
x2=60*cos(o*3.14/180)-90*sin(o*3.14/180);
y2=60*sin(o*3.14/180)+90*cos(o*3.14/180);
axis();
printf("After rotating about Z-axis");
bar3d(midx+100,midy-150,midx+60,midy-100,10,1);
bar3d(midx+x1,midy-y1,midx+x2,midy-y2,10,1);
axis();
printf("After rotating about x-axis");
bar3d(midx+100,midy-150,midx+60,midy-100,10,1);
bar3d(midx+100,midy-x1,midx+60,midy-x2,10,1);
axis();
printf("After rotating about Y-axis");
bar3d(midx+100,midy-150,midx+60,midy-100,10,1);
bar3d(midx+x1,midy-150,midx+x2,midy-100,10,1);
getch();
closegraph();
}
