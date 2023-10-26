#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>
void main()
{
int gd, gm;
float rx, ry,x0, y0, p1k, p2k, xk, yk;;
gd = DETECT;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
line(getmaxx() / 2, 0, getmaxx() / 2, getmaxy());
line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);

printf("Enter X & Y Radius :");
scanf("%f %f", &rx, &ry);

printf("Enter Center Point of Ellipse X & Y : ");
scanf("%f %f", &x0, &y0);
p1k = (ry * ry) - (rx * rx * ry) + ((rx * rx) / 4);
xk = 0;
yk = ry;
while ((ry * ry * xk < rx * rx * yk))
{
putpixel(xk + 320 + x0, 240 - y0 - yk, 3);
putpixel(320 - xk + x0, 240 - y0 - yk, 3);
putpixel(320 - xk + x0, 240 - y0 + yk, 3);
putpixel(xk + 320 + x0, 240 - y0 + yk, 3);
if (p1k < 0)
{
p1k = p1k + (ry * ry) * (2 * xk + 3);
}
else
{
p1k = p1k + (ry * ry) * ((2 * xk) + 3) + (rx * rx) * (2 -
(2 * yk));
yk = yk - 1;



}
xk = xk + 1;
}
p2k = (ry * ry * (xk + 1 / 2) * (xk + 1 / 2)) + (rx * rx * (yk - 1)
* (yk - 1)) - (rx * rx * ry * ry);
while (yk > 0)
{
putpixel(xk + 320 + x0, 240 - y0 - yk, 3);
putpixel(320 - xk + x0, 240 - y0 - yk, 3);
putpixel(320 - xk + x0, 240 - y0 + yk, 3);
putpixel(xk + 320 + x0, 240 - y0 + yk, 3);
if (p2k > 0)
{
yk = yk - 1;
p2k = p2k + rx * rx * (3 - 2 * yk);
}
else
{
xk = xk + 1;
yk = yk - 1;
p2k = p2k + 2 * ry * ry * (xk + 1) + rx * rx * (3 - 2 *
yk);
}
}
getch();
closegraph();
}