
#include<bits/stdc++.h>
#include <windows.h>
#include <GL/glut.h>


void initGL() {

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}


void draw_circle(float x, float y, float radius,int r, int g,int b) {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(x, y, 0.0f);
    static const int circle_points = 100;
    static const float angle = 2.0f * 3.1416f / circle_points;


    glBegin(GL_POLYGON);
    glColor3ub(r, g, b);
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


void display() {
	glClear(GL_COLOR_BUFFER_BIT);



	////bg color

	  glBegin(GL_QUADS);
	glColor3ub(66, 92,115);
	glVertex2f(-1.0f,  1.0f);
	glVertex2f(-1.0f,  -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, 1.0f);
    glEnd();


    ////sky
    glBegin(GL_POLYGON);
	glColor3ub(228, 237, 245);
	glVertex2f(-1.0f,  0.50f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0,  1.0) ;
	glVertex2f(1.0f, 0.50f);

    glEnd();




    //////bg building

      glBegin(GL_QUADS);
	glColor3ub(130,121,102);
	glVertex2f(-1.0f,  0.5);
	glVertex2f(-0.85f,  0.5f);
	glVertex2f(-0.85f, 0.65f);
	glVertex2f(-1.0f, 0.65f);
    glEnd();

       glBegin(GL_POLYGON);
	glColor3ub(130,121,102);
	glVertex2f(-0.80f,  0.5);
	glVertex2f(-0.80f,  0.72f);
	glVertex2f(-0.70f, 0.72f);
	glVertex2f(-0.70f, 0.5f);

    glEnd();

       glBegin(GL_POLYGON);
	glColor3ub(130,121,102);
	glVertex2f(-0.60f,  0.5);
	glVertex2f(-0.60f,  0.80f);
	glVertex2f(-0.40f, 0.80f);
	glVertex2f(-0.40f, 0.5f);

    glEnd();


        glBegin(GL_POLYGON);
	glColor3ub(130,121,102);
	glVertex2f(-0.39f,  0.5);
	glVertex2f(-0.39f,  0.70f);
	glVertex2f(-0.33f, 0.70f);
	glVertex2f(-0.33f, 0.5f);

    glEnd();


       glBegin(GL_POLYGON);
	glColor3ub(130,121,102);
	glVertex2f(-0.32f,  0.5);
	glVertex2f(-0.32f,  0.60f);
	glVertex2f(-0.20f, 0.60f);
	glVertex2f(-0.20f, 0.5f);

    glEnd();


        glBegin(GL_POLYGON);
	glColor3ub(130,121,102);
	glVertex2f(0.32f,  0.5);
	glVertex2f(0.32f,  0.60f);
	glVertex2f(0.20f, 0.60f);
	glVertex2f(0.20f, 0.5f);

    glEnd();

        glBegin(GL_POLYGON);
	glColor3ub(130,121,102);
	glVertex2f(0.1f,  0.50f);
	glVertex2f(0.1f, 0.68f);
	glVertex2f(0.18f,  0.68) ;
	glVertex2f(0.18f, 0.5f);

    glEnd();

         glBegin(GL_POLYGON);
	glColor3ub(130,121,102);
	glVertex2f(-0.1f,  0.50f);
	glVertex2f(-0.1f, 0.63f);
	glVertex2f(-0.18f,  0.63) ;
	glVertex2f(-0.18f, 0.5f);

    glEnd();


          glBegin(GL_POLYGON);
	glColor3ub(130,121,102);
	glVertex2f(0.34f,  0.50f);
	glVertex2f(0.34f, 0.70f);
	glVertex2f(0.41f,  0.70) ;
	glVertex2f(0.41f, 0.50f);

    glEnd();


           glBegin(GL_POLYGON);
	glColor3ub(130,121,102);
	glVertex2f(0.45f,  0.50f);
	glVertex2f(0.45f, 0.75f);
	glVertex2f(0.55,  0.75) ;
	glVertex2f(0.55f, 0.50f);

    glEnd();




           glBegin(GL_POLYGON);
	glColor3ub(130,121,102);
	glVertex2f(0.57f,  0.50f);
	glVertex2f(0.57f, 0.71f);
	glVertex2f(0.69,  0.71) ;
	glVertex2f(0.69f, 0.50f);

    glEnd();


             glBegin(GL_POLYGON);
	glColor3ub(130,121,102);
	glVertex2f(0.72f,  0.50f);
	glVertex2f(0.72f, 0.68f);
	glVertex2f(0.85,  0.68) ;
	glVertex2f(0.85f, 0.50f);

    glEnd();

//// road stripe
       glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.042f,  -1.0f);
	glVertex2f(0.04f, -0.6f);
	glVertex2f(-0.04f, -0.6f);
    glVertex2f(-0.042f,  -1.0);
    glEnd();



        glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.02f,  0.0f);
	glVertex2f(0.038f, -0.4f);
	glVertex2f(-0.038f, -0.4f);
    glVertex2f(-0.02f,  0.0);
    glEnd();


         glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.010f,  0.15f);
	glVertex2f(0.005f, 0.30f);
	glVertex2f(-0.005f, 0.30f);
    glVertex2f(-0.010f,  0.15);
    glEnd();


         glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(0.005f,  0.34f);
	glVertex2f(0.002f, 0.42f);
	glVertex2f(-0.002f, 0.42f);
    glVertex2f(-0.005f,  0.34);
    glEnd();



    glBegin(GL_LINES);
    glLineWidth(3.0);
	glColor3ub(255, 255, 255);
	glVertex2f(0.0f,  0.50f);
	glVertex2f(0.0f, 0.44f);

    glEnd();



    glLineWidth(5.0);
    glBegin(GL_LINES);

	glColor3ub(255, 255, 255);
	glVertex2f(-1.0,  0.07f);
	glVertex2f(-0.70f, 0.07f);

    glEnd();


    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(1.0,  0.07f);
	glVertex2f(0.70f, 0.07f);

    glEnd();








//Scenario

    glLineWidth(2.0);
    glBegin(GL_LINES);
	glColor3ub(138,132,8);
	glVertex2f(-1.0f, 0.5f);
	glVertex2f(1.0f, 0.5f);
	glEnd();



	//left first corner
	  glLineWidth(2.0);
    glBegin(GL_TRIANGLES);
	glColor3ub(145,178,187);
	glVertex2f(-0.45f,  0.0f);
	glVertex2f(-1.0f,  0.0f);
	glVertex2f(-1.0f, -0.8f);

	////left first grass
	  glLineWidth(2.0);
    glBegin(GL_TRIANGLES);
	glColor3ub(193,185,119);
	glVertex2f(-1.0f,  -0.5f);
	glVertex2f(-1.0f,  -0.1f);
	glVertex2f(-0.65f, -0.1f);


    glEnd();


    //left second corner

    glBegin(GL_QUADS);
	glColor3ub(103, 126, 136);
	glVertex2f(-1.0f,  0.15f);
	glVertex2f(-.335f,  0.15f);
	glVertex2f(-0.09f, 0.5f);
	glVertex2f(-1.0f, 0.5f);
    glEnd();




    //left second border
    glBegin(GL_QUADS);
	glColor3ub(105, 105, 103);
	glVertex2f(-.335f,  0.15f);
	glVertex2f(-.322f,  0.12f);

	glVertex2f(-.075f, 0.5f);
	glVertex2f(-0.09f, 0.5f);
    glEnd();



     //Right second border
    glBegin(GL_QUADS);
	glColor3ub(105, 105, 103);
	glVertex2f(0.335f,  0.15f);
	glVertex2f(0.322f,  0.12f);

	glVertex2f(0.075f, 0.5f);
	glVertex2f(0.09f, 0.5f);
    glEnd();


     //left vertical border
    glBegin(GL_QUADS);
	glColor3ub(105, 105, 104);
	glVertex2f(-.335f,  0.15f);
	glVertex2f(-.322f,  0.12f);

	glVertex2f(-1.0f, 0.12f);
	glVertex2f(-1.0f, 0.15f);
    glEnd();



      //Right vertical border
    glBegin(GL_QUADS);
	glColor3ub(105, 105, 104);
	glVertex2f(0.335f,  0.15f);
	glVertex2f(0.322f,  0.12f);

	glVertex2f(1.0f, 0.12f);
	glVertex2f(1.0f, 0.15f);
    glEnd();




 //left second corner
    glBegin(GL_QUADS);
	glColor3ub(145,178,187);
	glVertex2f(-1.0f,  0.15f);
	glVertex2f(-.335f,  0.15f);
	glVertex2f(-0.09f, 0.5f);
	glVertex2f(-1.0f, 0.5f);
    glEnd();

    //left second corner grass
    glBegin(GL_QUADS);
	glColor3ub(193,185,119);
	glVertex2f(-1.0f,  0.23f);
	glVertex2f(-.380f,  0.23f);
	glVertex2f(-0.12f, 0.5f);
	glVertex2f(-1.0f, 0.5f);
    glEnd();



//////Right second corner
     glBegin(GL_QUADS);
	glColor3ub(145,178,187);
	glVertex2f(1.0f,  0.15f);
	glVertex2f(.335f,  0.15f);
	glVertex2f(0.09f, 0.5f);
	glVertex2f(1.0f, 0.5f);
    glEnd();

      //right second corner grass
    glBegin(GL_QUADS);
	glColor3ub(193,185,119);
	glVertex2f(1.0f,  0.23f);
	glVertex2f(.380f,  0.23f);
	glVertex2f(0.12f, 0.5f);
	glVertex2f(1.0f, 0.5f);
    glEnd();

	//tr Light left
    glLineWidth(2.0);
    glBegin(GL_QUADS);
	glColor3ub(219, 180,117);
	glVertex2f(-.60f, -0.15f);
	glVertex2f(-.58f, -0.15f);
	glVertex2f(-0.58f, 0.35f);
	glVertex2f(-0.60f, 0.35f);

    glEnd();


    glLineWidth(2.0);
    glBegin(GL_QUADS);
	glColor3ub(214, 154, 81);
	glVertex2f(-.65f,  0.65f);
	glVertex2f(-.53f,  0.65f);
	glVertex2f(-0.53f, 0.35f);
	glVertex2f(-0.65f, 0.35f);
    glEnd();






    //first corner right
     glLineWidth(2.0);
    glBegin(GL_TRIANGLES);
	glColor3ub(145,178,187);
	glVertex2f(0.45f,  0.0f);
	glVertex2f(1.0f,  0.0f);
	glVertex2f(1.0f, -0.8f);

	////left first grass
	  glLineWidth(2.0);
    glBegin(GL_TRIANGLES);
	glColor3ub(193,185,119);
	glVertex2f(1.0f,  -0.5f);
	glVertex2f(1.0f,  -0.1f);
	glVertex2f(0.65f, -0.1f);


    glEnd();


    glLineWidth(2.0);
    glBegin(GL_QUADS);
	glColor3ub(219, 180,117);
	glVertex2f(.60f, -0.15f);
	glVertex2f(.58f, -0.15f);
	glVertex2f(0.58f, 0.35f);
	glVertex2f(0.60f, 0.35f);

    glEnd();




    glLineWidth(2.0);
    glBegin(GL_QUADS);
	glColor3ub(214, 154, 81);
	glVertex2f(.65f,  0.65f);
	glVertex2f(.53f,  0.65f);
	glVertex2f(0.53f, 0.35f);
	glVertex2f(0.65f, 0.35f);
    glEnd();


  //tr light second left
     ///////////
    glLineWidth(2.0);
    glBegin(GL_QUADS);
	glColor3ub(219, 180,117);
	glVertex2f(-.30f, 0.25f);
	glVertex2f(-.28f, 0.25f);
	glVertex2f(-0.28f, 0.45f);
	glVertex2f(-0.30f, 0.45f);

    glEnd();

     glLineWidth(2.0);
    glBegin(GL_QUADS);
	glColor3ub(214, 154, 81);
	glVertex2f(-.33f, 0.45f);
	glVertex2f(-.25f, 0.45f);
	glVertex2f(-0.25f, 0.63f);
	glVertex2f(-0.33f, 0.63f);

    glEnd();



     //tr light second Right
     ///////////
    glLineWidth(2.0);
    glBegin(GL_QUADS);
	glColor3ub(219, 180,117);
	glVertex2f(.30f, 0.25f);
	glVertex2f(.28f, 0.25f);
	glVertex2f(0.28f, 0.45f);
	glVertex2f(0.30f, 0.45f);

    glEnd();

     glLineWidth(2.0);
    glBegin(GL_QUADS);
	glColor3ub(214, 154, 81);
	glVertex2f(.33f, 0.45f);
	glVertex2f(.25f, 0.45f);
	glVertex2f(0.25f, 0.63f);
	glVertex2f(0.33f, 0.63f);

    glEnd();



    //////////


    glLineWidth(2.0);
    glBegin(GL_QUADS);
	glColor3ub(214, 154, 81);
	glVertex2f(-.65f,  0.65f);
	glVertex2f(-.53f,  0.65f);
	glVertex2f(-0.53f, 0.35f);
	glVertex2f(-0.65f, 0.35f);
    glEnd();



    /////////Light left first

    //left signal light
     draw_circle(-0.59,0.42,0.03, 251,255,0);
     draw_circle(-0.59,0.51,0.03, 29,245,5);
     draw_circle(-0.59,0.60,0.03, 247, 10, 10);



     //right signal light
     draw_circle(0.59,0.42,0.03, 251,255,0);
     draw_circle(0.59,0.51,0.03, 29,245,5);
     draw_circle(0.59,0.60,0.03, 247, 10, 10);


     /////signal light left second

     draw_circle(-0.29,0.49,0.02, 251,255,0);
     draw_circle(-0.29,0.54,0.02, 29,245,5);
     draw_circle(-0.29,0.59,0.02, 247, 10, 10);
/////////////


  /////signal light right second

     draw_circle(0.29,0.49,0.02, 251,255,0);
     draw_circle(0.29,0.54,0.02, 29,245,5);
     draw_circle(0.29,0.59,0.02, 247, 10, 10);
/////////////



//left first border of road
	  glLineWidth(2.0);
    glBegin(GL_QUADS);
	glColor3ub(105, 105, 103);
	glVertex2f(-0.435f,  -0.03f);
	glVertex2f(-.45f,  0.0f);
	glVertex2f(-1.0f, -0.8f);
	glVertex2f(-1.0f, -0.90f);

    glEnd();

//Right border of road
      glLineWidth(2.0);
    glBegin(GL_QUADS);
	glColor3ub(105, 105, 103);
	glVertex2f(0.435f,  -0.03f);
	glVertex2f(.45f,  -0.0f);
	glVertex2f(1.0f, -0.8f);
	glVertex2f(1.0f, -0.90f);

    glEnd();


	// Render now
	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Traffic Light Signal Scenario");
	glutInitWindowSize(320, 320);
	glutReshapeWindow(700,800);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(display);
	initGL();
	glutMainLoop();
	return 0;
}

