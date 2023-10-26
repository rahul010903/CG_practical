#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>
void main()
{
int gd, gm,x,y,angle,i;
gd = DETECT;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
for (i = 0; i<= 4; i++)
{
setcolor(i + 1);
setlinestyle(i, 1, 2);
line(100, 20 + (i * 20), 500, 20 + (i * 20));
}
setlinestyle(0, 0, 3);
line(100, 120, 500, 120);
// wavy
 x, y, angle = 0;
for (x = 100; x < 500; x += 3)
{
y = 25 * sin(angle * 3.141 / 90);
y = 150 - y;
putpixel(x, y, 6);
delay(100);
angle += 5;
}
// zigzag
for (x = 100; x < 500; x += 15)
{
y = 200;
if (x % 2 == 0)

{
y = y + 10;
}
else
{
y = y - 10;
}
setlinestyle(0, 0, 0);
if (x == 100)
{ // initializing origin
moveto(100, 210);
}
lineto(x, y);
delay(100);
}
// long short alter
for (x = 100; x < 500; x += 15)
{
y = 240;
if (x % 2 == 0)
{
setlinestyle(0, 0, 0);
delay(100);
line(x, y, x, y + 20);
y = y + 20;
}
else
{
delay(100);
line(x, y + 10, x, y + 20);
y = y + 20;
}
}
// scalloped line
for (x = 100; x < 500; x += 30)
{
y = 280;
delay(100);
arc(x, y, 180, 360, 15);
}
// squiggly
for (x = 110; x < 500; x += 50)

{
y = 350;
delay(100);
arc(x, y, 180, 360, 29);
ellipse(x + 25, y, 0, 180, 5, 23);
}
getch();
closegraph();
}