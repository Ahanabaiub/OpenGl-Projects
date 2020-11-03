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

    //RED
	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(252, 32, 3); // Yellow
	glVertex2f(-0.50f, 0.80f);
	glVertex2f(-0.50f, 0.70f);
	glVertex2f(0.50f, 0.70f);
	glVertex2f(0.50f, 0.80f);
	glEnd();

	 //Orange
	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(252, 132, 3); // Yellow
	glVertex2f(-0.50f, 0.70f);
	glVertex2f(-0.50f, 0.60f);
	glVertex2f(0.50f, 0.60f);
	glVertex2f(0.50f, 0.70f);
	glEnd();

	 //yellow
	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(252, 248, 3); // Yellow
	glVertex2f(-0.50f, 0.60f);
	glVertex2f(-0.50f, 0.50f);
	glVertex2f(0.50f, 0.50f);
	glVertex2f(0.50f, 0.60f);
	glEnd();

	 //Green
	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(3, 252, 28); // Yellow
	glVertex2f(-0.50f, 0.50f);
	glVertex2f(-0.50f, 0.40f);
	glVertex2f(0.50f, 0.40f);
	glVertex2f(0.50f, 0.50f);
	glEnd();


	 //Blue
	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(3, 252, 240); // Yellow
	glVertex2f(-0.50f, 0.40f);
	glVertex2f(-0.50f, 0.30f);
	glVertex2f(0.50f, 0.30f);
	glVertex2f(0.50f, 0.40f);
	glEnd();



	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(15, 3, 252); // Yellow
	glVertex2f(-0.50f, 0.30f);
	glVertex2f(-0.50f, 0.20f);
	glVertex2f(0.50f, 0.20f);
	glVertex2f(0.50f, 0.30f);
	glEnd();

	 //violet
	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(190, 3, 252); // Yellow
	glVertex2f(-0.50f, 0.20f);
	glVertex2f(-0.50f, 0.10f);
	glVertex2f(0.50f, 0.10f);
	glVertex2f(0.50f, 0.20f);
	glEnd();





	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
	glutInitWindowSize(3200, 3200);   // Set the window's initial width & height
	glutInitWindowPosition(300, 300); // Position the window's initial top-left corner
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
