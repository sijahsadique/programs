/****************************************************************************
PGM NO :2.4
NAME   :sijhah sadique
ROLL NO:19
DATE   :31/08/2016
AIM    :TO DRAW LINE USING BRESENHAM'S ALGORITHM
*****************************************************************************/
#include<windows.h>
#include<gl/GL.h>
#include<gl/glut.h>
#include<stdio.h>
void myInit(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
	glColor3f(1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,640.0,0.0,480.0);
}
void myDisp(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	int xa,ya,xb,yb,dx,dy,i,x,y,m,e;
	printf("Enter the coordinates of first point\n");
	scanf("%d%d",&xa,&ya);
	printf("Enter the coordinates of second point\n");
	scanf("%d%d",&xb,&yb);
	dy=yb-ya;
	dx=xb-xa;
	x=xa;
	y=ya;
	m=dy/dx;
	e=m-.5;
	for(i=1;i<=dx;i++)
	{
		glVertex2i(x,y);
		while (e>0)
		{
			y=y+1;
			e=e-1;
		}
		x=x+1;
		e=e+m;
	}
	glEnd();
	glFlush();
}
void main(int argc, char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(640,480);
	glutInitWindowPosition(100,150);
	glutCreateWindow("Bresenham's Line Rasterization");
	glutDisplayFunc(myDisp);
	myInit();
	glutMainLoop();
}