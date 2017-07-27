/****************************************************************************
PGM NO :2.2.A
NAME   :sijhah sadique
ROLL NO:19
DATE   :10/08/2016
AIM    :TO DRAW A LINE
*****************************************************************************/

#include<Windows.h>
#include<GL/glut.h>
#include<GL/gl.h> 

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glColor3f(0.0,1.0,1.0);
	glVertex2f(0.0,0.0);
	glVertex2f(.6,.9);
	glEnd();
	glFlush();
}

void main(int argc, char** argv) 
{
    glutInit(&argc,argv);
    glutInitWindowSize(500,500); 
    glutInitWindowPosition(10,10);
    glutCreateWindow("OPENGL LINE"); 
    glutDisplayFunc(display);  
    glutMainLoop(); 
}