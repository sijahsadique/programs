/****************************************************************************
PGM NO :2.6
NAME   :sijhah sadique
ROLL NO:19
DATE   :19/09/2016
AIM    :TO DRAW A CIRCLE USING MIDPOINT CIRCLE ALGORITHM
*****************************************************************************/
#include<stdio.h>  
  #include<GL/glut.h>  
  #include<math.h>  
  int ww,wh;  
 int first=0;  
  int xi,yi,xf,yf;  
  void putpixel(int x,int y)  
 {  
       glBegin(GL_POINTS);  
       glVertex2i(x,y);  
       glEnd();  
       glFlush();  
  }  
 int round(double n)  
  {  
       return (n>=0)?(int)(n+0.5):(int)(n-0.5);  
  }  
  void MidPoint_circle(int r)  
  {  
       int x=0,y=r,p=1-r;  
       while(x<=y)
	   { 
            putpixel(250+x, 250+y);  
            putpixel(250+y, 250+x);  
            putpixel(250-x, 250+y);  
            putpixel(250-x, 250-y);  
            putpixel(250-y, 250+x);  
            putpixel(250-y, 250-x);  
            putpixel(250+y, 250-x);  
            putpixel(250+x, 250-y);  
            if(p<0)  
                 p=p+2*x+3;  
           else
		   {  
                p=p+2*(x-y)+5;  
                 y--;  
            }  
            x++;  
      }  
  }  
  void display()  
  {  
       glClearColor(0.0,0.0,0.0,0.0);  
       glColor3f(0.0,0.3,0.3);  
       glClear(GL_COLOR_BUFFER_BIT);  
       glutSwapBuffers();  
       glFlush();  
  }  
 
  void myDisp(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	int r;
	printf("Enter the radius of the circle\n");
	scanf_s("%d",&r);
	MidPoint_circle(r);
	glFlush();
}
  void myInit()  
  {
	printf("Enter the centre of the circle\n");
	scanf_s("%d%d",&ww,&wh);
	glViewport(0,0,ww,wh);  
    glMatrixMode(GL_PROJECTION);  
    glLoadIdentity();  
    gluOrtho2D(0.0,(GLdouble)ww,0.0,(GLdouble)wh);  
    glMatrixMode(GL_MODELVIEW);  
  }  
  
void main(int argc, char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(640,480);
	glutInitWindowPosition(100,150);
	glutCreateWindow("Midpoint Circle");
	glutDisplayFunc(myDisp);
	myInit();
	glutMainLoop();
}