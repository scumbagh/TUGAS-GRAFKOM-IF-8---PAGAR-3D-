//TUGAS BESAR GRAFKOM  IF-8 PAGAR 3D
/* 

Reyza Gamaresa - 10108388 
Sugiri - 10108418
Aditya Rinaldi - 10108420
Sandi Satriawan - 10108422 
*/


#include <Windows.h>
#include <iostream>
#include <gl\GL.h>
#include <gl\GLU.h>
#include <gl\glut.h>
#include <math.h>


void pagar(){

//pagar
glPushMatrix();
glEnable(GL_COLOR_MATERIAL);
glTranslatef(0,-1,0);
glColor3f(0,1,0);

glPushMatrix();
glTranslatef(-1,0.2,0);
glScalef(5.4,0.2,0.1);
glutSolidCube(1);
glPopMatrix();

glPushMatrix();
glTranslatef(-1,-0.2,0);
glScalef(5.4,0.2,0.1);
glutSolidCube(1);
glPopMatrix();
glScalef(0.2,1,0.1);

//1
glTranslatef(2,0,0);
glutSolidCube(1);
glTranslatef(2,0,0);
glutSolidCube(1);
glTranslatef(2,0,0);
glutSolidCube(1);
glTranslatef(2,0,0);
//2
glTranslatef(2,0,0);
//3
glTranslatef(2,0,0);
//4
glTranslatef(2,0,0);
//5
glTranslatef(-12,0,0);
glutSolidCube(1);
glTranslatef(-2,0,0);
glutSolidCube(1);
glTranslatef(-2,0,0);
glutSolidCube(1);
glTranslatef(-2,0,0);
glutSolidCube(1);
glTranslatef(-2,0,0);
glutSolidCube(1);
glTranslatef(-2,0,0);
glutSolidCube(1);
glTranslatef(-2,0,0);
glutSolidCube(1);
glTranslatef(-2,0,0);
glutSolidCube(1);
glTranslatef(-2,0,0);
glutSolidCube(1);
glTranslatef(-2,0,0);
glutSolidCube(1);

glDisable(GL_COLOR_MATERIAL);
glPopMatrix();

}



void setMaterial()
{

GLfloat mat_ambient[] = {0.7f,0.7f,0.7f,1.0f}; 
GLfloat mat_diffuse[] = {0.6f,0.6f,0.6f,1.0f};
GLfloat mat_specular[] = {1.0f,1.0f,1.0f,1.0f};
GLfloat mat_shininess[] = {50.0f};
glMaterialfv(GL_FRONT,GL_AMBIENT,mat_ambient);
glMaterialfv(GL_FRONT,GL_DIFFUSE,mat_diffuse);
glMaterialfv(GL_FRONT,GL_SPECULAR,mat_specular);
glMaterialfv(GL_FRONT,GL_SHININESS,mat_shininess);
}


void setLighting()
{

GLfloat lightIntensity[] = {0.7f,0.7f,0.7f,1.0f};
GLfloat light_position[] = {2.0f,6.0f,3.0f,0.0f};
glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity);
glLightfv(GL_LIGHT0,GL_POSITION,light_position);
}


void setViewport()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
double winHt = 1.0;
glOrtho(-winHt*64/48,winHt*64/48,-winHt,winHt,0.1,100.0);
}


void setCamera()
{

glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluLookAt(25,25.25,25.10,1,1.10,2,0.0,1.0,0.0);
}


void displayObject()
{
setMaterial();
setLighting();
setViewport();
setCamera();

glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

pagar();
glFlush();
}


main(int argc, char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(640,480);
glutInitWindowPosition(100,100);
glutCreateWindow("TUGAS GRAFKOM PAGAR 3D");
glutDisplayFunc(displayObject);
glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
glShadeModel(GL_SMOOTH);
glEnable(GL_DEPTH_TEST);
glEnable(GL_NORMALIZE);
glClearColor(1.0f,1.0f,1.0f,0.0f);
glViewport(0,0,640,480);
glutMainLoop();
}
