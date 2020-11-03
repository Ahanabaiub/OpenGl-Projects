/*
* GL02Primitive.cpp: Vertex, Primitive and Color
* Draw Simple 2D colored Shapes: quad, triangle and polygon.
*/
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<bits/stdc++.h>

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}


void draw_circle(float x, float y, float radius) {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(x, y, 0.0f);
    static const int circle_points = 100;
    static const float angle = 2.0f * 3.1416f / circle_points;

    // this code (mostly) copied from question:
    glBegin(GL_POLYGON);
    glColor3ub(252, 252, 78);
    double angle1=0.0;
    glVertex2d(radius * cos(0.0) , radius * sin(0.0));
    int i;
    for (i=0; i<circle_points; i++)
    {
        glVertex2d(radius * cos(angle1), radius *sin(angle1));
        angle1 += angle;
    }
    glEnd();
    glPopMatrix();
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(138, 168, 86); // Yellow
	glVertex2f(-0.5f, -0.6f);
	glVertex2f(-0.42f, -0.6f);
	glVertex2f(-0.42f, 0.6f);
	glVertex2f(-0.5f, 0.6f);

	glEnd();


	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(138, 168, 86); // Yellow
	glVertex2f(-0.58f, -0.6f);
	glVertex2f(-0.34f, -0.6f);
	glVertex2f(-0.34f, -0.7f);
	glVertex2f(-0.58f, -0.7f);

	glEnd();



	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(138, 168, 86); // Yellow
	glVertex2f(-0.58f, -0.6f);
	glVertex2f(-0.34f, -0.6f);
	glVertex2f(-0.34f, -0.7f);
	glVertex2f(-0.58f, -0.7f);

	glEnd();


	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(138, 168, 86); // Yellow
	glVertex2f(-0.55f, 0.6f);
	glVertex2f(-0.37f, 0.6f);
	glVertex2f(-0.37f, 0.63f);
	glVertex2f(-0.55f, 0.63f);

	glEnd();



	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor3ub(138, 168, 86); // Yellow
	glVertex2f(-0.42f, 0.48f);
	glVertex2f(-0.10f, 0.48f);
	glVertex2f(-0.10f, 0.40f);
	glVertex2f(-0.42f, 0.40f);

	glEnd();


	draw_circle(-0.1, 0.30, 0.10);

	glBegin(GL_TRIANGLES);            // These vertices form a closed polygon
	glColor3ub(138, 168, 86); // Yellow

	glVertex2f(-0.10f, 0.48f);
	glVertex2f(0.1f, 0.30f);
	glVertex2f(-0.30f, 0.30f);

	glEnd();


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
	glutInitWindowSize(320, 320);
	glutReshapeWindow(800, 600); // Set the window's initial width & height
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}

