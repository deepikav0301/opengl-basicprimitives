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
	glBegin(GL_LINE_STRIP);
	glVertex3f(150.0f, 150.0f, 0.0f);
	glVertex3f(300.0f, 300.0f, 0.0f);
	glVertex3f(300.0f, 470.0f, 0.0f);
	glVertex3f(470.0f, 550.0f, 0.0f);
	glEnd();
	glFlush();
}
int main() {
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Basic Output Primitive : LINE_STRIP");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
	return 0;
}
