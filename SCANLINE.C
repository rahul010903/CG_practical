#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <dos.h>
#include <graphics.h>
void main()
{
int gd, gm,x,y,temp,n, i, j, k, dy, dx,a[20][2],xi[20];
float slope[20];
gd = DETECT;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");



printf("\n\Enter no.of edges of polygon:");
scanf("%d", &n);
printf("\n\Enter co-ordinates of polygon:");
for (i = 0; i < n; i++)
{
printf("\n X%d Y%d:", i, i);
scanf("%d%d", &a[i][0], &a[i][1]);
}
a[n][0] = a[0][0];
a[n][1] = a[0][1];
for (i = 0; i < n; i++)
{
line(a[i][0], a[i][1], a[i + 1][0], a[i + 1][1]);
}
for (i = 0; i < n; i++)
{
dy = a[i + 1][1] - a[i][1];
dx = a[i + 1][0] - a[i][0];
if (dy == 0)
slope[i] = 1.0;
if (dx == 0)


slope[i] = 0.0;
if ((dy != 0) && (dx != 0))
{
slope[i] = (float)dx / dy;
}
}
for (y = 0; y < 480; y++)
{
k = 0;
for (i = 0; i < n; i++)
{
if (((a[i][1] <= y) && (a[i + 1][1] > y)) || ((a[i][1] > y)
&& (a[i + 1][1] <= y)))
{
xi[k] = (int)(a[i][0] + slope[i] * (y - a[i][1]));
k++;
}
}
for (j = 0; j < k - 1; j++)
for (i = 0; i < k; i++)
{
if (xi[i] > xi[i + 1])
{
temp = xi[i];
xi[i] = xi[i + 1];
xi[i + 1] = temp;
}
}
setcolor(35);
for (i = 0; i < k; i += 2)
{
line(xi[i], y, xi[i + 1] + 1, y);
}
}
getch();
closegraph();
}