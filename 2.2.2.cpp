/****************************************************************************
PGM NO :2.2.B
NAME   :sijhah sadique
ROLL NO:19
DATE   :10/08/2016
AIM    :TO DRAW A TRIANGLE
*****************************************************************************/
#include<Windows.h>
#include<GL/glut.h>
#include<GL/gl.h> 

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glColor3f(0.0,0.56,1.0);
	glVertex2f(.5,.25);
	glVertex2f(.6,.9);
	glVertex2f(.8,.12);
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