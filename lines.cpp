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
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2d(100, 530);
	glVertex2d(200, 150);
	glEnd();
	glBegin(GL_LINES);
	glVertex2d(400, 550);
	glVertex2d(270, 150);
	glEnd();
	glFlush();
}
int main() {
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Basic Output Primitive : Line");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
	return 0;
}
