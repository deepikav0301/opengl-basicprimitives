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
	glColor3f(0.0, 0.5f, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(100, 300); 
	glVertex2f(500, 300);
	glVertex2f(300, 600);
	glEnd();
	glFlush();
}
int main() {
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Basic Output Primitive : TRIANGLE");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
	return 0;
}
