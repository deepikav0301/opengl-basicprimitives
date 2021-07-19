//To create an output window and draw a house using POINTS, LINES, TRIANGLES and QUADS/POLYGON.
#include<GL\glut.h>
void myInit(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(4.0);

    //house - bottom part
    glColor3f(0.0f, 0.1f, 0.6f);
    glBegin(GL_POLYGON);
    glVertex2i(40, 40);
    glVertex2i(320, 40);
    glVertex2i(40, 200);
    glVertex2i(320, 200);
    glVertex2i(40, 200);
    glVertex2i(40, 40);
    glVertex2i(320, 200);
    glVertex2i(320, 40);
    glEnd();

    //left window
    glColor3f(1.0f, 0.0f, 0.3f);
    glBegin(GL_POLYGON);
    glVertex2i(70, 60);
    glVertex2i(130, 60);
    glVertex2i(70, 150);
    glVertex2i(130, 150);
    glVertex2i(70, 60);
    glVertex2i(70, 150);
    glVertex2i(130, 150);
    glVertex2i(130, 60);
    glEnd();

    //window grills - left
    glColor3f(0, 0, 0);
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2d(100, 150);
    glVertex2d(100, 60);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2d(70, 105);
    glVertex2d(130, 105);
    glEnd();

    //right window 
    glColor3f(1.0f, 0.0f, 0.3f);
    glBegin(GL_POLYGON);
    glVertex2i(230, 60);
    glVertex2i(290, 60);
    glVertex2i(230, 150);
    glVertex2i(290, 150);
    glVertex2i(230, 60);
    glVertex2i(230, 150);
    glVertex2i(290, 150);
    glVertex2i(290, 60);
    glEnd();

    //window grills - right
    glColor3f(0, 0, 0);
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2d(260, 150);
    glVertex2d(260, 60);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2d(230, 105);
    glVertex2d(290, 105);
    glEnd();

    //door
    glColor3f(0.70f, 0.50f, 0.16f);
    glBegin(GL_POLYGON);
    glVertex2i(150, 40);
    glVertex2i(150, 170);
    glVertex2i(150, 170);
    glVertex2i(210, 170);
    glVertex2i(210, 100);
    glVertex2i(210, 40);
    glVertex2i(120, 40);
    glVertex2i(170, 40);
    glEnd();
    //door knob
    glColor3f(0, 0, 0);
    glBegin(GL_POINTS);
    glVertex2d(200, 100);
    glEnd();

    //triangle roof
    glColor3f(0.0f, 0.5f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(10, 200);
    glVertex2f(340, 200);
    glVertex2f(179, 390);
    glEnd();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(950, 700);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("House structure");
    glutDisplayFunc(myDisplay);
    myInit();
    glutMainLoop();
    return 0;
}
