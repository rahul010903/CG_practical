#include <stdio.h>
#include <graphics.h>
#include <dos.h>
void main()
{ int gd, gm;
gd = DETECT;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
line(360, 250, 310, 350);
line(360, 250, 410, 350);
line(335, 300, 385, 300);
line(250, 240, 250, 360);
ellipse(245, 270, -90, 90, 70, 30);
ellipse(245, 330, -90, 90, 70, 30);
ellipse(300, 100, 90, -90, 60, 50);
line(100, 250, 100, 350);
ellipse(100, 300, -90, 90, 60, 50);
getch();
closegraph();
}