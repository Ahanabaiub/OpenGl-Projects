
/*
* GL02Primitive.cpp: Vertex, Primitive and Color
* Draw Simple 2D colored Shapes: quad, triangle and polygon.
*/
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(114, 232, 214); // Yellow
	glVertex2f(-0.3f, -0.8f);
	glVertex2f(-0.3f, 0.30f);
	glVertex2f(0.3f, 0.30f);
	glVertex2f(0.3f, -0.8f);
    glEnd();


	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // Yellow
	glVertex2f(0.1f, -0.8f);
	glVertex2f(0.1f, -0.65f);
	glVertex2f(-0.1f, -0.65f);
	glVertex2f(-0.1f, -0.8f);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // Yellow
	glVertex2f(-0.25f, -0.72f);
	glVertex2f(-0.25f, -0.65f);
	glVertex2f(-0.2f, -0.65f);
	glVertex2f(-0.2f, -0.72f);
	glEnd();


	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // Yellow
	glVertex2f(0.25f, -0.72f);
	glVertex2f(0.25f, -0.65f);
	glVertex2f(0.2f, -0.65f);
	glVertex2f(0.2f, -0.72f);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // Yellow
	glVertex2f(0.25f, -0.52f);
	glVertex2f(0.25f, -0.45f);
	glVertex2f(0.2f, -0.45f);
	glVertex2f(0.2f, -0.52f);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // Yellow
	glVertex2f(-0.25f, -0.52f);
	glVertex2f(-0.25f, -0.45f);
	glVertex2f(-0.2f, -0.45f);
	glVertex2f(-0.2f, -0.52f);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // Yellow
	glVertex2f(0.25f, -0.32f);
	glVertex2f(0.25f, -0.25f);
	glVertex2f(0.2f, -0.25f);
	glVertex2f(0.2f, -0.32f);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // Yellow
	glVertex2f(-0.25f, -0.32f);
	glVertex2f(-0.25f, -0.25f);
	glVertex2f(-0.2f, -0.25f);
	glVertex2f(-0.2f, -0.32f);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // Yellow
	glVertex2f(-0.25f, -0.12f);
	glVertex2f(-0.25f, -0.05f);
	glVertex2f(-0.2f, -0.05f);
	glVertex2f(-0.2f, -0.12f);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // Yellow
	glVertex2f(0.25f, -0.12f);
	glVertex2f(0.25f, -0.05f);
	glVertex2f(0.2f, -0.05f);
	glVertex2f(0.2f, -0.12f);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // Yellow
	glVertex2f(0.25f, 0.08f);
	glVertex2f(0.25f, 0.15f);
	glVertex2f(0.2f, 0.15f);
	glVertex2f(0.2f, 0.08f);
	glEnd();


	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // Yellow
	glVertex2f(-0.25f, 0.08f);
	glVertex2f(-0.25f, 0.15f);
	glVertex2f(-0.2f, 0.15f);
	glVertex2f(-0.2f, 0.08f);
	glEnd();





	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Five Storied Building");  // Create window with the given title
	glutInitWindowSize(320, 320);
	glutReshapeWindow(800, 600); // Set the window's initial width & height
	glutInitWindowPosition(50,0); // Position the window's initial top-left corner
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}

