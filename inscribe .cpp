#include<windows.h>
#include <stdio.h>
#include <GL/glut.h>
#include<stdlib.h>



void rectangle()
{
    glBegin(GL_POLYGON);
    glVertex2i(100,400);
    glVertex2i(400,400);
    glVertex2i(400,200);
    glVertex2i(100,200);
    glEnd();

    }

void text()
{
    glColor3i(1,0,1);
    char menu[100];
    strcpy(menu,"RAKSHITH RAI");
    int len;
    len=strlen(menu);
    glRasterPos2i(190,300);
    for (int i=0;i<len;i++)
    {

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,menu[i]);

    }




}
void display()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);
    rectangle();
    text();
    glFlush();
}

void init(void)
{
	glClearColor(0,0,0,0);
	gluOrtho2D(0,600,0,600);
        glMatrixMode(GL_MODELVIEW);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();

}
int main()
{
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(600,600);
	glutCreateWindow("gasket");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
