#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>
void main()
{
int gd, gm,r,x0,y0,pk,xk,yk;
gd = DETECT;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
line(getmaxx() / 2, 0, getmaxx() / 2, getmaxy());
line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
printf("Enter Radius :");
scanf("%d", &r);

printf("Enter Center Point of Circle X & Y : ");
scanf("%d %d", &x0, &y0);
x0 = x0; y0 = y0;
pk = 1 - r;
xk = 0; yk = r;
while (xk <= yk)
{
if (pk < 0)
{
pk = pk + 2 * xk + 3;
}
else
{
pk = pk + (2 * xk) - (2 * yk) + 5;
yk = yk - 1;
}
xk = xk + 1;
delay(100);


// 1st quad
putpixel(xk + 320 + x0, 240 - y0 - yk, 3);
putpixel(yk + 320 + x0, 240 - y0 - xk, 3);
// 2nd quad
putpixel(320 - xk + x0, 240 - y0 - yk, 3);
putpixel(320 - yk + x0, 240 - y0 - xk, 3);
// 3rd quad


putpixel(320 - xk + x0, 240 - y0 + yk, 3);
putpixel(320 - yk + x0, 240 - y0 + xk, 3);
// 4th quad
putpixel(xk + 320 + x0, 240 - y0 + yk, 3);
putpixel(320 + yk + x0, 240 - y0 + xk, 3);
}
getch();
closegraph();
}