#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

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
bar3d(midx-50,midy-50,midx+50,midy+50,10,1);
getch();
cleardevice();
printf("\n Enter sx,sy,sz: ");
scanf("%d%d%d",&sx,&sy,&sz);
bar3d(midx-50*sx,midy-50*sy,midx+50*sx,midy+50*sy,10*sx,1);
getch();
closegraph();
return 0;
}
