/*
* GL02Primitive.cpp: Vertex, Primitive and Color
* Draw Simple 2D colored Shapes: quad, triangle and polygon.
*/
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL()
{
    // Set "clearing" or background color
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color



    double x1=-0.50,y1=0.70;



    bool flag=true;



    for(int i=1; i<=8; i++)
    {

        x1=-0.50;


        for(int j=1; j<=8; j++)
        {

            if(flag)
            {
                glBegin(GL_QUADS);            // These vertices form a closed polygon
                glColor3ub(3, 157, 252);
                glVertex2f(x1, y1);
                glVertex2f(x1, y1+0.10);
                glVertex2f(x1+0.1, y1+0.1);
                glVertex2f(x1+0.10, y1);
                glEnd();



            }
            else
            {

                glBegin(GL_QUADS);            // These vertices form a closed polygon
                glColor3ub(3, 252, 161);
                glVertex2f(x1, y1);
                glVertex2f(x1, y1+0.10);
                glVertex2f(x1+0.1, y1+0.1);
                glVertex2f(x1+0.10, y1);


            }

            glFlush();

            x1+=0.1;

             if(flag)
            flag=false;
        else
            flag=true;


        }

        y1-=0.10;

        if(flag)
            flag=false;
        else
            flag=true;

    }




}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
    glutInitWindowSize(320, 320);   // Set the window's initial width & height
    glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
    glutDisplayFunc(display);       // Register callback handler for window re-paint event
    initGL();                       // Our own OpenGL initialization
    glutMainLoop();                 // Enter the event-processing loop
    return 0;
}
