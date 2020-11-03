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


	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3b(110, 68, 42); // Yellow
	glVertex2f(-0.1f, -0.6f);
	glVertex2f(-.1f, -0.1f);
	glVertex2f(0.1f, -0.1f);
	glVertex2f(0.1f, -0.6f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(71, 163, 28); // Yellow

	glVertex2f(-0.01f, 0.57f);
	glVertex2f(-0.05f, 0.56f);
	glVertex2f(0.08f, 0.56f);
	glVertex2f(0.46f, 0.18f);
	glVertex2f(0.42f, 0.18f);
	glVertex2f(0.48f, 0.1f);
	glVertex2f(0.40f, 0.1f);
	glVertex2f(0.53f, 0.0f);
	glVertex2f(0.45f, 0.0f);
	glVertex2f(0.6f, -0.1f);
	glVertex2f(-0.6f, -0.1f);
	glVertex2f(-0.45f, 0.0f);
	glVertex2f(-0.53f, 0.0f);
	glVertex2f(-0.40f, 0.1f);
	glVertex2f(-0.48f, 0.1f);
	glVertex2f(-0.42f, 0.18f);
	glVertex2f(-0.46f, 0.18f);

	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
	glutInitWindowSize(320, 320);
	glutReshapeWindow(800, 600);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}

