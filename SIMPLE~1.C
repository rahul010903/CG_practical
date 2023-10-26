#include <stdio.h>
#include <conio.h>

#include <graphics.h>
void cartesian(int x1, int y1, int x2, int y2)
{
int midx = getmaxx() / 2;
int midy = getmaxy() / 2;
line(midx + x1, midy - y1, midx + x2, midy - y2);
}
void main()
{
// coumplsoury //
int gd, gm,maxx,maxy,midx,midy,X1,Y1,Xn,Yn,b,temp,flag;
float m;
gd = DETECT;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

 maxx = getmaxx(); // Take Xmax Pixel in screen
 maxy = getmaxy(); // Take Ymax Pixel in screen
 midx = maxx / 2; // Take Middle Point of X
 midy = maxy / 2; // Take Middle Point of Y
line(midx, 0, midx, maxy); // Middle Verticle(Y) line
line(0, midy, maxx, midy); // Middle Horizontal(X) Line
 X1 = 0, Y1 = 0, Xn = 0, Yn = 0, b = 0;
 m = 0;
printf("\n\t ==> Enter X1 & Y1 : ");
scanf("%d %d", &X1, &Y1);
printf("\n\t ==> Enter Xn & Yn : ");
scanf("%d %d", &Xn, &Yn);
m = (Yn - Y1) / (Xn - X1);
 temp = X1, flag = 0;
if (m < 0)


{
flag = 1;
}
b = Y1 - m * X1;
while ((X1 < Xn && flag == 0) ^ (Xn < X1))
{
int tempX = X1;
int tempY = Y1;
if (Xn > temp)
{
X1++;
}
else
{
X1--;
}
Y1 = m * X1 + b;
cartesian(tempX, tempY, X1, Y1);
}
getch();
closegraph();
}
