/****************************************************************************
PGM NO :2.2.D
NAME   :sijhah sadique
ROLL NO:19
DATE   :22/08/2016
AIM    :TO DRAW A CAR
*****************************************************************************/
#include<Windows.h> 
#include<GL/glut.h>
#include<GL/gl.h> 
#include<math.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(.1,.1);// line coordinates x1,y1
	glVertex2f(.1,.2);//line coordinates x2,y2
	glVertex2f(.3,.2);//line coordinates x3,y3
	glVertex2f(.4,.3);//line coordinates x4,y4
	glVertex2f(.6,.3);//line coordinates x5,y5
	glVertex2f(.75,.2);//line coordinates x5,y5
	glVertex2f(.9,.2);//line coordinates x5,y5
	glVertex2f(.9,.1);//line coordinates x5,y5
	
	glEnd();

	float i,x,y;
	glBegin(GL_POLYGON);

		for(i=0;i<=2*3.14;i+=0.01)
	{
		x=0.05*cos(i);
		y=0.05*sin(i);
		
		glColor3f(1.0,1.0,0.0);
		glVertex2f(x+.3,y+.1);
	}
	glEnd();

	glBegin(GL_POLYGON);
		for(i=0;i<=2*3.14;i+=0.01)
	{
		x=0.05*cos(i);
		y=0.05*sin(i);
		
		glColor3f(1.0,1.0,0.0);
		glVertex2f(x+.7,y+.1);
	}
	glEnd();

	glFlush();
}

void main(int argc, char** argv) 
{
    glutInit(&argc,argv);
    glutInitWindowSize(500,500); 
    glutInitWindowPosition(400,400);
    glutCreateWindow("CAR"); 
    glutDisplayFunc(display);  
    glutMainLoop(); 
}