/****************************************************************************
PGM NO :2.3
NAME   :sijhah sadique
ROLL NO:19
DATE   :31/08/2016
AIM    :TO DRAW A LINE USING DDA ALGORITHM
*****************************************************************************/
#include<windows.h>
#include<gl/glut.h>
#include<math.h>
#include<stdio.h>

void drawLine(int x0,int y0,int x1, int y1)
{
glBegin(GL_POINTS);
glcolr3f(1.0,1.0,1.0);
double dy(double)(y1-y0);
double dx(double)(x1-x0);
int steps;
float Dx,Dy,x,y;

if(abs(dx)>abs(dy))
	steps=abs(dx);
else
	steps=abs(dy);
	Dx=dx/steps;
	Dy=dy/steps;
	x=x0+.5;
	y=y0+.5;
glVertex2f(floor(x),floor(y));

for(int k=1;k<steps;k++)
{
	x=x+Dx;
	y=y+Dy;
	glVertex2f(x,y);
	printf("%f%f",x,y)
}
	glEnd();
}
void init(void)
{
	glClearcolor
}
}