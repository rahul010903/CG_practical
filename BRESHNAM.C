#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
void main()
{
int gd, gm,x1,y1,xn,yn,x,y;
float dx,dy;
gd = DETECT;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
line(getmaxx() / 2, 0, getmaxx() / 2, getmaxy());
line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
printf("Enter X1 and Y1:");
scanf("%d %d", &x1, &y1);
printf("Enter Xn and Yn:");
scanf("%d %d", &xn, &yn);
dx = xn - x1; dy = yn - y1;
 x = x1, y = y1;
if (dx > dy)
{
int pk = 2 * abs(dy) - abs(dx);
while (x != xn)
{ putpixel(x + 320, 240 - y, 6);
if (pk < 0)
{
pk = pk + 2 * abs(dy);
x = x + 1;
}
else
{
pk = pk + 2 * abs(dy) - 2 * abs(dx);
x = x + 1;
y = y + 1;
}
}
}


else
{
int pk = 2 * abs(dx) - abs(dy);
while (y != yn)
{
putpixel(x + 320, 240 - y, 6);
if (pk < 0)
{
pk = pk + 2 * abs(dx);
y = y + 1;
}
else
{
pk = pk + 2 * abs(dx) - 2 * abs(dy);
x = x + 1;
y = y + 1;
}
}
}
getch();
closegraph();
}
