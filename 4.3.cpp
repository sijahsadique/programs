/****************************************************************************
PGM NO :4.3
NAME   :sijhah sadique	
ROLL NO:19
DATE   :23/10/2016
AIM    :TO MOVE A HELICOPTER DIAGONALLY
*****************************************************************************/
#include<stdio.h>
#include<math.h>
#include<GL/glut.h>

static GLfloat spin = 0,i=0,j=0;
void drawheli()
{
	glPushMatrix();
	glTranslatef(i/5,j/5,0);
		glPushMatrix();
		glTranslated(150,80,0);


		glColor3f(1.0,0.0,0.0);	//FRONT BODY
		glBegin(GL_POLYGON);
			glVertex2f(55,40);
			glVertex2f(70,20);
			glVertex2f(140,20);
			glVertex2f(160,40);
			glVertex2f(160,90);
			glVertex2f(140,120);
			glVertex2f(70,120);
			glVertex2f(55,78);
		glEnd();

		glBegin(GL_POLYGON);
			glVertex2f(82,20);
    
			glVertex2f(82,12);
			glVertex2f(87,12);
			glVertex2f(87,20);
		glEnd();

		glBegin(GL_POLYGON);
			glVertex2f(128,20);
			glVertex2f(128,12);
			glVertex2f(123,12);
			glVertex2f(123,20);
		glEnd();

		glBegin(GL_POLYGON);
			glVertex2f(70,12);
			glVertex2f(140,12);
			glVertex2f(140,9);
			glVertex2f(70,9);
		glEnd();

		glBegin(GL_POLYGON);
			glVertex2f(160,40);
			glVertex2f(260,80);
			glVertex2f(260,120);
			glVertex2f(255,120);
			glVertex2f(250,90);
			glVertex2f(160,90);
		glEnd();



glBegin(GL_POLYGON);
	glVertex2f(108,120);
	glVertex2f(108,130);
	glVertex2f(102,130);
	glVertex2f(102,120);
glEnd();



glPopMatrix();
glPushMatrix();					//MAIN SPINING FAN
glTranslatef(255,210,-100);
	spin=spin+2;
	glColor3f(0.8, 0.0, 0.0);
	glRotatef(spin,0,1,0);
	glScalef(1.1,0.07,0);
	glutWireSphere(100, 100, 10);
	glutPostRedisplay();
glPopMatrix();
glPushMatrix();
glTranslatef(398,181,-100);		//TAIL FAN
	glColor3f(1.0, 1.0, 1.0);
	glutSolidSphere(17, 50, 20);
	glutPostRedisplay();
glPopMatrix();
glPushMatrix();
glTranslatef(398,181,-100);		//TAIL FAN
	glColor3f(1.0, 0.0, 0.0);
	glutWireSphere(18, 20, 20);
	glutPostRedisplay();
glPopMatrix();
glPushMatrix();
glTranslatef(398,181,-100);		//TAIL FAN
	spin=spin+2;
	glColor3f(0.8, 0.0, 0.0);
	glRotatef(spin,0,0,1);
	glScalef(1.1,0.2,0);
	glutWireSphere(16, 50, 20);
	glutPostRedisplay();
glPopMatrix();
     glPopMatrix();
glFlush();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
	drawheli();
    glFlush();
    glutSwapBuffers();
}
void myinit()
{
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,600.0,0.0,350,0.0,250.0);
	glMatrixMode(GL_MODELVIEW);
}
void upper()
{
	j++,i++;
    glutPostRedisplay();
}
void down()			
{
	j--,i--;
    glutPostRedisplay();
}

void keys(unsigned char key,int x,int y)
{
  if(key=='w')
  {
	glutIdleFunc(upper);
  }
  if(key=='s')
  {
    glutIdleFunc(down);
  }
}


 void main(int argc,char** argv)		
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1200,700);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Helicopter");
    glutDisplayFunc(display);
	glutKeyboardFunc(keys);
    myinit();
    glutMainLoop();
}