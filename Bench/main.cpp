
#include <windows.h>
#include <GL/glut.h>


void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(92, 62, 11); // Yellow
	glVertex2f(-0.4f, -0.30f);
	glVertex2f(0.4f, -0.30f);
	glVertex2f(0.6f, -0.10f);
	glVertex2f(-0.2f, -0.10f);

	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(92, 62, 11); // Yellow
	glVertex2f(-0.4f, -0.30f);
	glVertex2f(-0.35f, -0.30f);
	glVertex2f(-0.35f, -0.60f);
	glVertex2f(-0.4f, -0.60f);

	glEnd();


    glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(92, 62, 11); // Yellow
	glVertex2f(0.4f, -0.30f);
	glVertex2f(0.35f, -0.30f);
	glVertex2f(0.35f, -0.60f);
	glVertex2f(0.4f, -0.60f);

	glEnd();

	 glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(92, 62, 11); // Yellow
	glVertex2f(0.6f, -0.10f);
	glVertex2f(0.55f, -0.10f);
	glVertex2f(0.55f, -0.40f);
	glVertex2f(0.6f, -0.40f);

	glEnd();


	 glBegin(GL_QUADS);
	glColor3ub(92, 62, 11);
	glVertex2f(-.20f, -0.10f);
	glVertex2f(-0.15f, -0.10f);
	glVertex2f(-0.15f, -0.40f);
	glVertex2f(-0.20f, -0.40f);

	glEnd();


	 glBegin(GL_QUADS);
	glColor3ub(99, 77, 47);
	glVertex2f(-.20f, -0.10f);
	glVertex2f(0.6f, -0.10f);

	glVertex2f(0.63f, 0.30f);
	glVertex2f(-0.17f, 0.30f);


	glEnd();

	glFlush();  // Render now
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("AIUB-Bench");
	glutInitWindowSize(320, 320);
	glutReshapeWindow(800,600);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(display);
	initGL();
	glutMainLoop();
	return 0;
}

