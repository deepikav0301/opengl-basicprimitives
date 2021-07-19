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
	glBegin(GL_POLYGON);
	glVertex2i(100, 200);
	glVertex2i(500, 200);
	glVertex2i(100, 650);
	glVertex2i(500, 650);
	glVertex2i(100, 650);
	glVertex2i(100, 200);
	glVertex2i(500, 650);
	glVertex2i(500, 200);
	glEnd();
	glFlush();

}

int main() {
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Basic Output Primitive : POLYGON");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
	return 0;
}
