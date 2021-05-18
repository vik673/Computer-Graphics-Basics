#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
int gdriver=DETECT,gmode,errorcode;
int midx,midy,i,sx,sy,sz;

initgraph(&gdriver,&gmode,"");
errorcode=graphresult();
if (errorcode != grOk)  /* an error occurred */
{
printf("Press any key to halt:");
getch();
exit(1);             /* return with error code */
}
midx=getmaxx()/2;
midy=getmaxy()/2;
//bar3d(midx-50,midy-50,midx+50,midy+50,10,1);
bar3d(midx+50,midy-100,midx+200,midy-40,10,1);
getch();
cleardevice();
float t;
    int x1,x2,y1,y2,mx,my,depth;
    int a1,b1,a2,b2,dep;
    printf("Enter the angle to rotate= ");
    scanf("%f",&t);
    t=(t*(3.14/180));
    a1=50*cos(t)-(100)*sin(t);
    //a2=50*sin(t)+(100)*cos(t);

    b1=200*cos(t)-40*sin(t);
    //b2=60*sin(t)+90*cos(t);

   /* a1=mx+(x1-mx)*cos(t)-(y1-my)*sin(t);
    a2=mx+(x2-mx)*cos(t)-(y2-my)*sin(t);
    b1=my+(x1-mx)*sin(t)-(y1-my)*cos(t);
    b2=my+(x2-mx)*sin(t)-(y2-my)*cos(t);
    if(a2>a1)
       dep=(a2-a1)/4;
    else
      dep=(a1-a2)/4;*/

      printf("%d  %d  %d  %d  %d",a1,a2,b1,b2,dep);
    //bar3d(a1,b1,a2,b2,dep,1);
    //bar3d(midx-50,midy-a1,midx+50,midy-b1,10,1);
    bar3d(midx+50,midy-a1,midx+200,midy-b1,10,1);
    setcolor(5);
    getch();
}
