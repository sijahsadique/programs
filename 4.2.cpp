/****************************************************************************
PGM NO :4.2
NAME   :sijhah sadique
ROLL NO:19
DATE   :23/10/2016
AIM    :TO MOVE A CAR
*****************************************************************************/
#include <GL/glut.h>   
#include <GL/gl.h>    
#include <GL/glu.h>       
#define ESCAPE 27
int window; 
float rtri = 0.0f;
float rquad = 0.0f;
void InitGL(int Width, int Height)         
{
  
  glClearColor(0.0f, 0.0f, 0.0f, 0.0f);     
  glClearDepth(1.0);                
  glDepthFunc(GL_LESS);                
  glEnable(GL_DEPTH_TEST);            
  glShadeModel(GL_SMOOTH);            
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();                
  gluPerspective(45.0f,(GLfloat)Width/(GLfloat)Height,0.1f,100.0f);  
  glMatrixMode(GL_MODELVIEW);
}


void ReSizeGLScene(int Width, int Height)
{
  if (Height==0)                
  Height=1;
  glViewport(0, 0, Width, Height);        
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(45.0f,(GLfloat)Width/(GLfloat)Height,0.1f,100.0f);
  glMatrixMode(GL_MODELVIEW);
}

float ballX = -0.5f;
float ballY = 0.0f;
float ballZ = 0.0f;

void drawBall(void) {
        glColor3f(0.0, 1.0, 0.0); 
        glTranslatef(ballX,ballY,ballZ); 
        glutSolidSphere (0.3, 20, 20);
        glTranslatef(ballX+1.5,ballY,ballZ);
        glutSolidSphere (0.3, 20, 20); 
        }



void DrawGLScene()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);        
  glLoadIdentity();               
  glTranslatef(rtri,0.0f,-6.0f);        
  glBegin(GL_POLYGON);                
  glColor3f(0.1f,0.0f,1.1f);           
  glVertex3f(-1.0f, 1.0f, 0.0f);        
  glVertex3f(0.4f, 1.0f, 0.0f);
  glVertex3f(1.0f, 0.4f, 0.0f);
  glColor3f(0.1f,1.0f,0.1f);           
  glVertex3f( 1.0f,0.0f, 0.0f);        
  glColor3f(0.1f,1.1f,1.1f);            
  glVertex3f(-1.0f,.0f, 0.0f);
  glEnd();                    
  drawBall();
  rtri+=0.005f;                    
  if(rtri>2)
      rtri=-2.0f;
  rquad-=15.0f;                    
  glutSwapBuffers();
}

void keyPressed(unsigned char key, int x, int y) 
{
    if (key == ESCAPE) 
    { 
    glutDestroyWindow(window);
    exit(0);                  
    }
}

int main(int argc, char **argv) 
{  
  glutInit(&argc, argv);  
  glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_ALPHA | GLUT_DEPTH);  
  glutInitWindowSize(640, 480);  
  glutInitWindowPosition(0, 0);  
  window = glutCreateWindow("Moving Car");  
  glutDisplayFunc(&DrawGLScene);  
  glutIdleFunc(&DrawGLScene);
  glutReshapeFunc(&ReSizeGLScene);
  glutKeyboardFunc(&keyPressed);
  InitGL(640, 480);
  glutMainLoop();  
  return 1;
}