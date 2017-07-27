/****************************************************************************
PGM NO :2.2.C
NAME   :sijhah sadique
ROLL NO:19
DATE   :10/08/2016
AIM    :TO DRAW A POLYGON
*****************************************************************************/
#include<GL/glut.h>
#include<GL/gl.h> 

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glColor3f(0.56,1.0,1.0);
	glVertex2f(.5,0.5);
	glVertex2f(.6,.34);
	glVertex2f(.8,.12);
	glVertex2f(.55,.09);
	glVertex2f(.3,.19);
	glEnd();
	glFlush();
}

void main(int argc, char** argv) 
{
    glutInit(&argc,argv);
    glutInitWindowSize(500,500); 
    glutInitWindowPosition(10,10);
    glutCreateWindow("SIMPLE"); 
    glutDisplayFunc(display); 
    glutMainLoop(); 
}