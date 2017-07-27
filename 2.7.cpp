/****************************************************************************
PGM NO :2.7
NAME   :sijhah sadique
ROLL NO:19
DATE   :19/09/2016
AIM    :TO DRAW AN ELLIPSE USING MIDPOINT ALGORITHM
*****************************************************************************/
#include<Windows.h>
#include<gl/GL.h>
#include<gl/glut.h>
#include<stdio.h>
void myInit(void)
{
	glClearColor(1.0,0.0,1.0,0.0);
	glColor3f(0.0,0.0,1.0);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-100.0,100.0,-100.0,100.0,-1.0,0.0);
}
void Ellipse(int a,int b)
{
	glBegin(GL_POINTS);
	int x,y,d1,d2;
	x=a;
	y=0;
    while(((b*b)*(x-0.5))>((a*a)*(y+1)))
	{
		glVertex2i(x,y);
		glVertex2i(x,-y);
		glVertex2i(-x,-y);
		glVertex2i(-x,y);
		d1=(((b*b)*((2*x*x)-(2*x)+0.5))+((a*a)*((2*y*y)+(4*y)+2))-(2*(a*a)*(b*b)));
		if(d1<0)
		{
			y=y+1;
		}
		else
		{
			x=x-1;
			y=y+1;
		}
	}
	d2=(((b*b)*((2*x*x)-(4*x)+2))+((a*a)*((2*y*y)+(2*y)+0.5))-(2*(a*a)*(b*b)));
	while (x>=0)
	{
		glVertex2i(x,y);
		glVertex2i(x,-y);
		glVertex2i(-x,-y);
		glVertex2i(-x,y);
		if(d2<0)
		{
			x=x-1;
			y=y+1;
		}
		else
			x=x-1;
		d2=(((b*b)*((2*x*x)-(4*x)+2))+((a*a)*((2*y*y)+(2*y)+0.5))-(2*(a*a)*(b*b)));
	}
	glEnd();
}
void myDisp(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	int a,b;
	printf("Enter the values of a & b\n");
	scanf("%d%d",&a,&b);
	Ellipse(a,b);
	glFlush();
}
void main(int argc, char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(640,480);
	glutInitWindowPosition(100,150);
	glutCreateWindow("Ellipse Generation");
	glutDisplayFunc(myDisp);
	myInit();
	glutMainLoop();
}