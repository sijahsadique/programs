/****************************************************************************
PGM NO :4.1
NAME   :sijhah sadique
ROLL NO:19
DATE   :23/10/2016
AIM    :TO SHOW A MAN WALKING
*****************************************************************************/
#include<windows.h>
#include<gl\glut.h>
#include<math.h>

void move(float x,int c)
{
				
   glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
   glColor3ub(255,255,255);
   for(int i=0;i<500;++i)
    {
    glVertex3f((cos(2*3.14159*i/500.0))/1.5-5+x,(sin(2*3.14159*i/500.0))/1.5+2,0);
    }
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(255,255,255);
   glVertex2f(-5.0+x,1.0);
   glVertex2f(-5.0+x,-0.5);
   glVertex2f(-4.9+x,1.0);
   glVertex2f(-4.0+x,0.8);
   glVertex2f(-4.0+x,0.8);
   glVertex2f(-3.1+x,0.2);
   glVertex2f(-4.9+x,0.9);
   glVertex2f(-3.9+x,0.3);
   glVertex2f(-3.9+x,0.3);
   glVertex2f(-3.3+x,-0.6);
   glVertex2f(-5.0+x,-0.6);
   glVertex2f(-5.2+x,-1.8);
   glVertex2f(-5.0+x,-0.6);
   glVertex2f(-4.0+x,-1.8);
   glEnd();



	 /*glBegin(GL_POLYGON);
	 glColor3ub(100,255,255);
	 glVertex2f(-4.6+x,-1.8);
	 glVertex2f(-4.4+x,-3.1);
	 glVertex2f(-4.6+x,-3.1);
	 glVertex2f(-4.6+x,-1.8);
	 glEnd();

	 glBegin(GL_POLYGON);
	 glColor3ub(100,255,255);
	 glVertex2f(-4.0+x,-1.8);
	 glVertex2f(-3.7+x,-3.1);
	 glVertex2f(-4.0+x,-3.1);
	 glVertex2f(-4.0+x,-1.8);
	 glEnd();
	 glFlush();*/

	 glutSwapBuffers();
}
void display()
{
	float x=0.0;
	int c=1;
	while (true)
	{
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-6,6,-6,6,-1,1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	move(x,c);
	x=x+0.0005;
	c=c+1;
	}
	
}



int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE);
	glutInitWindowSize(700,700);
	glutCreateWindow("MAN");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
