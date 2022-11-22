#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <math.h>
#include <stdlib.h>
#include <windows.h>
float step=0;
float step2=0;
float move = 0.2;


void display();
void reshape(int w,int h);
float i, angle ;
void init(){
    glClearColor(0.0,0.0,0.0,1.0);
}
void reshape(int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW);
}
void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000 / 60, timer, 0);
    step += move;

    step2+=0.008;
 if (step2>50 ||  step2<0) {
        move = -move;

    }
}





int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200,0);
    glutInitWindowSize(1200,800);

    glutCreateWindow("basic");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0, timer, 0);
    init();

    glutMainLoop();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glLineWidth(10.0);
    //sky
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(10,10);
    glVertex2f(10,-10);
    glVertex2f(-10,-10);
    glVertex2f(-10,10);
    glEnd();
    //sky
    //stars
    //first 2 row
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(10,10);
    glVertex2f(10,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.9,10);
    glVertex2f(8.9,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.9,10);
    glVertex2f(7.9,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.9,10);
    glVertex2f(6.9,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.9,10);
    glVertex2f(5.9,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.9,10);
    glVertex2f(4.9,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.9,10);
    glVertex2f(3.9,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.9,10);
    glVertex2f(2.9,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.9,10);
    glVertex2f(1.9,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.9,10);
    glVertex2f(0.9,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.1,10);
    glVertex2f(-0.1,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.1,10);
    glVertex2f(-1.1,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.1,10);
    glVertex2f(-2.1,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.1,10);
    glVertex2f(-3.1,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.1,10);
    glVertex2f(-4.1,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.1,10);
    glVertex2f(-5.1,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.1,10);
    glVertex2f(-6.1,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.1,10);
    glVertex2f(-7.1,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.1,10);
    glVertex2f(-8.1,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.1,10);
    glVertex2f(-9.1,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10.1,10);
    glVertex2f(-10.1,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10,10);
    glVertex2f(-10,9.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.6,9);
    glVertex2f(-9.6,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(9.4,9);
    glVertex2f(9.4,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.4,9);
    glVertex2f(8.4,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.4,9);
    glVertex2f(7.4,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.4,9);
    glVertex2f(6.4,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.4,9);
    glVertex2f(5.4,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.4,9);
    glVertex2f(4.4,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.4,9);
    glVertex2f(3.4,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.4,9);
    glVertex2f(2.4,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.4,9);
    glVertex2f(1.4,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.4,9);
    glVertex2f(0.4,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.6,9);
    glVertex2f(-0.6,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.6,9);
    glVertex2f(-1.6,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.6,9);
    glVertex2f(-2.6,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.6,9);
    glVertex2f(-3.6,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.6,9);
    glVertex2f(-4.6,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.6,9);
    glVertex2f(-5.6,8.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.6,9);
    glVertex2f(-8.6,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.6,9);
    glVertex2f(-7.6,8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.6,9);
    glVertex2f(-6.6,8.9);

    glEnd();
    //first 2 row
    //first 3 row
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(10,8);
    glVertex2f(10,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.9,8);
    glVertex2f(8.9,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.9,8);
    glVertex2f(7.9,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.9,8);
    glVertex2f(6.9,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.9,8);
    glVertex2f(5.9,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.9,8);
    glVertex2f(4.9,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.9,8);
    glVertex2f(3.9,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.9,8);
    glVertex2f(2.9,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.9,8);
    glVertex2f(1.9,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.9,8);
    glVertex2f(0.9,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.1,8);
    glVertex2f(-0.1,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.1,8);
    glVertex2f(-1.1,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.1,8);
    glVertex2f(-2.1,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.1,8);
    glVertex2f(-3.1,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.1,8);
    glVertex2f(-4.1,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.1,8);
    glVertex2f(-5.1,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.1,8);
    glVertex2f(-6.1,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.1,8);
    glVertex2f(-7.1,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.1,8);
    glVertex2f(-8.1,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.1,8);
    glVertex2f(-9.1,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10.1,8);
    glVertex2f(-10.1,7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10,8);
    glVertex2f(-10,7.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(9.4,7);
    glVertex2f(9.4,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.4,7);
    glVertex2f(8.4,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.4,7);
    glVertex2f(7.4,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.4,7);
    glVertex2f(6.4,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.4,7);
    glVertex2f(5.4,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.4,7);
    glVertex2f(4.4,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.4,7);
    glVertex2f(3.4,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.4,7);
    glVertex2f(2.4,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.4,7);
    glVertex2f(1.4,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.4,7);
    glVertex2f(0.4,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.6,7);
    glVertex2f(-0.6,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.6,7);
    glVertex2f(-1.6,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.6,7);
    glVertex2f(-2.6,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.6,7);
    glVertex2f(-3.6,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.6,7);
    glVertex2f(-4.6,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.6,7);
    glVertex2f(-5.6,6.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.6,7);
    glVertex2f(-8.6,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.6,7);
    glVertex2f(-7.6,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.6,7);
    glVertex2f(-6.6,6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.6,7);
    glVertex2f(-9.6,6.9);

    glEnd();
    //second 2 row
    //stars
    //first 4 row
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(10,6);
    glVertex2f(10,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.9,6);
    glVertex2f(8.9,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.9,6);
    glVertex2f(7.9,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.9,6);
    glVertex2f(6.9,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.9,6);
    glVertex2f(5.9,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.9,6);
    glVertex2f(4.9,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.9,6);
    glVertex2f(3.9,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.9,6);
    glVertex2f(2.9,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.9,6);
    glVertex2f(1.9,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.9,6);
    glVertex2f(0.9,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.1,6);
    glVertex2f(-0.1,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.1,6);
    glVertex2f(-1.1,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.1,6);
    glVertex2f(-2.1,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.1,6);
    glVertex2f(-3.1,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.1,6);
    glVertex2f(-4.1,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.1,6);
    glVertex2f(-5.1,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.1,6);
    glVertex2f(-6.1,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.1,6);
    glVertex2f(-7.1,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.1,6);
    glVertex2f(-8.1,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.1,6);
    glVertex2f(-9.1,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10.1,6);
    glVertex2f(-10.1,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10,6);
    glVertex2f(-10,5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.6,5);
    glVertex2f(-9.6,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(9.4,5);
    glVertex2f(9.4,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.4,5);
    glVertex2f(8.4,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.4,5);
    glVertex2f(7.4,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.4,5);
    glVertex2f(6.4,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.4,5);
    glVertex2f(5.4,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.4,5);
    glVertex2f(4.4,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.4,5);
    glVertex2f(3.4,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.4,5);
    glVertex2f(2.4,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.4,5);
    glVertex2f(1.4,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.4,5);
    glVertex2f(0.4,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.6,5);
    glVertex2f(-0.6,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.6,5);
    glVertex2f(-1.6,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.6,5);
    glVertex2f(-2.6,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.6,5);
    glVertex2f(-3.6,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.6,5);
    glVertex2f(-4.6,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.6,5);
    glVertex2f(-5.6,4.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.6,5);
    glVertex2f(-8.6,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.6,5);
    glVertex2f(-7.6,4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.6,5);
    glVertex2f(-6.6,4.9);

    glEnd();
    //first 2 row
    //first 3 row
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(10,4);
    glVertex2f(10,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.9,4);
    glVertex2f(8.9,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.9,4);
    glVertex2f(7.9,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.9,4);
    glVertex2f(6.9,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.9,4);
    glVertex2f(5.9,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.9,4);
    glVertex2f(4.9,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.9,4);
    glVertex2f(3.9,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.9,4);
    glVertex2f(2.9,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.9,4);
    glVertex2f(1.9,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.9,4);
    glVertex2f(0.9,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.1,4);
    glVertex2f(-0.1,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.1,4);
    glVertex2f(-1.1,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.1,4);
    glVertex2f(-2.1,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.1,4);
    glVertex2f(-3.1,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.1,4);
    glVertex2f(-4.1,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.1,4);
    glVertex2f(-5.1,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.1,4);
    glVertex2f(-6.1,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.1,4);
    glVertex2f(-7.1,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.1,4);
    glVertex2f(-8.1,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.1,4);
    glVertex2f(-9.1,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10.1,4);
    glVertex2f(-10.1,3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10,4);
    glVertex2f(-10,3.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(9.4,3);
    glVertex2f(9.4,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.4,3);
    glVertex2f(8.4,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.4,3);
    glVertex2f(7.4,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.4,3);
    glVertex2f(6.4,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.4,3);
    glVertex2f(5.4,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.4,3);
    glVertex2f(4.4,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.4,3);
    glVertex2f(3.4,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.4,3);
    glVertex2f(2.4,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.4,3);
    glVertex2f(1.4,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.4,3);
    glVertex2f(0.4,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.6,3);
    glVertex2f(-0.6,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.6,3);
    glVertex2f(-1.6,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.6,3);
    glVertex2f(-2.6,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.6,3);
    glVertex2f(-3.6,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.6,3);
    glVertex2f(-4.6,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.6,3);
    glVertex2f(-5.6,2.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.6,3);
    glVertex2f(-8.6,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.6,3);
    glVertex2f(-7.6,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.6,3);
    glVertex2f(-6.6,2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.6,3);
    glVertex2f(-9.6,2.9);

    glEnd();
    //second 4 row
    //stars
    //first 2 row
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.6,-9);
    glVertex2f(-9.6,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(9.4,-9);
    glVertex2f(9.4,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.4,-9);
    glVertex2f(8.4,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.4,-9);
    glVertex2f(7.4,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.4,-9);
    glVertex2f(6.4,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.4,-9);
    glVertex2f(5.4,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.4,-9);
    glVertex2f(4.4,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.4,-9);
    glVertex2f(3.4,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.4,-9);
    glVertex2f(2.4,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.4,-9);
    glVertex2f(1.4,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.4,-9);
    glVertex2f(0.4,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.6,-9);
    glVertex2f(-0.6,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.6,-9);
    glVertex2f(-1.6,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.6,-9);
    glVertex2f(-2.6,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.6,-9);
    glVertex2f(-3.6,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.6,-9);
    glVertex2f(-4.6,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.6,-9);
    glVertex2f(-5.6,-8.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.6,-9);
    glVertex2f(-8.6,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.6,-9);
    glVertex2f(-7.6,-8.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.6,-9);
    glVertex2f(-6.6,-8.9);

    glEnd();
    //first 2 row
    //first 3 row
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(10,-8);
    glVertex2f(10,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.9,-8);
    glVertex2f(8.9,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.9,-8);
    glVertex2f(7.9,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.9,-8);
    glVertex2f(6.9,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.9,-8);
    glVertex2f(5.9,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.9,-8);
    glVertex2f(4.9,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.9,-8);
    glVertex2f(3.9,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.9,-8);
    glVertex2f(2.9,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.9,-8);
    glVertex2f(1.9,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.9,-8);
    glVertex2f(0.9,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.1,-8);
    glVertex2f(-0.1,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.1,-8);
    glVertex2f(-1.1,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.1,-8);
    glVertex2f(-2.1,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.1,-8);
    glVertex2f(-3.1,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.1,-8);
    glVertex2f(-4.1,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.1,-8);
    glVertex2f(-5.1,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.1,-8);
    glVertex2f(-6.1,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.1,-8);
    glVertex2f(-7.1,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.1,-8);
    glVertex2f(-8.1,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.1,-8);
    glVertex2f(-9.1,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10.1,-8);
    glVertex2f(-10.1,-7.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10,-8);
    glVertex2f(-10,-7.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(9.4,-7);
    glVertex2f(9.4,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.4,-7);
    glVertex2f(8.4,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.4,-7);
    glVertex2f(7.4,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.4,-7);
    glVertex2f(6.4,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.4,-7);
    glVertex2f(5.4,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.4,-7);
    glVertex2f(4.4,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.4,-7);
    glVertex2f(3.4,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.4,-7);
    glVertex2f(2.4,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.4,-7);
    glVertex2f(1.4,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.4,-7);
    glVertex2f(0.4,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.6,-7);
    glVertex2f(-0.6,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.6,-7);
    glVertex2f(-1.6,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.6,-7);
    glVertex2f(-2.6,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.6,-7);
    glVertex2f(-3.6,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.6,-7);
    glVertex2f(-4.6,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.6,-7);
    glVertex2f(-5.6,-6.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.6,-7);
    glVertex2f(-8.6,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.6,-7);
    glVertex2f(-7.6,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.6,-7);
    glVertex2f(-6.6,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.6,-7);
    glVertex2f(-9.6,-6.9);

    glEnd();
    //second 2 row
    //stars
    //first 4 row
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(10,-6);
    glVertex2f(10,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.9,-6);
    glVertex2f(8.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.9,-6);
    glVertex2f(7.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.9,-6);
    glVertex2f(6.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.9,-6);
    glVertex2f(5.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.9,-6);
    glVertex2f(4.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.9,-6);
    glVertex2f(3.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.9,-6);
    glVertex2f(2.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.9,-6);
    glVertex2f(1.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.9,-6);
    glVertex2f(0.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.1,-6);
    glVertex2f(-0.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.1,-6);
    glVertex2f(-1.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.1,-6);
    glVertex2f(-2.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.1,-6);
    glVertex2f(-3.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.1,-6);
    glVertex2f(-4.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.1,-6);
    glVertex2f(-5.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.1,-6);
    glVertex2f(-6.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.1,-6);
    glVertex2f(-7.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.1,-6);
    glVertex2f(-8.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.1,-6);
    glVertex2f(-9.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10.1,-6);
    glVertex2f(-10.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10,-6);
    glVertex2f(-10,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.6,-5);
    glVertex2f(-9.6,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(9.4,-5);
    glVertex2f(9.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.4,-5);
    glVertex2f(8.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.4,-5);
    glVertex2f(7.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.4,-5);
    glVertex2f(6.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.4,-5);
    glVertex2f(5.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.4,-5);
    glVertex2f(4.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.4,-5);
    glVertex2f(3.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.4,-5);
    glVertex2f(2.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.4,-5);
    glVertex2f(1.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.4,-5);
    glVertex2f(0.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.6,-5);
    glVertex2f(-0.6,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.6,-5);
    glVertex2f(-1.6,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.6,-5);
    glVertex2f(-2.6,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.6,-5);
    glVertex2f(-3.6,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.6,-5);
    glVertex2f(-4.6,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.6,-5);
    glVertex2f(-5.6,-4.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.6,-5);
    glVertex2f(-8.6,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.6,-5);
    glVertex2f(-7.6,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.6,-5);
    glVertex2f(-6.6,-4.9);

    glEnd();
    //first 2 row
    //first 3 row
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(10,-4);
    glVertex2f(10,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.9,-4);
    glVertex2f(8.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.9,-4);
    glVertex2f(7.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.9,-4);
    glVertex2f(6.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.9,-4);
    glVertex2f(5.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.9,-4);
    glVertex2f(4.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.9,-4);
    glVertex2f(3.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.9,-4);
    glVertex2f(2.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.9,-4);
    glVertex2f(1.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.9,-4);
    glVertex2f(0.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.1,-4);
    glVertex2f(-0.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.1,-4);
    glVertex2f(-1.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.1,-4);
    glVertex2f(-2.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.1,-4);
    glVertex2f(-3.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.1,-4);
    glVertex2f(-4.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.1,-4);
    glVertex2f(-5.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.1,-4);
    glVertex2f(-6.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.1,-4);
    glVertex2f(-7.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.1,-4);
    glVertex2f(-8.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.1,-4);
    glVertex2f(-9.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10.1,-4);
    glVertex2f(-10.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10,-4);
    glVertex2f(-10,-3.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(9.4,-3);
    glVertex2f(9.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.4,-3);
    glVertex2f(8.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.4,-3);
    glVertex2f(7.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.4,-3);
    glVertex2f(6.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.4,-3);
    glVertex2f(5.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.4,-3);
    glVertex2f(4.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.4,-3);
    glVertex2f(3.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.4,-3);
    glVertex2f(2.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.4,-3);
    glVertex2f(1.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.4,-3);
    glVertex2f(0.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.6,-3);
    glVertex2f(-0.6,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.6,-3);
    glVertex2f(-1.6,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.6,-3);
    glVertex2f(-2.6,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.6,-3);
    glVertex2f(-3.6,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.6,-3);
    glVertex2f(-4.6,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.6,-3);
    glVertex2f(-5.6,-2.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.6,-3);
    glVertex2f(-8.6,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.6,-3);
    glVertex2f(-7.6,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.6,-3);
    glVertex2f(-6.6,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.6,-3);
    glVertex2f(-9.6,-2.9);

    glEnd();
    //second 5 row
    //first 6 row
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(10,2);
    glVertex2f(10,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.9,2);
    glVertex2f(8.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.9,2);
    glVertex2f(7.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.9,2);
    glVertex2f(6.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.9,2);
    glVertex2f(5.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.9,2);
    glVertex2f(4.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.9,2);
    glVertex2f(3.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.9,2);
    glVertex2f(2.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.9,2);
    glVertex2f(1.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.9,2);
    glVertex2f(0.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.1,2);
    glVertex2f(-0.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.1,2);
    glVertex2f(-1.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.1,2);
    glVertex2f(-2.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.1,2);
    glVertex2f(-3.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.1,2);
    glVertex2f(-4.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.1,2);
    glVertex2f(-5.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.1,2);
    glVertex2f(-6.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.1,2);
    glVertex2f(-7.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.1,2);
    glVertex2f(-8.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.1,2);
    glVertex2f(-9.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10.1,1);
    glVertex2f(-10.1,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10,1);
    glVertex2f(-10,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.6,1);
    glVertex2f(-9.6,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(9.4,1);
    glVertex2f(9.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.4,1);
    glVertex2f(8.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.4,1);
    glVertex2f(7.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.4,1);
    glVertex2f(6.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.4,1);
    glVertex2f(5.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.4,1);
    glVertex2f(4.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.4,1);
    glVertex2f(3.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.4,1);
    glVertex2f(2.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.4,1);
    glVertex2f(1.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.4,1);
    glVertex2f(0.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.6,1);
    glVertex2f(-0.6,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.6,1);
    glVertex2f(-1.6,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.6,1);
    glVertex2f(-2.6,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.6,1);
    glVertex2f(-3.6,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.6,1);
    glVertex2f(-4.6,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.6,1);
    glVertex2f(-5.6,0.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.6,1);
    glVertex2f(-8.6,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.6,1);
    glVertex2f(-7.6,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.6,1);
    glVertex2f(-6.6,0.9);

    glEnd();
    //first 2 row
    //first 3 row
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(10,-1);
    glVertex2f(10,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.9,-1);
    glVertex2f(8.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.9,-1);
    glVertex2f(7.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.9,-1);
    glVertex2f(6.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.9,-1);
    glVertex2f(5.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.9,-1);
    glVertex2f(4.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.9,-1);
    glVertex2f(3.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.9,-1);
    glVertex2f(2.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.9,-1);
    glVertex2f(1.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.9,-1);
    glVertex2f(0.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.1,-1);
    glVertex2f(-0.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.1,-1);
    glVertex2f(-1.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.1,-1);
    glVertex2f(-2.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.1,-1);
    glVertex2f(-3.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.1,-1);
    glVertex2f(-4.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.1,-1);
    glVertex2f(-5.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.1,-1);
    glVertex2f(-6.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.1,-1);
    glVertex2f(-7.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.1,-1);
    glVertex2f(-8.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.1,-1);
    glVertex2f(-9.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10.1,-1);
    glVertex2f(-10.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10,-1);
    glVertex2f(-10,-0.9);



    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(9.4,-2);
    glVertex2f(9.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.4,-2);
    glVertex2f(8.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.4,-2);
    glVertex2f(7.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.4,-2);
    glVertex2f(6.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.4,-2);
    glVertex2f(5.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.4,-2);
    glVertex2f(4.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.4,-2);
    glVertex2f(3.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.4,-2);
    glVertex2f(2.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.4,-2);
    glVertex2f(1.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.4,-2);
    glVertex2f(0.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.6,-2);
    glVertex2f(-0.6,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.6,-2);
    glVertex2f(-1.6,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.6,-2);
    glVertex2f(-2.6,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.6,-2);
    glVertex2f(-3.6,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.6,-2);
    glVertex2f(-4.6,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.6,-2);
    glVertex2f(-5.6,-1.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.6,-2);
    glVertex2f(-8.6,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.6,-2);
    glVertex2f(-7.6,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.6,-2);
    glVertex2f(-6.6,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.6,-2);
    glVertex2f(-9.6,-1.9);

    glEnd();
    //end--stars
 //moon
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.8,0.8);
    for(double i=0;i<180;i++){
       double angle=i*3.14/180;
        glVertex2f(10.5*cos(angle),3*sin(angle)-10);

    }

     glEnd();


     //katkot
glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3f(1,1,0);

    for(double i=0;i<360;i++){
       double angle=i*3.14/180;
        glVertex2f(1*sin(angle),2*cos(angle)-7+step);
    }
    glEnd();
    //mon2ar
    glBegin(GL_POLYGON);
        glColor3f(1,0.5,0);
        glVertex2f(0,-6.6+step);
       glVertex2f(0.5,-7+step);
        glVertex2f(0,-8+step);
        glVertex2f(-0.5,-7+step);
        glEnd();



        glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0,0,0);

    for(double i=0;i<360;i++){
       double angle=i*3.14/180;
        glVertex2f(1*sin(angle),2*cos(angle)-7+step);
    }
    glEnd();
    glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(0,-6.6+step);
       glVertex2f(0.5,-7+step);
        glVertex2f(0,-8+step);
        glVertex2f(-0.5,-7+step);

    glEnd();


        glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    for(double i=0;i<360;i++){
       double angle=i*3.14/180;
        glVertex2f(0.1*sin(angle)-0.25,0.15*cos(angle)-5.9+step);
    }
    glEnd();



     glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    for(double i=0;i<360;i++){
       double angle=i*3.14/180;
        glVertex2f(0.1*sin(angle)+0.25,0.15*cos(angle)-5.9+step);
    }
    glEnd();




  //genah
    glBegin(GL_POLYGON);
    glColor3f(1,1,0);

        glVertex2f(-1,-5-1+step);
        glVertex2f(-2,-7-1+step);
        glVertex2f(1,-5-1+step);
        glEnd();


         glBegin(GL_LINES);
    glColor3f(0,0,0);

        glVertex2f(-1,-5-1+step);
        glVertex2f(-2,-7-1+step);
        glVertex2f(1,-5-1+step);
        glEnd();

        //genah
 glBegin(GL_POLYGON);
    glColor3f(1,1,0);

        glVertex2f(-1,-5-1+step);
        glVertex2f(2,-7-1+step);
        glVertex2f(1,-5-1+step);
        glEnd();







    //markb
    glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3f(0,0,0.5);

    for(double i=0;i<360;i++){
       double angle=i*3.14/180;
        glVertex2f(2.8*sin(angle)+step2,2*cos(angle)+9);
    }
    glEnd();

     glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0,0,0);

    for(double i=0;i<360;i++){
       double angle=i*3.14/180;
        glVertex2f(2.8*sin(angle)+step2,2*cos(angle)+9);
    }
    glEnd();
    //markb fo2

glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3f(0.6,0.6,0.6);
    for(double i=0;i<360;i++){
       double angle=i*3.14/180;
        glVertex2f(5.5*cos(angle)+step2,1.9*sin(angle)+7);
    }

    glEnd();



    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    for(double i=0;i<360;i++){
       double angle=i*3.14/180;
        glVertex2f(5.5*cos(angle)+step2,1.9*sin(angle)+7);
    }

    glEnd();
//outline
        glBegin(GL_LINE_STRIP);
    glColor3f(1,1,1);
    for(double i=0;i<360;i++){
       double angle=i*3.14/180;
        glVertex2f(5.5*cos(angle)+step2,1.9*sin(angle)+7);
    }
    glEnd();
//outline
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    for(double i=0;i<360;i++){
       double angle=i*3.14/180;
        glVertex2f(5*cos(angle)+step2,1.9*sin(angle)+7);
    }

    glEnd();



        //ra2qa alien
    glBegin(GL_POLYGON);
    glColor3f(0,0.2,0);
        glVertex2f(6.2,-0.4);
        glVertex2f(6.2,-2.4);
        glVertex2f(5.8,-2.4);
        glVertex2f(5.8,-0.4);
        glEnd();


         glBegin(GL_LINES);
    glColor3f(0,0,0);
        glVertex2f(6.2,-0.4);
        glVertex2f(6.2,-2.4);
        glVertex2f(5.8,-2.4);
        glVertex2f(5.8,-0.4);
        glEnd();




        // alien
    glBegin(GL_POLYGON);
    glColor3f(0,0.6,0);

        glVertex2f(6,1.3);
        glVertex2f(6.8,0.4);
        glVertex2f(6,-1.3);
        glVertex2f(5.2,0.4);
        glEnd();

          glBegin(GL_LINES);
    glColor3f(0,0,0);

        glVertex2f(6,1.3);
        glVertex2f(6.8,0.4);
        glVertex2f(6,-1.3);
        glVertex2f(5.2,0.4);
        glEnd();



             glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    for(double i=0;i<360;i++){
       double angle=i*3.14/180;
        glVertex2f(0.1*sin(angle)+6.25,0.15*cos(angle)+0.5);
    }
    glEnd();



     glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    for(double i=0;i<360;i++){
       double angle=i*3.14/180;
        glVertex2f(0.1*sin(angle)+5.75,0.15*cos(angle)+0.5);
    }
    glEnd();
    //right armmm
        glBegin(GL_POLYGON);
        glColor3f(0,1,0);
        glVertex2f(7,-2.4);

        glVertex2f(7.4,-5.6);
        glVertex2f(6.4,-2.4);

        glEnd();

         glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(7,-2.4);

        glVertex2f(7.4,-5.6);
        glVertex2f(6.4,-2.4);

        glEnd();
        //left armmm
        glBegin(GL_POLYGON);
        glColor3f(0,1,0);
        glVertex2f(5,-2.4);
        glVertex2f(4.7,-5.4);
        glVertex2f(4.7,-5.6);
        glVertex2f(5.6,-2.4);

        glEnd();

         glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(5,-2.4);
        glVertex2f(4.7,-5.4);
        glVertex2f(4.7,-5.6);
        glVertex2f(5.6,-2.4);

        glEnd();
        //right leg
        glBegin(GL_POLYGON);
        glColor3f(0,0,0.2);
        glVertex2f(6,-5.35);

        glVertex2f(7.4,-8.6);
        glVertex2f(6.4,-5.4);

        glEnd();

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(6,-5.35);

        glVertex2f(7.4,-8.6);
        glVertex2f(6.4,-5.4);

        glEnd();
        //left leg
        glBegin(GL_POLYGON);
        glColor3f(0,0,0.2);
        glVertex2f(6,-5.36);
        glVertex2f(4.7,-8.4);
        glVertex2f(4.7,-8.6);
        glVertex2f(5.6,-5.4);

        glEnd();

         glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(6,-5.36);
        glVertex2f(4.7,-8.4);
        glVertex2f(4.7,-8.6);
        glVertex2f(5.6,-5.4);

        glEnd();



    //gsm alien
    glBegin(GL_POLYGON);
    glColor3f(0,0.5,0.5);
        glVertex2f(6.2,-1.4);
        glVertex2f(7.2,-2.4);
        glVertex2f(6,-5.4);
        glVertex2f(4.8,-2.4);
        glVertex2f(5.8,-1.4);
    glEnd();


      glBegin(GL_LINES);

    glColor3f(0,0,0);
        glVertex2f(6.2,-1.4);
        glVertex2f(7.2,-2.4);
        glVertex2f(6,-5.4);
        glVertex2f(4.8,-2.4);
        glVertex2f(5.8,-1.4);
    glEnd();

 glBegin(GL_LINES);
        glVertex2f(5.9,-0.6);
        glVertex2f(6.1,-0.6);
        glEnd();


        //ra2qa alien
    glBegin(GL_POLYGON);
    glColor3f(0,0.2,0);
        glVertex2f(-6.2,-0.4);
        glVertex2f(-6.2,-2.4);
        glVertex2f(-5.8,-2.4);
        glVertex2f(-5.8,-0.4);
        glEnd();


         glBegin(GL_LINES);
    glColor3f(0,0,0);
        glVertex2f(-6.2,-0.4);
        glVertex2f(-6.2,-2.4);
        glVertex2f(-5.8,-2.4);
        glVertex2f(-5.8,-0.4);
        glEnd();




        // alien
    glBegin(GL_POLYGON);
    glColor3f(0,0.6,0);

        glVertex2f(-6,1.3);
        glVertex2f(-6.8,0.4);
        glVertex2f(-6,-1.3);
        glVertex2f(-5.2,0.4);
        glEnd();

          glBegin(GL_LINES);
    glColor3f(0,0,0);

        glVertex2f(-6,1.3);
        glVertex2f(-6.8,0.4);
        glVertex2f(-6,-1.3);
        glVertex2f(-5.2,0.4);
        glEnd();



             glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    for(double i=0;i<360;i++){
       double angle=i*3.14/180;
        glVertex2f(0.1*sin(angle)-6.25,0.15*cos(angle)+0.5);
    }
    glEnd();



     glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    for(double i=0;i<360;i++){
       double angle=i*3.14/180;
        glVertex2f(0.1*sin(angle)-5.75,0.15*cos(angle)+0.5);
    }
    glEnd();
    //right armmm
        glBegin(GL_POLYGON);
        glColor3f(0.2,0,0);
        glVertex2f(-7,-2.4);

        glVertex2f(-7.4,-5.6);
        glVertex2f(-6.4,-2.4);

        glEnd();

         glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-7,-2.4);

        glVertex2f(-7.4,-5.6);
        glVertex2f(-6.4,-2.4);

        glEnd();
        //left armmm
        glBegin(GL_POLYGON);
        glColor3f(0.2,0,0);
        glVertex2f(-5,-2.4);
        glVertex2f(-4.7,-5.4);
        glVertex2f(-4.7,-5.6);
        glVertex2f(-5.6,-2.4);

        glEnd();

         glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-5,-2.4);
        glVertex2f(-4.7,-5.4);
        glVertex2f(-4.7,-5.6);
        glVertex2f(-5.6,-2.4);

        glEnd();
        //right leg
        glBegin(GL_POLYGON);
        glColor3f(0,0,0.2);
        glVertex2f(-6,-5.35);

        glVertex2f(-7.4,-8.6);
        glVertex2f(-6.4,-5.4);

        glEnd();

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-6,-5.35);

        glVertex2f(-7.4,-8.6);
        glVertex2f(-6.4,-5.4);

        glEnd();
        //left leg
        glBegin(GL_POLYGON);
        glColor3f(0,0,0.2);
        glVertex2f(-6,-5.36);
        glVertex2f(-4.7,-8.4);
        glVertex2f(-4.7,-8.6);
        glVertex2f(-5.6,-5.4);

        glEnd();

         glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-6,-5.36);
        glVertex2f(-4.7,-8.4);
        glVertex2f(-4.7,-8.6);
        glVertex2f(-5.6,-5.4);

        glEnd();
    //gsm alien
    glBegin(GL_POLYGON);
    glColor3f(0.2,0,0);
        glVertex2f(-6.2,-1.4);
        glVertex2f(-7.2,-2.4);
        glVertex2f(-6,-5.4);
        glVertex2f(-4.8,-2.4);
        glVertex2f(-5.8,-1.4);
    glEnd();


      glBegin(GL_LINES);

    glColor3f(0,0,0);
        glVertex2f(-6.2,-1.4);
        glVertex2f(-7.2,-2.4);
        glVertex2f(-6,-5.4);
        glVertex2f(-4.8,-2.4);
        glVertex2f(-5.8,-1.4);
    glEnd();
    glBegin(GL_LINES);
        glVertex2f(-5.9,-0.6);
        glVertex2f(-6.1,-0.6);
        glEnd();


    glFlush();
}

