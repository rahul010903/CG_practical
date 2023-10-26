#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
void cartesian(int x1, int y1, int x2, int y2)
{
int midx = getmaxx() / 2;
int midy = getmaxy() / 2;
line(midx + x1, midy - y1, midx + x2, midy - y2);
}
void main()
{
// coumplsoury //
int gd, gm,maxx,maxy,midx,midy;
float X1,Y1,Xn,Yn,dx,dy,Xincr,Yincr,steps,Xtemp,Ytemp;
gd = DETECT;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
 maxx = getmaxx(); // Take Xmax Pixel in screen
 maxy = getmaxy(); // Take Ymax Pixel in screen
 midx = maxx / 2; // Take Middle Point of X
 midy = maxy / 2; // Take Middle Point of Y
line(midx, 0, midx, maxy); // Middle Verticle(Y) line
line(0, midy, maxx, midy); // Middle Horizontal(X) Line
 X1 = 0, Y1 = 0, Xn = 0, Yn = 0, dx = 0, dy = 0, Xincr = 0,
Yincr = 0, steps = 0;
printf("\n\t ==> Enter X1 and Y1 : ");
scanf("%f %f", &X1, &Y1);
printf("\n\t ==> Enter Xn and Yn : ");
scanf("%f %f", &Xn, &Yn);
dx = Xn - X1;
dy = Yn - Y1;
if (abs(dx) >= abs(dy))
{



steps = abs(dx);
}
else
{
steps = abs(dy);
}
Xincr = dx / steps;
Yincr = dy / steps;
 Xtemp = 0, Ytemp = 0;
while (X1 != Xn && Y1 != Yn)
{
Xtemp = X1;
Ytemp = Y1;
X1 = X1 + Xincr;
Y1 = Y1 + Yincr;
Y1 = floor(Y1);
putpixel(X1 + midx, midy - Y1, RED);
}
getch();
closegraph();
}