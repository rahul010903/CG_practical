#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <graphics.h>
void cartesian(int x, int y)
{
int midx = getmaxx() / 2;
int midy = getmaxy() / 2;
line(midx, midy, midx + x, midy - y);
}
void main()
{ int gd, gm,maxx,maxy,midx,midy;
gd = DETECT;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
 maxx = getmaxx();
 maxy = getmaxy();
 midx = maxx / 2; 
 midy = maxy / 2; 
line(midx, 0, midx, maxy);
line(0, midy, maxx, midy);
closegraph();
}