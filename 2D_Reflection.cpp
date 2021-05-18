#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int a,a1,b,b1,c,c1,xt,ch;
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
a=getmaxx();
a1=getmaxy();
b=a/2;
b1=a1/2;

line(b,0,b,a1);
line(0,b1,a,b1);
line(400,200,600,200);
printf("1.X-axis\n");
printf("2.Y-axis\n");
printf("3.Exit\n");

do
{
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
      c=400-b;c1=200-b1;
      printf("\nReflection about X axis\n\n");
      line(b+c,b1-c1,b+c+200,b1-c1);
      break;


case 2:
      c=400-b;c1=200-b1;
      printf("\nReflection about Y axis\n\n");
      line(b-c,b1+c1,b-c-200,b1+c1);
      break;

case 3:
      exit (0);
}

}while(ch<=3);
getch();
closegraph();
}

