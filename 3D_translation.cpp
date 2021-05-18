#include <stdio.h>
#include <stdlib.h>
#include<graphics.h>
#include<conio.h>
void draw3d(int fs,int x[20],int y[20],int tx,int ty,int d);
void draw3d(int fs,int x[20],int y[20],int tx,int ty,int d)
{
int i,j,k=0;
for(j=0;j<2;j++)
{
for(i=0;i<fs;i++)
{
if(i!=fs-1)
line(x[i]+tx+k,y[i]+ty-k,x[i+1]+tx+k,y[i+1]+ty-k);

else
line(x[i]+tx+k,y[i]+ty-k,x[0]+tx+k,y[0]+ty-k);
}
k=d;
}
for(i=0;i<fs;i++)
{
line(x[i]+tx,y[i]+ty,x[i]+tx+d,y[i]+ty-d);
}
}

main()
{
int gd=DETECT,gm;
int x[20],y[20],tx=0,ty=0,i,fs,d;
initgraph(&gd,&gm,"");
printf("no of sides (front view only) : ");
scanf("%d",&fs);
printf("co-ordinates : ");
for(i=0;i<fs;i++)
{
printf("(x%d,y%d)",i,i);
scanf("%d%d",&x[i],&y[i]);
}
printf("Depth :");
scanf("%d",&d);
draw3d(fs,x,y,tx,ty,d);
printf("translation (x,y)");
scanf("%d%d",&tx,&ty);
draw3d(fs,x,y,tx,ty,d);
getch();
}
