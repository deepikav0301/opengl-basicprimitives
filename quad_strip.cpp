#include<GL/glut.h>
void myInit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(0, 0, 0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 600, 0, 800);
}
void myDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(4.0);
	glColor3f(0.0f, 0.1f, 0.3f);
	glBegin(GL_QUAD_STRIP);
	glVertex2f(100, 200);
	glVertex2f(250, 200);
	glVertex2f(100, 500);
	glVertex2f(250, 500);
	glColor3f(0.0f, 0.7f, 0.0f);
	glVertex2f(250, 200);
	glVertex2f(400, 240);
	glVertex2f(250, 500);
	glVertex2f(400, 540);
	glEnd();
	glFlush();

}
int main() {
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Basic Output Primitive : QUAD_STRIP");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
	return 0;
}

