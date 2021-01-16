#include <windows.h>

#include <bits/stdc++.h>

#include <GL/glut.h>

#define PI 3.14159265358979323846

using namespace std;





int position_launch1 = 0;

int position_cloud1 = 0;

int position_cloud2 = 0;

int position_cloud3 = 0;

int speed_cloud1 = 4;

int speed_cloud2 = 2;

int speed_cloud3 = 3;

int speed_launch1 = 0;





int position_boat1 = 0;

int position_boat2 = 0;

int speed_boat1 = 6;

int speed_boat2 = 3;





void Move_launch1(int value)

{

    if(position_launch1 > 1350)

        position_launch1 = 700;


    if(position_launch1 < 0)

        position_launch1 = 0;



    position_launch1 += speed_launch1;

    glutPostRedisplay();

    glutTimerFunc(100 , Move_launch1, 0);



}



void Move_cloud1(int value)
{

    if(position_cloud1 > 1350)

        position_cloud1 = -90;



    position_cloud1 += speed_cloud1;

    glutPostRedisplay();

    glutTimerFunc(100, Move_cloud1, 0);

}



void Move_cloud2(int value)
{

    if(position_cloud2 > 1100)

        position_cloud2 = -300;



    position_cloud2 += speed_cloud2;

    glutPostRedisplay();

    glutTimerFunc(100, Move_cloud2, 0);

}



void Move_cloud3(int value)
{

    if(position_cloud3 > 1100)

        position_cloud3 = -500;



    position_cloud3 += speed_cloud3;

    glutPostRedisplay();

    glutTimerFunc(100, Move_cloud3, 0);

}



void Move_boat1(int value)
{



    if(position_boat1 < -1000)

        position_boat1 = 500;



    position_boat1 -= speed_boat1;

    glutPostRedisplay();

    glutTimerFunc(100, Move_boat1, 0);

}



void Move_boat2(int value)
{



    if(position_boat2 > 1000)

        position_boat2 = -100;



    position_boat2 += speed_boat2;

    glutPostRedisplay();

    glutTimerFunc(100, Move_boat2, 0);

}





void sun()

{

    int i;



    int  x=1100;
    int y=630;
    int radius =45;

    int triangleAmount = 20;

    GLfloat twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 255, 0);

    glVertex2f(x, y);

    for(i = 0; i <= triangleAmount; i++)
    {

        glVertex2f(

            x + (radius * cos(i *  twicePi / triangleAmount)),

            y + (radius * sin(i * twicePi / triangleAmount))

        );

    }

    glEnd();

}

void cloud1()

{



    glPushMatrix();

    glTranslatef(position_cloud1,0.0f, 0.0f);



    int i;



    int  x=110;
    int y=550;
    int radius =30;

    int triangleAmount = 20;

    GLfloat twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 255, 255);

    glVertex2f(x, y);

    for(i = 0; i <= triangleAmount; i++)
    {

        glVertex2f(

            x + (radius * cos(i *  twicePi / triangleAmount)),

            y + (radius * sin(i * twicePi / triangleAmount))

        );

    }

    glEnd();





    int a=150,b=580;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 255, 255);

    glVertex2f(a, b); // center of circle

    for(i = 0; i <= triangleAmount; i++)
    {

        glVertex2f(

            a + (radius * cos(i *  twicePi / triangleAmount)),

            b + (radius * sin(i * twicePi / triangleAmount))

        );

    }

    glEnd();


    int c=200,d=570;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 255, 255);

    glVertex2f(c, d); // center of circle

    for(i = 0; i <= triangleAmount; i++)
    {

        glVertex2f(

            c + (radius * cos(i *  twicePi / triangleAmount)),

            d + (radius * sin(i * twicePi / triangleAmount))

        );

    }

    glEnd();



    int e=160,f=540;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 255, 255);

    glVertex2f(e, f); // center of circle

    for(i = 0; i <= triangleAmount; i++)
    {

        glVertex2f(

            e + (radius * cos(i *  twicePi / triangleAmount)),

            f+ (radius * sin(i * twicePi / triangleAmount))

        );

    }

    glEnd();


    glPopMatrix();



}

void cloud2()

{



    glPushMatrix();

    glTranslatef(position_cloud2,0.0f, 0.0f);



    int i;



    int  x=400;
    int y=670;
    int radius =30;

    int triangleAmount = 20;

    GLfloat twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 255, 255);

    glVertex2f(x, y);

    for(i = 0; i <= triangleAmount; i++)
    {

        glVertex2f(

            x + (radius * cos(i *  twicePi / triangleAmount)),

            y + (radius * sin(i * twicePi / triangleAmount))

        );

    }

    glEnd();





    int a=450,b=680;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 255, 255);

    glVertex2f(a, b); // center of circle

    for(i = 0; i <= triangleAmount; i++)
    {

        glVertex2f(

            a + (radius * cos(i *  twicePi / triangleAmount)),

            b + (radius * sin(i * twicePi / triangleAmount))

        );

    }

    glEnd();





    int c=500,d=675;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 255, 255);

    glVertex2f(c, d); // center of circle

    for(i = 0; i <= triangleAmount; i++)
    {

        glVertex2f(

            c + (radius * cos(i *  twicePi / triangleAmount)),

            d + (radius * sin(i * twicePi / triangleAmount))

        );

    }

    glEnd();



    int e=480,f=645;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 255, 255);

    glVertex2f(e, f); // center of circle

    for(i = 0; i <= triangleAmount; i++)
    {

        glVertex2f(

            e + (radius * cos(i *  twicePi / triangleAmount)),

            f+ (radius * sin(i * twicePi / triangleAmount))

        );

    }

    glEnd();



    e=435,f=635;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 255, 255);

    glVertex2f(e, f); // center of circle

    for(i = 0; i <= triangleAmount; i++)
    {

        glVertex2f(

            e + (radius * cos(i *  twicePi / triangleAmount)),

            f+ (radius * sin(i * twicePi / triangleAmount))

        );

    }

    glEnd();





    e=390,f=637;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 255, 255);

    glVertex2f(e, f); // center of circle

    for(i = 0; i <= triangleAmount; i++)
    {

        glVertex2f(

            e + (radius * cos(i *  twicePi / triangleAmount)),

            f+ (radius * sin(i * twicePi / triangleAmount))

        );

    }

    glEnd();





    glPopMatrix();



}

void cloud3()

{



    glPushMatrix();

    glTranslatef(position_cloud3,0.0f, 0.0f);



    int i;



    int  x=900;
    int y=650;
    int radius =30;

    int triangleAmount = 20;

    GLfloat twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 255, 255);

    glVertex2f(x, y);

    for(i = 0; i <= triangleAmount; i++)
    {

        glVertex2f(

            x + (radius * cos(i *  twicePi / triangleAmount)),

            y + (radius * sin(i * twicePi / triangleAmount))

        );

    }

    glEnd();





    int a=940,b=680;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 255, 255);

    glVertex2f(a, b); // center of circle

    for(i = 0; i <= triangleAmount; i++)
    {

        glVertex2f(

            a + (radius * cos(i *  twicePi / triangleAmount)),

            b + (radius * sin(i * twicePi / triangleAmount))

        );

    }

    glEnd();





    int c=950,d=660;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 255, 255);

    glVertex2f(c, d); // center of circle

    for(i = 0; i <= triangleAmount; i++)
    {

        glVertex2f(

            c + (radius * cos(i *  twicePi / triangleAmount)),

            d + (radius * sin(i * twicePi / triangleAmount))

        );

    }

    glEnd();



    int e=990,f=667;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 255, 255);

    glVertex2f(e, f); // center of circle

    for(i = 0; i <= triangleAmount; i++)
    {

        glVertex2f(

            e + (radius * cos(i *  twicePi / triangleAmount)),

            f+ (radius * sin(i * twicePi / triangleAmount))

        );

    }

    glEnd();





    glPopMatrix();



}

void boat1()

{

    glPushMatrix();

    glTranslatef(position_boat1,0.0f, 0.0f);



    glBegin(GL_POLYGON);

    glColor3ub(45, 46, 45) ;

    glVertex2i (1086,390);

    glVertex2i (1084,404);



    glVertex2i (1003,404);

    //glVertex2i (970,413);

    glVertex2i (1000,390);

    glEnd();





    glBegin(GL_TRIANGLES);

    glColor3ub(45, 46, 45) ;

    glVertex2i (1000,390);

    glVertex2i (1003,404);

    glVertex2i (980,412);

    glEnd();





    glBegin(GL_POLYGON);

    glColor3ub(45, 46, 45) ;

    glVertex2i (1092,404);

    glVertex2i (1092,413);



    glVertex2i (1070,413);

    glVertex2i (1070,404);

    glEnd();





    glPopMatrix();

}

void boat2()

{

    glPushMatrix();

    glTranslatef(position_boat2,0.0f, 0.0f);



    glBegin(GL_QUADS);

    glColor3ub(45, 46, 45) ;

    glVertex2i (500,405);

    glVertex2i (500,420);

    glVertex2i (430,420);

    glVertex2i (430,405);



    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(45, 46, 45) ;



    glVertex2i (430,405);

    glVertex2i (430,425);

    glVertex2i (405,425);

    glVertex2i (405,405);



    glEnd();



    glBegin(GL_TRIANGLES);

    glColor3ub(45, 46, 45) ;



    glVertex2i (500,425);

    glVertex2i (500,405);

    glVertex2i (530,425);



    glEnd();



    glPopMatrix();

}

void terminal()

{

    glBegin(GL_TRIANGLES); ///////// main terminal wall under shed

    glColor3ub(153.0f,204.0f,255.0f) ;

    glVertex2i (150,180);

    glVertex2i (230,180);

    glVertex2i (150,90);

    glEnd();





    glColor3ub(102.0f,51.0f,0.0f) ; //////////// ghat

    glBegin(GL_QUADS);



    glVertex2i (150,90);

    glVertex2i (360,90);

    glVertex2i (470,350);

    glVertex2i (360,350);



    glColor3ub(51.0f,25.0f,0.0f) ;

    glVertex2i (360,90);

    glVertex2i (360,0);

    glVertex2i (470,320);

    glVertex2i (470,350);



    glColor3ub(51.0f,25.0f,0.0f) ;

    glVertex2i (150,90);

    glVertex2i (360,90);

    glVertex2i (360,0);

    glVertex2i (150,0);



    glColor3ub(102.0f,51.0f,0.0f) ;

    glVertex2i (142,80);

    glVertex2i (80,0);

    glVertex2i (325,0);

    glVertex2i (355,80);



    glEnd();



    glColor3ub(0.0f,102.0f,204.0f) ; ///////// main terminal shed up

    glBegin(GL_QUADS);



    glVertex2i (210,180);

    glVertex2i (310,180);

    glVertex2i (430,400);

    glVertex2i (390,400);



    glEnd();



    glColor3ub(0.0f,102.0f,204.0f) ; ///////// main terminal shed down

    glBegin(GL_QUADS);



    glVertex2i (120,160);

    glVertex2i (295,160);

    glVertex2i (200,0);

    glVertex2i (-15,0);



    glEnd();

}

void gangway()

{

    glColor3ub(224.0f,224.0f,224.0f) ; // 1st gangway walkway

    glBegin(GL_QUADS);

    glVertex2i (0,250);

    glVertex2i (200,205);

    glVertex2i (230,230);

    glVertex2i (40,270);

    glEnd();



    glColor3ub(224.0f,224.0f,224.0f) ; // 2nd gangway walkway

    glBegin(GL_QUADS);

    glVertex2i (105,325);

    glVertex2i (300,290);

    glVertex2i (320,310);

    glVertex2i (135,340);

    glEnd();



    glColor3ub(224.0f,224.0f,224.0f) ; // 3rd gangway walkway

    glBegin(GL_QUADS);

    glVertex2i (180,380);

    glVertex2i (320,360);

    glVertex2i (330,375);

    glVertex2i (205,390);

    glEnd();



    glColor3ub(32.0f,32.0f,32.0f) ; // 1st gangway side fence

    glBegin(GL_QUADS);



    glVertex2i (0,280);

    glVertex2i (0,250);

    glVertex2i (10,248);

    glVertex2i (10,278);



    glVertex2i (60,268);

    glVertex2i (60,236);

    glVertex2i (70,234);

    glVertex2i (70,266);



    glVertex2i (120,257);

    glVertex2i (120,222);

    glVertex2i (130,220);

    glVertex2i (130,255);



    glVertex2i (180,245);

    glVertex2i (180,210);

    glVertex2i (190,208);

    glVertex2i (190,243);



    glVertex2i (10,253);

    glVertex2i (10,248);

    glVertex2i (60,263);

    glVertex2i (60,268);



    glVertex2i (70,239);

    glVertex2i (70,234);

    glVertex2i (120,252);

    glVertex2i (120,257);



    glVertex2i (130,225);

    glVertex2i (130,220);

    glVertex2i (180,240);

    glVertex2i (180,245);



    glEnd();



    glColor3ub(45.0f,45.0f,45.0f) ; // 2nd gangway side fence

    glBegin(GL_QUADS);



    glVertex2i (105,325);

    glVertex2i (105,345);

    glVertex2i (115,344);

    glVertex2i (115,323);



    glVertex2i (165,314);

    glVertex2i (165,336);

    glVertex2i (175,335);

    glVertex2i (175,312);



    glVertex2i (225,303);

    glVertex2i (225,327);

    glVertex2i (235,325);

    glVertex2i (235,301);



    glVertex2i (115,328);

    glVertex2i (165,336);

    glVertex2i (165,331);

    glVertex2i (115,323);



    glVertex2i (175,317);

    glVertex2i (225,327);

    glVertex2i (225,322);

    glVertex2i (175,312);



    glVertex2i (235,306);

    glVertex2i (285,318);

    glVertex2i (285,313);

    glVertex2i (235,301);



    glEnd();



    glColor3ub(64.0f,64.0f,64.0f) ; // 3rd gangway side fence

    glBegin(GL_QUADS);



    glVertex2i (180,380);

    glVertex2i (180,391);

    glVertex2i (187,389);

    glVertex2i (187,379);



    glVertex2i (230,372);

    glVertex2i (230,386);

    glVertex2i (237,385);

    glVertex2i (237,371);



    glVertex2i (280,365);

    glVertex2i (280,379);

    glVertex2i (287,378);

    glVertex2i (287,364);



    glVertex2i (187,379);

    glVertex2i (230,384);

    glVertex2i (230,386);

    glVertex2i (187,381);



    glVertex2i (237,371);

    glVertex2i (280,377);

    glVertex2i (280,379);

    glVertex2i (237,373);



    glVertex2i (287,364);

    glVertex2i (340,377);

    glVertex2i (340,380);

    glVertex2i (287,366);



    glEnd();



    glColor3ub(0.0f,102.0f,204.0f) ; ///////// main terminal shed

    glBegin(GL_QUADS);



    glVertex2i (140,180);

    glVertex2i (310,180);

    glVertex2i (430,400);

    glVertex2i (340,400);



    glEnd();



    glColor3ub(0.0f,153.0f,76.0f) ; ///////////////////////////////////////////// 1st gangway

    glBegin(GL_QUADS);



    glVertex2i (0,280);

    glVertex2i (250,230);

    glVertex2i (265,265);

    glVertex2i (20,310);



    glColor3ub(0.0f,204.0f,102.0f) ; // mini shade

    glVertex2i (40,310);

    glVertex2i (20,310);

    glVertex2i (265,265);

    glVertex2i (280,265);

    glEnd();



    glColor3ub(0.0f,153.0f,76.0f) ; ///////////////////////////////////////////// 2nd gangway

    glBegin(GL_QUADS);



    glVertex2i (105,345);

    glVertex2i (310,313);

    glVertex2i (320,340);

    glVertex2i (120,368);



    glColor3ub(0.0f,204.0f,102.0f) ;// mini shade

    glVertex2i (120,368);

    glVertex2i (320,340);

    glVertex2i (330,340);

    glVertex2i (140,368);

    glEnd();



    glColor3ub(0.0f,153.0f,76.0f) ; ///////////////////////////////////////////// 3rd gangway

    glBegin(GL_QUADS);



    glVertex2i (180,390);

    glVertex2i (350,370);

    glVertex2i (360,392);

    glVertex2i (195,410);



    glColor3ub(0.0f,204.0f,102.0f) ;// mini shade

    glVertex2i (195,410);

    glVertex2i (360,392);

    glVertex2i (370,392);

    glVertex2i (205,410);

    glEnd();



}

void building()

{

    glColor3ub(204.0f,204.0f,255.0f) ; ////////// 4

    glBegin(GL_QUADS);



    glVertex2i (120,480);

    glVertex2i (120,370);

    glVertex2i (160,392);

    glVertex2i (160,470);



    glColor3ub(153.0f,153.0f,255.0f) ;

    glVertex2i (120,480);

    glVertex2i (100,480);

    glVertex2i (100,400);

    glVertex2i (120,400);

    glEnd();



    glColor3ub(224.0f,224.0f,224.0f) ; ///////// 3

    glBegin(GL_QUADS);



    glVertex2i (80,480);

    glVertex2i (80,348);

    glVertex2i (120,370);

    glVertex2i (120,470);



    glColor3ub(192.0f,192.0f,192.0f) ;

    glVertex2i (80,480);

    glVertex2i (40,480);

    glVertex2i (40,370);

    glVertex2i (80,370);

    glEnd();



    glColor3ub(160.0f,160.0f,160.0f) ; ///////// 1

    glBegin(GL_QUADS);



    glVertex2i (0,460);

    glVertex2i (0,300);

    glVertex2i (50,330);

    glVertex2i (50,450);

    glEnd();



    glColor3ub(96.0f,96.0f,96.0f) ; //////////// 2

    glBegin(GL_QUADS);



    glVertex2i (50,440);

    glVertex2i (50,330);

    glVertex2i (80,348);

    glVertex2i (80,435);

    glEnd();



    glColor3ub(224.0f,224.0f,224.0f) ; ///////// 6

    glBegin(GL_QUADS);



    glVertex2i (180,470);

    glVertex2i (180,403);

    glVertex2i (200,414);

    glVertex2i (200,463);



    glColor3ub(192.0f,192.0f,192.0f) ;

    glVertex2i (180,470);

    glVertex2i (165,470);

    glVertex2i (165,435);

    glVertex2i (180,435);

    glEnd();



    glColor3ub(160.0f,160.0f,160.0f) ; ///////// 5

    glBegin(GL_QUADS);



    glVertex2i (160,460);

    glVertex2i (160,392);

    glVertex2i (180,403);

    glVertex2i (180,455);

    glEnd();

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    glColor3ub(0.0f,102.0f,204.0f) ;//////////// blue shade

    glBegin(GL_QUADS);



    glVertex2i (0,315);

    glVertex2i (0,280);

    glVertex2i (220,415);

    glVertex2i (200,415);

    glEnd();



    glColor3ub(255.0f,204.0f,153.0f) ; //////// wall under blue shade

    glBegin(GL_QUADS);



    glVertex2i (0,280);

    glVertex2i (0,230);

    glVertex2i (220,400);

    glVertex2i (220,415);

    glEnd();



    glColor3ub(160.0f,160.0f,160.0f) ; ////////// brick blocks square under gangway

    glBegin(GL_POLYGON);



    glVertex2i (0,230);

    glVertex2i (0,0);

    glVertex2i (150,0);

    glVertex2i (350,350);

    glVertex2i (220,400);

    glEnd();

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

void launch2()

{

    /*glPushMatrix();

    glTranslatef(position_launch1,0.0f, 0.0f);*/



    glBegin(GL_QUADS);  //  front bim

    {

        glColor3ub(51.0f,255.0f,153.0f) ;

        glVertex2i(395,100+50);

        glVertex2i(400,100+50);

        glVertex2i(400,280+50);

        glVertex2i(395,280+50);



        glEnd();

    }



    glBegin(GL_TRIANGLES);  // flag

    {

        glColor3ub(102.0f,102.0f,255.0f) ;

        glVertex2i(395,278+50);

        glVertex2i(395,258+50);

        glVertex2i(430,268+50);



        glEnd();

    }



    glBegin(GL_QUADS);  // radar

    {

        glColor3ub(255.0f,255.0f,204.0f) ;

        glVertex2i(560,295+50);

        glVertex2i(580,295+50);

        glVertex2i(600,340+50);

        glVertex2i(590,340+50);

        glEnd();



        glLineWidth(2);

        glBegin(GL_LINES);

        glColor3ub(255.0f,255.0f,204.0f) ;

        glVertex2i(550,310+50);

        glVertex2i(604,310+50);



        glVertex2i(560,320+50);

        glVertex2i(603,320+50);



        glVertex2i(570,330+50);

        glVertex2i(605,330+50);

        glEnd();

    }



    glBegin(GL_QUADS);  // 1st floor wall

    {

        glColor3ub(255.0f,255.0f,153.0f) ;

        glVertex2i(540,80+50);

        glVertex2i(1350,80+50);

        glVertex2i(1350,160+50);

        glVertex2i(540,160+50);

        glEnd();





        glLineWidth(3);

        glBegin(GL_LINES);

        glColor3ub(25.0f,25.0f,24.0f) ;

        glVertex2i(550,160+50);

        glVertex2i(625,110+50);



        glVertex2i(625,110+50);

        glVertex2i(700,160+50);



        glVertex2i(710,160+50);

        glVertex2i(785,110+50);



        glVertex2i(785,110+50);

        glVertex2i(860,160+50);



        glVertex2i(870,160+50);

        glVertex2i(945,110+50);



        glVertex2i(945,110+50);

        glVertex2i(1020,160+50);



        glVertex2i(1030,160+50);

        glVertex2i(1105,110+50);



        glVertex2i(1105,110+50);

        glVertex2i(1180,160+50);



        glVertex2i(1195,160+50);

        glVertex2i(1260,110+50);



        glVertex2i(1260,110+50);

        glVertex2i(1320,160+50);

        glEnd();

    }



    glBegin(GL_QUADS);  // 2nd floor wall

    {

        glColor3ub(255.0f,255.0f,153.0f) ;

        glVertex2i(540,175+50); //1st wall

        glVertex2i(1050,175+50);

        glVertex2i(1050,220+50);

        glVertex2i(540,220+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(540,190+50);

        glVertex2i(580,190+50);

        glVertex2i(580,210+50);

        glVertex2i(540,210+50);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(595,175+50);

        glVertex2i(615,175+50);

        glVertex2i(615,210+50);

        glVertex2i(595,210+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(630,190+50);

        glVertex2i(660,190+50);

        glVertex2i(660,210+50);

        glVertex2i(630,210+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(670,190+50);

        glVertex2i(700,190+50);

        glVertex2i(700,210+50);

        glVertex2i(670,210+50);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(730,175+50);

        glVertex2i(750,175+50);

        glVertex2i(750,210+50);

        glVertex2i(730,210+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(770,190+50);

        glVertex2i(800,190+50);

        glVertex2i(800,210+50);

        glVertex2i(770,210+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(810,190+50);

        glVertex2i(840,190+50);

        glVertex2i(840,210+50);

        glVertex2i(810,210+50);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(850,175+50);

        glVertex2i(870,175+50);

        glVertex2i(870,210+50);

        glVertex2i(850,210+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(890,190+50);

        glVertex2i(920,190+50);

        glVertex2i(920,210+50);

        glVertex2i(890,210+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(930,190+50);

        glVertex2i(960,190+50);

        glVertex2i(960,210+50);

        glVertex2i(930,210+50);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(970,175+50);

        glVertex2i(990,175+50);

        glVertex2i(990,210+50);

        glVertex2i(970,210+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(1000,190+50);

        glVertex2i(1020,190+50);

        glVertex2i(1020,210+50);

        glVertex2i(1000,210+50);





        glColor3ub(255.0f,255.0f,153.0f) ;

        glVertex2i(1070,175+50);  //2nd wall

        glVertex2i(1350,175+50);

        glVertex2i(1350,220+50);

        glVertex2i(1070,220+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(1080,190+50);

        glVertex2i(1110,190+50);

        glVertex2i(1110,210+50);

        glVertex2i(1080,210+50);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(1120,175+50);

        glVertex2i(1140,175+50);

        glVertex2i(1140,210+50);

        glVertex2i(1120,210+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(1150,190+50);

        glVertex2i(1180,190+50);

        glVertex2i(1180,210+50);

        glVertex2i(1150,210+50);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(1200,175+50);

        glVertex2i(1220,175+50);

        glVertex2i(1220,210+50);

        glVertex2i(1200,210+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(1230,190+50);

        glVertex2i(1260,190+50);

        glVertex2i(1260,210+50);

        glVertex2i(1230,210+50);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(1270,175+50);

        glVertex2i(1290,175+50);

        glVertex2i(1290,210+50);

        glVertex2i(1270,210+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(1300,190+50);

        glVertex2i(1330,190+50);

        glVertex2i(1330,210+50);

        glVertex2i(1300,210+50);



        glEnd();

    }



    glBegin(GL_QUADS);  // 3rd floor wall

    {

        glColor3ub(255.0f,255.0f,153.0f) ;

        glVertex2i(540,235+50); // 1st wall

        glVertex2i(920,235+50);

        glVertex2i(920,280+50);

        glVertex2i(540,280+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(540,250+50);

        glVertex2i(580,250+50);

        glVertex2i(580,280+50);

        glVertex2i(540,280+50);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(595,235+50);

        glVertex2i(615,235+50);

        glVertex2i(615,270+50);

        glVertex2i(595,270+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(630,250+50);

        glVertex2i(660,250+50);

        glVertex2i(660,270+50);

        glVertex2i(630,270+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(670,250+50);

        glVertex2i(700,250+50);

        glVertex2i(700,270+50);

        glVertex2i(670,270+50);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(730,235+50);

        glVertex2i(750,235+50);

        glVertex2i(750,270+50);

        glVertex2i(730,270+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(770,250+50);

        glVertex2i(800,250+50);

        glVertex2i(800,270+50);

        glVertex2i(770,270+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(810,250+50);

        glVertex2i(840,250+50);

        glVertex2i(840,270+50);

        glVertex2i(810,270+50);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(850,235+50);

        glVertex2i(870,235+50);

        glVertex2i(870,270+50);

        glVertex2i(850,270+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(890,250+50);

        glVertex2i(920,250+50);

        glVertex2i(920,270+50);

        glVertex2i(890,270+50);





        glColor3ub(255.0f,255.0f,153.0f) ;

        glVertex2i(940,235+50); //2nd wall

        glVertex2i(1200,235+50);

        glVertex2i(1200,280+50);

        glVertex2i(940,280+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(950,250+50);

        glVertex2i(980,250+50);

        glVertex2i(980,270+50);

        glVertex2i(950,270+50);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(990,235+50);

        glVertex2i(1010,235+50);

        glVertex2i(1010,270+50);

        glVertex2i(990,270+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(1030,250+50);

        glVertex2i(1060,250+50);

        glVertex2i(1060,270+50);

        glVertex2i(1030,270+50);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(1070,235+50);

        glVertex2i(1090,235+50);

        glVertex2i(1090,270+50);

        glVertex2i(1070,270+50);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(1100,250+50);

        glVertex2i(1130,250+50);

        glVertex2i(1130,270+50);

        glVertex2i(1100,270+50);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(1140,235+50);

        glVertex2i(1160,235+50);

        glVertex2i(1160,270+50);

        glVertex2i(1140,270+50);



        glEnd();

    }



    glBegin(GL_TRIANGLES); //3rd floor front triangle

    glColor3ub(51.0f,153.0f,255.0f) ;

    glVertex2i(520,280+50);

    glVertex2i(540,280+50);

    glVertex2i(540,260+50);

    glEnd();



    glBegin(GL_TRIANGLES); //3rd floor back triangle

    glColor3ub(0.0f,51.0f,102.0f) ;

    glVertex2i(1220,280+50);

    glVertex2i(1220,235+50);

    glVertex2i(1270,235+50);

    glEnd();





    glBegin(GL_QUADS); // Head

    {

        glColor3ub(0.0f,0.0f,51.0f) ;

        glVertex2i(310,150+50);        ////     0  ( Head  )

        glVertex2i(330,140+50);

        glVertex2i(470,140+50);

        glVertex2i(465,147+50);



        glColor3ub(255.0f,255.0f,255.0f) ;

        glVertex2i(310,150+50);        /////    1

        glVertex2i(330,140+50);

        glVertex2i(465,140+50);

        glVertex2i(460,145+50);



        glColor3ub(255.0f,255.0f,255.0f) ;////   2

        glVertex2i(330,140+50);

        glVertex2i(360,120+50);

        glVertex2i(500,120+50);

        glVertex2i(495,140+50);



        glColor3ub(153.0f,204.0f,255.0f) ;////  3

        //  3

        glVertex2i(360,120+50);

        glVertex2i(385,100+50);

        glVertex2i(500,100+50);

        glVertex2i(500,120+50);



        glColor3ub(51.0f,153.0f,255.0f) ;////   4

        glVertex2i(385,100+50);

        glVertex2i(405,80+50);

        glVertex2i(500,80+50);

        glVertex2i(500,100+50);

    }



    glColor3ub(0.0f,0.0f,51.0f) ;//// 2nd down surface

    glVertex2i(405,80+50);

    glVertex2i(420,60+50);

    glVertex2i(1350,60+50);

    glVertex2i(1350,80+50);



    glColor3ub(100.0f,13.0f,25.0f) ; ////  1st down surface

    glVertex2i(420,60+50);

    glVertex2i(430,40+50);

    glVertex2i(1350,40+50);

    glVertex2i(1350,60+50);



    glColor3ub(0.0f,51.0f,102.0f) ;// body 1st floor

    glVertex2i(530,110+50);

    glVertex2i(530,80+50);

    glVertex2i(1350,80+50);

    glVertex2i(1350,110+50);



    {

        glColor3ub(0.0f,51.0f,102.0f) ; //1st floor roof

        glVertex2i(390,160+50);

        glVertex2i(390,175+50);

        glVertex2i(1350,175+50);

        glVertex2i(1350,160+50);





        //glColor3ub(120.0f,13.0f,25.0f) ;//down

        glVertex2i(530,110+50);

        glVertex2i(540,120+50);

        glVertex2i(560,120+50);

        glVertex2i(560,110+50);



        //glColor3ub(200.0f,13.0f,25.0f) ; //mid

        glVertex2i(540,120+50);

        glVertex2i(540,150+50);

        glVertex2i(560,150+50);

        glVertex2i(560,120+50);



        //glColor3ub(0.0f,183.0f,85.0f) ; //up

        glVertex2i(540,150+50);

        glVertex2i(530,160+50);

        glVertex2i(570,160+50);

        glVertex2i(560,150+50);





        glVertex2i(700,80+50);///////

        glVertex2i(700,280+50);

        glVertex2i(720,280+50);

        glVertex2i(720,80+50);



        glVertex2i(860,80+50);

        glVertex2i(860,280+50);

        glVertex2i(880,280+50);

        glVertex2i(880,80+50);



        glVertex2i(1020,80+50);

        glVertex2i(1020,280+50);

        glVertex2i(1040,280+50);

        glVertex2i(1040,80+50);



        glVertex2i(1180,80+50);

        glVertex2i(1180,280+50);

        glVertex2i(1200,280+50);

        glVertex2i(1200,80+50);



        glVertex2i(1320,80+50);

        glVertex2i(1320,220+50);

        glVertex2i(1340,220+50);

        glVertex2i(1340,80+50);

    }



    {

        glColor3ub(0.0f,51.0f,102.0f) ; // 2nd floor roof

        glVertex2i(390,220+50);

        glVertex2i(390,235+50);

        glVertex2i(1350,235+50);

        glVertex2i(1350,220+50);



        glVertex2i(530,175+50);

        glVertex2i(540,185+50);

        glVertex2i(560,185+50);

        glVertex2i(570,175+50);



        glVertex2i(530,220+50);

        glVertex2i(540,210+50);

        glVertex2i(560,210+50);

        glVertex2i(570,220+50);



        glVertex2i(540,185+50);

        glVertex2i(540,210+50);

        glVertex2i(560,210+50);

        glVertex2i(560,185+50);



    }



    {

        glColor3ub(0.0f,51.0f,102.0f) ; //3rd floor roof

        glVertex2i(520,280+50);

        glVertex2i(520,295+50);

        glVertex2i(1220,295+50);

        glVertex2i(1220,280+50);



        glVertex2i(530,235+50);

        glVertex2i(540,245+50);

        glVertex2i(560,245+50);

        glVertex2i(570,235+50);



        glVertex2i(530,280+50);

        glVertex2i(540,270+50);

        glVertex2i(560,270+50);

        glVertex2i(570,280+50);



        glVertex2i(540,270+50);

        glVertex2i(540,245+50);

        glVertex2i(560,245+50);

        glVertex2i(560,270+50);



        glVertex2i(1200,235+50);

        glVertex2i(1200,280+50);

        glVertex2i(1220,280+50);

        glVertex2i(1220,235+50);



    }



    glEnd();

    //glPopMatrix();

}

void launch1()

{

    glPushMatrix();

    glTranslatef(position_launch1,0.0f, 0.0f);



    glBegin(GL_QUADS);  //  front bim

    {

        glColor3ub(224.0f,224.0f,224.0f) ;

        glVertex2i(395,100);

        glVertex2i(400,100);

        glVertex2i(400,280);

        glVertex2i(395,280);



        glEnd();

    }



    glBegin(GL_TRIANGLES);  // flag

    {

        glColor3ub(224.0f,224.0f,224.0f) ;

        glVertex2i(395,278);

        glVertex2i(395,258);

        glVertex2i(430,268);



        glEnd();

    }



    glBegin(GL_QUADS);  // radar

    {

        glColor3ub(255.0f,255.0f,204.0f) ;

        glVertex2i(560,295);

        glVertex2i(580,295);

        glVertex2i(600,340);

        glVertex2i(590,340);

        glEnd();



        glLineWidth(2);

        glBegin(GL_LINES);

        glColor3ub(255.0f,255.0f,204.0f) ;

        glVertex2i(550,310);

        glVertex2i(604,310);



        glVertex2i(560,320);

        glVertex2i(603,320);



        glVertex2i(570,330);

        glVertex2i(605,330);

        glEnd();

    }



    glBegin(GL_QUADS);  // 1st floor wall

    {

        glColor3ub(255.0f,255.0f,204.0f) ;

        glVertex2i(540,80);

        glVertex2i(1350,80);

        glVertex2i(1350,160);

        glVertex2i(540,160);

        glEnd();





        glLineWidth(3);

        glBegin(GL_LINES);

        glColor3ub(25.0f,25.0f,24.0f) ;

        glVertex2i(550,160);

        glVertex2i(625,110);



        glVertex2i(625,110);

        glVertex2i(700,160);



        glVertex2i(710,160);

        glVertex2i(785,110);



        glVertex2i(785,110);

        glVertex2i(860,160);



        glVertex2i(870,160);

        glVertex2i(945,110);



        glVertex2i(945,110);

        glVertex2i(1020,160);



        glVertex2i(1030,160);

        glVertex2i(1105,110);



        glVertex2i(1105,110);

        glVertex2i(1180,160);



        glVertex2i(1195,160);

        glVertex2i(1260,110);



        glVertex2i(1260,110);

        glVertex2i(1320,160);

        glEnd();

    }



    glBegin(GL_QUADS);  // 2nd floor wall

    {

        glColor3ub(255.0f,255.0f,204.0f) ;

        glVertex2i(540,175); //1st wall

        glVertex2i(1050,175);

        glVertex2i(1050,220);

        glVertex2i(540,220);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(540,190);

        glVertex2i(580,190);

        glVertex2i(580,210);

        glVertex2i(540,210);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(595,175);

        glVertex2i(615,175);

        glVertex2i(615,210);

        glVertex2i(595,210);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(630,190);

        glVertex2i(660,190);

        glVertex2i(660,210);

        glVertex2i(630,210);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(670,190);

        glVertex2i(700,190);

        glVertex2i(700,210);

        glVertex2i(670,210);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(730,175);

        glVertex2i(750,175);

        glVertex2i(750,210);

        glVertex2i(730,210);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(770,190);

        glVertex2i(800,190);

        glVertex2i(800,210);

        glVertex2i(770,210);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(810,190);

        glVertex2i(840,190);

        glVertex2i(840,210);

        glVertex2i(810,210);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(850,175);

        glVertex2i(870,175);

        glVertex2i(870,210);

        glVertex2i(850,210);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(890,190);

        glVertex2i(920,190);

        glVertex2i(920,210);

        glVertex2i(890,210);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(930,190);

        glVertex2i(960,190);

        glVertex2i(960,210);

        glVertex2i(930,210);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(970,175);

        glVertex2i(990,175);

        glVertex2i(990,210);

        glVertex2i(970,210);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(1000,190);

        glVertex2i(1020,190);

        glVertex2i(1020,210);

        glVertex2i(1000,210);





        glColor3ub(255.0f,255.0f,204.0f) ;

        glVertex2i(1070,175);  //2nd wall

        glVertex2i(1350,175);

        glVertex2i(1350,220);

        glVertex2i(1070,220);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(1080,190);

        glVertex2i(1110,190);

        glVertex2i(1110,210);

        glVertex2i(1080,210);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(1120,175);

        glVertex2i(1140,175);

        glVertex2i(1140,210);

        glVertex2i(1120,210);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(1150,190);

        glVertex2i(1180,190);

        glVertex2i(1180,210);

        glVertex2i(1150,210);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(1200,175);

        glVertex2i(1220,175);

        glVertex2i(1220,210);

        glVertex2i(1200,210);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(1230,190);

        glVertex2i(1260,190);

        glVertex2i(1260,210);

        glVertex2i(1230,210);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(1270,175);

        glVertex2i(1290,175);

        glVertex2i(1290,210);

        glVertex2i(1270,210);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(1300,190);

        glVertex2i(1330,190);

        glVertex2i(1330,210);

        glVertex2i(1300,210);



        glEnd();

    }



    glBegin(GL_QUADS);  // 3rd floor wall

    {

        glColor3ub(255.0f,255.0f,204.0f) ;

        glVertex2i(540,235); // 1st wall

        glVertex2i(920,235);

        glVertex2i(920,280);

        glVertex2i(540,280);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(540,250);

        glVertex2i(580,250);

        glVertex2i(580,280);

        glVertex2i(540,280);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(595,235);

        glVertex2i(615,235);

        glVertex2i(615,270);

        glVertex2i(595,270);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(630,250);

        glVertex2i(660,250);

        glVertex2i(660,270);

        glVertex2i(630,270);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(670,250);

        glVertex2i(700,250);

        glVertex2i(700,270);

        glVertex2i(670,270);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(730,235);

        glVertex2i(750,235);

        glVertex2i(750,270);

        glVertex2i(730,270);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(770,250);

        glVertex2i(800,250);

        glVertex2i(800,270);

        glVertex2i(770,270);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(810,250);

        glVertex2i(840,250);

        glVertex2i(840,270);

        glVertex2i(810,270);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(850,235);

        glVertex2i(870,235);

        glVertex2i(870,270);

        glVertex2i(850,270);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(890,250);

        glVertex2i(920,250);

        glVertex2i(920,270);

        glVertex2i(890,270);





        glColor3ub(255.0f,255.0f,204.0f) ;

        glVertex2i(940,235); //2nd wall

        glVertex2i(1200,235);

        glVertex2i(1200,280);

        glVertex2i(940,280);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(950,250);

        glVertex2i(980,250);

        glVertex2i(980,270);

        glVertex2i(950,270);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(990,235);

        glVertex2i(1010,235);

        glVertex2i(1010,270);

        glVertex2i(990,270);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(1030,250);

        glVertex2i(1060,250);

        glVertex2i(1060,270);

        glVertex2i(1030,270);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(1070,235);

        glVertex2i(1090,235);

        glVertex2i(1090,270);

        glVertex2i(1070,270);



        glColor3ub(0.0f,128.0f,255.0f);

        glVertex2i(1100,250);

        glVertex2i(1130,250);

        glVertex2i(1130,270);

        glVertex2i(1100,270);



        glColor3ub(153.0f,76.0f,0.0f); //door

        glVertex2i(1140,235);

        glVertex2i(1160,235);

        glVertex2i(1160,270);

        glVertex2i(1140,270);



        glEnd();

    }



    glBegin(GL_TRIANGLES); //3rd floor front triangle

    glColor3ub(51.0f,153.0f,255.0f) ;

    glVertex2i(520,280);

    glVertex2i(540,280);

    glVertex2i(540,260);

    glEnd();



    glBegin(GL_TRIANGLES); //3rd floor back triangle

    glColor3ub(0.0f,0.0f,51.0f) ;

    glVertex2i(1220,280);

    glVertex2i(1220,235);

    glVertex2i(1270,235);

    glEnd();





    glBegin(GL_QUADS); // Head

    {

        glColor3ub(0.0f,0.0f,51.0f) ;

        glVertex2i(310,150);        ////     0  ( Head  )

        glVertex2i(330,140);

        glVertex2i(470,140);

        glVertex2i(465,147);



        glColor3ub(255.0f,255.0f,255.0f) ;

        glVertex2i(310,150);        /////    1

        glVertex2i(330,140);

        glVertex2i(465,140);

        glVertex2i(460,145);



        glColor3ub(255.0f,255.0f,255.0f) ;////   2

        glVertex2i(330,140);

        glVertex2i(360,120);

        glVertex2i(500,120);

        glVertex2i(495,140);



        glColor3ub(51.0f,153.0f,255.0f) ;//  3

        glVertex2i(360,120);

        glVertex2i(385,100);

        glVertex2i(500,100);

        glVertex2i(500,120);



        glColor3ub(1.0f,13.0f,25.0f) ; //    4

        glVertex2i(385,100);

        glVertex2i(405,80);

        glVertex2i(500,80);

        glVertex2i(500,100);

    }



    glColor3ub(0.0f,0.0f,51.0f) ;//// 2nd down surface

    glVertex2i(405,80);

    glVertex2i(420,60);

    glVertex2i(1350,60);

    glVertex2i(1350,80);



    glColor3ub(100.0f,13.0f,25.0f) ; ////  1st down surface

    glVertex2i(420,60);

    glVertex2i(430,40);

    glVertex2i(1350,40);

    glVertex2i(1350,60);



    glColor3ub(0.0f,0.0f,51.0f) ; // body 1st floor

    glVertex2i(530,110);

    glVertex2i(530,80);

    glVertex2i(1350,80);

    glVertex2i(1350,110);



    {

        glColor3ub(0.0f,0.0f,51.0f) ; //1st floor roof

        glVertex2i(390,160);

        glVertex2i(390,175);

        glVertex2i(1350,175);

        glVertex2i(1350,160);





        //glColor3ub(120.0f,13.0f,25.0f) ;//down

        glVertex2i(530,110);

        glVertex2i(540,120);

        glVertex2i(560,120);

        glVertex2i(560,110);



        //glColor3ub(200.0f,13.0f,25.0f) ; //mid

        glVertex2i(540,120);

        glVertex2i(540,150);

        glVertex2i(560,150);

        glVertex2i(560,120);



        //glColor3ub(0.0f,183.0f,85.0f) ; //up

        glVertex2i(540,150);

        glVertex2i(530,160);

        glVertex2i(570,160);

        glVertex2i(560,150);





        glVertex2i(700,80);///////

        glVertex2i(700,280);

        glVertex2i(720,280);

        glVertex2i(720,80);



        glVertex2i(860,80);

        glVertex2i(860,280);

        glVertex2i(880,280);

        glVertex2i(880,80);



        glVertex2i(1020,80);

        glVertex2i(1020,280);

        glVertex2i(1040,280);

        glVertex2i(1040,80);



        glVertex2i(1180,80);

        glVertex2i(1180,280);

        glVertex2i(1200,280);

        glVertex2i(1200,80);



        glVertex2i(1320,80);

        glVertex2i(1320,220);

        glVertex2i(1340,220);

        glVertex2i(1340,80);

    }



    {

        glColor3ub(0.0f,0.0f,51.0f) ; // 2nd floor roof

        glVertex2i(390,220);

        glVertex2i(390,235);

        glVertex2i(1350,235);

        glVertex2i(1350,220);



        glVertex2i(530,175);

        glVertex2i(540,185);

        glVertex2i(560,185);

        glVertex2i(570,175);



        glVertex2i(530,220);

        glVertex2i(540,210);

        glVertex2i(560,210);

        glVertex2i(570,220);



        glVertex2i(540,185);

        glVertex2i(540,210);

        glVertex2i(560,210);

        glVertex2i(560,185);



    }



    {

        glColor3ub(0.0f,0.0f,51.0f) ; //3rd floor roof

        glVertex2i(520,280);

        glVertex2i(520,295);

        glVertex2i(1220,295);

        glVertex2i(1220,280);



        glVertex2i(530,235);

        glVertex2i(540,245);

        glVertex2i(560,245);

        glVertex2i(570,235);



        glVertex2i(530,280);

        glVertex2i(540,270);

        glVertex2i(560,270);

        glVertex2i(570,280);



        glVertex2i(540,270);

        glVertex2i(540,245);

        glVertex2i(560,245);

        glVertex2i(560,270);



        glVertex2i(1200,235);

        glVertex2i(1200,280);

        glVertex2i(1220,280);

        glVertex2i(1220,235);



    }



    glEnd();

    glPopMatrix();

}

void sky()

{

    glColor3ub(153.0f,204.0f,255.0f) ; ////////// Sky

    glBegin(GL_QUADS);



    glVertex2i (0,430);

    glVertex2i (0,720);

    glVertex2i (1350,720);

    glVertex2i (1350,430);



    glEnd();

}

void river()

{

    glColor3ub(96.0f,96.0f,96.0f) ; ////////// Water "Burigonga"

    glBegin(GL_QUADS);



    glVertex2i (0,430);

    glVertex2i (0,0);

    glVertex2i (1350,0);

    glVertex2i (1350,430);



    glEnd();

}

void bridge()

{



    glLineWidth(3.0); // bridge wires

    glBegin(GL_LINES);

    glColor3ub(100,155,205) ;

    glVertex2i(895, 580); //left

    glVertex2i(650, 435);



    glVertex2i(895, 570);

    glVertex2i(700, 440);



    glVertex2i(895, 560);

    glVertex2i(750, 445);



    glVertex2i(895, 550);

    glVertex2i(800, 445);



    glVertex2i(895, 540);

    glVertex2i(850, 445);



    glVertex2i(895, 540); //right

    glVertex2i(940, 445);



    glVertex2i(895, 550);

    glVertex2i(990, 445);



    glVertex2i(895, 560);

    glVertex2i(1040, 445);



    glVertex2i(895, 570);

    glVertex2i(1090, 440);



    glVertex2i(895, 580);

    glVertex2i(1140, 435);





    glEnd();



    glLineWidth(10.0); // mid bim long to top

    glBegin(GL_LINES);

    glColor3ub(160,160,160) ;

    glVertex2i(895, 435);

    glVertex2i(895, 580);



    glEnd();





  glLineWidth(8.0); // left side road from bridge

    glBegin(GL_LINES);

    glColor3ub(51,51,0) ;

    glVertex2i(0, 432);

    glVertex2i(650, 432);

    glEnd();



    glLineWidth(8.0); // right side road from bridge

    glBegin(GL_LINES);

    glColor3ub(51,51,0) ;

    glVertex2i(1140, 432);

    glVertex2i(1350, 432);

    glEnd();



    glLineWidth(30.0); // left bridge pile

    glBegin(GL_LINES);

    glColor3ub(160,160,160) ;

    glVertex2i(770, 435);

    glVertex2i(780, 435);

    glEnd();



    glLineWidth(30.0); // right  pile

    glBegin(GL_LINES);

    glColor3ub(160,160,160) ;

    glVertex2i(1010, 435);

    glVertex2i(1020, 435);

    glEnd();



    glLineWidth(30.0); // middle pile

    glBegin(GL_LINES);

    glColor3ub(160,160,160) ;

    glVertex2i(890, 435);

    glVertex2i(900, 435);

    glEnd();







    glLineWidth(12.0); // road of bridge(curved)

    glBegin(GL_LINES);

    glColor3ub(160,160,160) ;

    glVertex2i(650, 435);

    glVertex2i(710, 445);



    glVertex2i(710, 445);

    glVertex2i(770, 450);



  glVertex2i(770, 450);

    glVertex2i(1020, 450);



    glVertex2i(1020, 450);

    glVertex2i(1080, 445);



    glVertex2i(1080, 445);

    glVertex2i(1140, 435);

    glEnd();



    glLineWidth(10.0); //

    glBegin(GL_LINES);

    glColor3ub(160,160,160) ;

    glVertex2i(895, 435);

    glVertex2i(895, 580);



    glEnd();



}

void road_building()
{
    glLineWidth(30.0);
    glBegin(GL_LINES);
    glColor3ub(96,96,96) ;

    glVertex2i(0, 435);
    glVertex2i(0, 465);

    glColor3ub(160,160,160) ;
    glVertex2i(30, 435);
    glVertex2i(30, 470);

    glColor3ub(229,204,255) ;
    glVertex2i(60, 435);
    glVertex2i(60, 460);

    glColor3ub(64,64,64) ;
    glLineWidth(20.0);
    glVertex2i(80, 435);
    glVertex2i(80, 480);

    glColor3ub(96,96,96) ;
    glVertex2i(100, 435);
    glVertex2i(100, 455);

    glColor3ub(64,64,64) ;
    glVertex2i(120, 435);
    glVertex2i(120, 470);

    glColor3ub(160,160,160) ;
    glLineWidth(30.0);
    glVertex2i(140, 435);
    glVertex2i(140, 460);

    glColor3ub(96,96,96) ;
    glVertex2i(170, 435);
    glVertex2i(170, 480);

    glColor3ub(229,204,255) ;
    glVertex2i(200, 435);
    glVertex2i(200, 475);

    glColor3ub(64,64,64) ;
    glVertex2i(230, 435);
    glVertex2i(230, 455);

    glColor3ub(160,160,160) ;
    glVertex2i(260, 435);
    glVertex2i(260, 460);

    glColor3ub(96,96,96) ;
    glVertex2i(290, 435);
    glVertex2i(290, 480);

    glLineWidth(20.0);
    glColor3ub(160,160,160) ;
    glVertex2i(310, 435);
    glVertex2i(310, 455);

    glColor3ub(64,64,64) ;
    glVertex2i(330, 435);
    glVertex2i(330, 470);

    glColor3ub(160,160,160) ;
    glLineWidth(30.0);
    glVertex2i(350, 435);
    glVertex2i(350, 460);

    glColor3ub(96,96,96) ;
    glVertex2i(380, 435);
    glVertex2i(380, 480);

    glColor3ub(160,160,160) ;
    glVertex2i(410, 435);
    glVertex2i(410, 475);

    glColor3ub(229,204,255) ;
    glLineWidth(30.0);
    glVertex2i(440, 435);
    glVertex2i(440, 460);

    glColor3ub(96,96,96) ;
    glVertex2i(470, 435);
    glVertex2i(470, 480);

    glColor3ub(160,160,160) ;
    glVertex2i(500, 435);
    glVertex2i(500, 475);

    glColor3ub(64,64,64) ;
    glVertex2i(530, 435);
    glVertex2i(530, 455);

    glLineWidth(20.0);
    glColor3ub(160,160,160) ;
    glVertex2i(550, 435);
    glVertex2i(550, 460);

    glColor3ub(96,96,96) ;
    glVertex2i(570, 435);
    glVertex2i(570, 465);

    glColor3ub(229,204,255) ;
    glVertex2i(590, 435);
    glVertex2i(590, 455);

    ////////////////////////////////////////////////////////

    glLineWidth(20.0);
    glColor3ub(160,160,160) ;
    glVertex2i(1200, 435);
    glVertex2i(1200, 455);

    glColor3ub(64,64,64) ;
    glVertex2i(1220, 435);
    glVertex2i(1220, 470);

    glColor3ub(160,160,160) ;
    glLineWidth(30.0);
    glVertex2i(1240, 435);
    glVertex2i(1240, 460);

    glColor3ub(96,96,96) ;
    glVertex2i(1270, 435);
    glVertex2i(1270, 480);

    glColor3ub(160,160,160) ;
    glVertex2i(1300, 435);
    glVertex2i(1300, 475);

    glColor3ub(229,204,255) ;
    glLineWidth(20.0);
    glVertex2i(1320, 435);
    glVertex2i(1320, 460);

    glColor3ub(96,96,96) ;
    glVertex2i(1340, 435);
    glVertex2i(1340, 480);

    glColor3ub(160,160,160) ;
    glVertex2i(1350, 435);
    glVertex2i(1350, 475);

    glEnd();
}




void scenario()

{

    glLoadIdentity(); //Reset the drawing perspective

    glMatrixMode(GL_MODELVIEW);

    glPushMatrix();

    glTranslatef(+50.0f,0.0f,0.0f);

    launch2();

    glPopMatrix();

}



void Display1(void)

{

    glClear(GL_COLOR_BUFFER_BIT); // clears the screen



    sky();

    sun();

    river();

    cloud1();

    cloud2();

    cloud3();

    bridge();

    boat2();

    boat1();

    road_building();

    building();

    gangway();

    terminal();

    launch2();

    launch1();

    //scenario();



    glFlush();

}

void handleBoat1KeyPress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'a':
        speed_boat1 += 1;
        if(speed_boat1>18)
            speed_boat1=18;
        break;
    case 'd':
        speed_boat1 -= 1;
        if(speed_boat1<0)
            speed_boat1=0;
        break;
        glutPostRedisplay();
    }

}


void handleLaunch1KeyPress(int key, int x, int y)
{

    switch (key)
    {
    case GLUT_KEY_RIGHT:
        speed_launch1 += 1;
        if(speed_launch1>3)
            speed_launch1=3;
        break;
    case GLUT_KEY_LEFT:
        speed_launch1 -= 1;
        if(speed_launch1<-3)
            speed_launch1=-3;
        break;



        glutPostRedisplay();
    }


}


void myInit (void)

{

    glClearColor(1.0, 1.0, 1.0, 1.0);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    gluOrtho2D(0.0, 1350.0, 0.0, 720.0);

}



int main(int argc, char** argv)

{

    glutInit(&argc, argv);

    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize (1350, 720);

    glutInitWindowPosition (0,60);

    glutCreateWindow ("Sadarghat Launch Terminal");



    glutDisplayFunc(Display1);

    glutTimerFunc(100, Move_cloud1, 0);

    glutTimerFunc(100, Move_cloud2, 0);

    glutTimerFunc(100, Move_cloud3, 0);

    glutTimerFunc(100, Move_boat1, 0);

    glutTimerFunc(100, Move_boat2, 0);

    glutTimerFunc(10, Move_launch1, 0);

    glutKeyboardFunc(handleBoat1KeyPress);
    glutSpecialFunc(handleLaunch1KeyPress);
    myInit ();

    glutMainLoop();

    return 0;

}

