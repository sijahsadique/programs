/****************************************************************************
PGM NO :3.1
NAME   :sijhah sadique
ROLL NO:19
DATE   :23/10/2016
AIM    :TO IMPLEMENT 2D TRANSFORMATIONS--TRANSLATION,ROTATION & SCALING
*****************************************************************************/
#include<Windows.h>
#include<GL/glut.h>
#include<math.h>
#include<stdio.h>
void init ()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-100,100,-100,100,-1,1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	float x1,y1,x2,y2,tx,ty,sx,sy,a,b,c1,d;
	float o;
	int c;
	printf("enter the strarting points:");
	scanf("%f %f",&a,&b);
	printf("enter the end points:");
	scanf("%f %f",&c1,&d);
	x1=a;
	y1=b;
	x2=c1;
	y2=d;
	while(true)
	{
		glBegin(GL_LINES);
		glVertex2f(x1,y1);
		glVertex2f(x2,y2);	
		glEnd();
		glutSwapBuffers();
		x1=a;
		y1=b;x2=c1;
		y2=d;
		printf("1.TRANSLATION  2.SCALING  3.ROTATION");
		printf("\nenter your choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
								
					printf("enter the value of tx and ty:");
					scanf("%f %f",&tx,&ty);
					x1=x1+tx;
					x2=x2+tx;
					y1+=ty;
					y2+=ty;
				break;
	
			case 2:
					
					printf("enter the value of sx and sy:");
					scanf("%f %f",&sx,&sy);
					x1=x1*sx;
					x2=x2*sx;
					y1=y1*sy;
					y2=y2*sy;
					break;

			case 3:
	
					printf("enter the angle:");
					scanf("%f",&o);
					x1=(x1*cos(o))-(y1*sin(o));
					y1=(x1*sin(o))+(y1*cos(o));
					x2=(x2*cos(o))-(y2*sin(o));
					y2=(x2*sin(o))+(y2*cos(o));
					
					break;
		
			default:
						printf("Invalid choice\n");
						
	}
	}
		glEnd();
		glutSwapBuffers();
}
int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE);
	glutInitWindowSize(300,300);
	glutInitWindowPosition(700,50);
	glutCreateWindow("TRANSFORMATION");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
	return 0;
}
	



