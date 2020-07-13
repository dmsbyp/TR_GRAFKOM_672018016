#include <stdlib.h>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);

int is_depth;


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("DIMAS AJI BAYU PRASETYO - 672018016");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.5, 0.5, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    is_depth=1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);
}
void gedung_depan ()
{
    //1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.6, 1.0);
    glVertex3f(200.0, 0.0, -60.0);
    glVertex3f(150.0, 0.0, -50.0);
    glVertex3f(150.0, 50.0, -50.0);
    glVertex3f(200.0, 50.0, -60.0);
    glEnd();
    //2
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(150.0, 0.0, -50.0);
    glVertex3f(150.0, 50.0, -50.0);
    glVertex3f(150.0, 50.0, -40.0);
    glVertex3f(150.0, 0.0, -40.0);
    glEnd();
    //3
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(150.0, 0.0, -40.0);
    glVertex3f(140.0, 0.0, -40.0);
    glVertex3f(140.0, 50.0, -40.0);
    glVertex3f(150.0, 50.0, -40.0);
    glEnd();
    //4
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(140.0, 0.0, -40.0);
    glVertex3f(140.0, 50.0, -40.0);
    glVertex3f(140.0, 50.0, -60.0);
    glVertex3f(140.0, 0.0, -60.0);
    glEnd();
    //5
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(140.0, 50.0, -60.0);
    glVertex3f(50.0, 50.0, -60.0);
    glVertex3f(50.0, 0.0, -60.0);
    glVertex3f(140.0, 0.0, -60.0);
    glEnd();
    //6
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.0, 0.0);
    glVertex3f(50.0, 50.0, -60.0);
    glVertex3f(50.0, 50.0, -50.0);
    glVertex3f(50.0, 0.0, -50.0);
    glVertex3f(50.0, 0.0, -60.0);
    glEnd();
    //7
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(50.0, 50.0, -50.0);
    glVertex3f(40.0, 50.0, -50.0);
    glVertex3f(40.0, 0.0, -50.0);
    glVertex3f(50.0, 00.0, -50.0);
    glEnd();
    //8
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.0, 0.0);
    glVertex3f(40.0, 50.0, -60.0);
    glVertex3f(40.0, 50.0, -50.0);
    glVertex3f(40.0, 0.0, -50.0);
    glVertex3f(40.0, 00.0, -60.0);
    glEnd();
    //9
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.0, 0.0);
    glVertex3f(40.0, 50.0, -60.0);
    glVertex3f(20.0, 50.0, -60.0);
    glVertex3f(20.0, 0.0, -60.0);
    glVertex3f(40.0, 0.0, -60.0);
    glEnd();
    //10
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.0, 1.0);
    glVertex3f(20.0, 50.0, -60.0);
    glVertex3f(20.0, 50.0, -10.0);
    glVertex3f(20.0, 0.0, -10.0);
    glVertex3f(20.0, 0.0, -60.0);
    glEnd();
    //11
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(20.0, 50.0, -10.0);
    glVertex3f(5.0, 50.0, -10.0);
    glVertex3f(5.0, 0.0, -10.0);
    glVertex3f(20.0, 0.0, -10.0);
    glEnd();
    //12
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.0, 0.0);
    glVertex3f(5.0, 50.0, -10.0);
    glVertex3f(5.0, 50.0, 0.0);
    glVertex3f(5.0, 0.0, 0.0);
    glVertex3f(5.0, 0.0, -10.0);
    glEnd();
     //13
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.0, 0.0);
    glVertex3f(5.0, 50.0, 0.0);
    glVertex3f(-10.0, 50.0, 0.0);
    glVertex3f(-10.0, 0.0, 0.0);
    glVertex3f(5.0, 0.0, 0.0);
    glEnd();
     //14
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.0, 0.0);
    glVertex3f(-10.0, 50.0, -10.0);
    glVertex3f(-10.0, 50.0, 0.0);
    glVertex3f(-10.0, 0.0, 0.0);
    glVertex3f(-10.0, 0.0, -10.0);
    glEnd();
    //15
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-10.0, 50.0, -10.0);
    glVertex3f(-25.0, 50.0, -10.0);
    glVertex3f(-25.0, 0.0, -10.0);
    glVertex3f(-10.0, 0.0, -10.0);
    glEnd();
    //16
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.0, 1.0);
    glVertex3f(-25.0, 50.0, -60.0);
    glVertex3f(-25.0, 50.0, -10.0);
    glVertex3f(-25.0, 0.0, -10.0);
    glVertex3f(-25.0, 0.0, -60.0);
    glEnd();
     //17
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.0, 1.0);
    glVertex3f(-25.0, 50.0, -60.0);
    glVertex3f(-50.0, 50.0, -60.0);
    glVertex3f(-50.0, 0.0, -60.0);
    glVertex3f(-25.0, 0.0, -60.0);
    glEnd();
    //18
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.0, 0.0);
    glVertex3f(-50.0, 50.0, -60.0);
    glVertex3f(-50.0, 50.0, 10.0);
    glVertex3f(-50.0, 0.0, 10.0);
    glVertex3f(-50.0, 0.0, -60.0);
    glEnd();
    //19
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-50.0, 50.0, 10.0);
    glVertex3f(-300.0, 50.0, 10.0);
    glVertex3f(-300.0, 0.0, 10.0);
    glVertex3f(-50.0, 0.0, 10.0);
    glEnd();
    //20
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-300.0, 50.0, 10.0);
    glVertex3f(-300.0, 50.0, -50.0);
    glVertex3f(-300.0, 0.0, -50.0);
    glVertex3f(-300.0, 0.0, 10.0);
    glEnd();

    //donny
    //1
    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex3f(-320, 0, -50);
    glVertex3f(-300,  0, -50);
    glVertex3f(-300, 40, -50);
    glVertex3f(-320, 40, -50);
    glEnd();

     //2
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-320, 0, -50);
    glVertex3f(-320, 40, -50);
    glVertex3f(-320, 40, -100);
    glVertex3f(-320, 0, -100);
    glEnd();

      //3
    glBegin(GL_QUADS);
    glColor3f(1,1,0);
    glVertex3f(-320, 0, -100);
    glVertex3f(-320, 40, -100);
     glVertex3f(-370, 40, -100);
      glVertex3f(-370, 0, -100);
    glEnd();


      //4
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex3f(-370, 40, -100);
    glVertex3f(-370, 0, -100);
    glVertex3f(-370, 0, -200);
    glVertex3f(-370, 40, -200);
    glEnd();


     //5
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-370, 0, -200);
    glVertex3f(-370, 40, -200);
    glVertex3f(-450, 40, -200);
    glVertex3f(-450, 0, -200);
    glEnd();

      //6
    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex3f(-450, 40, -200);
    glVertex3f(-450, 0, -200);
    glVertex3f(-470, 0, -150);
    glVertex3f(-470, 40, -150);
    glEnd();

    //7
    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex3f(-470, 0, -150);
    glVertex3f(-470, 40, -150);
    glVertex3f(-550, 40, -180);
    glVertex3f(-550, 0, -180);
    glEnd();


     //8
    glBegin(GL_QUADS);
    glColor3f(0,1,1);
    glVertex3f(-550, 40, -180);
    glVertex3f(-550, 0, -180);
    glVertex3f(-470, 0, -400);
    glVertex3f(-470, 40, -400);
    glEnd();

    //9
    glBegin(GL_QUADS);
    glColor3f(1,0,1);
    glVertex3f(-470, 0, -400);
    glVertex3f(-470, 40, -400);
    glVertex3f(-400, 40, -400);
    glVertex3f(-400, 0, -400);
    glEnd();

     //10
    glBegin(GL_QUADS);
    glColor3f(0,1,0.5);
    glVertex3f(-400, 40, -400);
    glVertex3f(-400, 0, -400);
    glVertex3f(-400, 0, -600);
     glVertex3f(-400, 40, -600);
    glEnd();

     //11
    glBegin(GL_QUADS);
    glColor3f(1.5,0,0.5);
    glVertex3f(-400, 40, -600);
    glVertex3f(-400, 0, -600);
    glVertex3f(-300, 0, -600);
    glVertex3f(-300, 40, -600);
    glEnd();
    //12
    glBegin(GL_QUADS);
    glColor3f(1.5,0,0.5);
    glVertex3f(-300, 0, -600);
    glVertex3f(-300, 40, -600);
    glVertex3f(-300, 40, -800);
    glVertex3f(-300, 0, -800);
    glEnd();

     //13
    glBegin(GL_QUADS);
    glColor3f(1.5,0,0.5);
    glVertex3f(-300, 40, -800);
    glVertex3f(-300, 0, -800);
    glVertex3f(-250, 0, -1000);
     glVertex3f(-250, 40, -1000);
    glEnd();

     //14
    glBegin(GL_QUADS);
    glColor3f(1.5,0,0.5);
    glVertex3f(-250, 0, -1000);
     glVertex3f(-250, 40, -1000);
     glVertex3f(250, 40, -1000);
     glVertex3f(250, 0, -1000);
    glEnd();

    //theo
    //1
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex3f(200, 0, -60);
    glVertex3f(200, 50, -60);
    glVertex3f(200, 50, -40);
    glVertex3f(200, 0, -40);
    glEnd();

    //2
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(200, 0, -40);
    glVertex3f(200, 50, -40);
    glVertex3f(250, 50, -40);
    glVertex3f(250, 0, -40);
    glEnd();

    //3
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex3f(250, 0, -40);
    glVertex3f(250, 50, -40);
    glVertex3f(250, 50, -50);
    glVertex3f(250, 0, -50);
    glEnd();

    //4
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 1);
    glVertex3f(250, 0, -50);
    glVertex3f(250, 50, -50);
    glVertex3f(300, 50, -50);
    glVertex3f(300, 0, -50);
    glEnd();

    //5
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(300, 0, -50);
    glVertex3f(300, 50, -50);
    glVertex3f(300, 50, -20);
    glVertex3f(300, 0, -20);
    glEnd();

    //6
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex3f(300, 0, -20);
    glVertex3f(300, 50, -20);
    glVertex3f(400, 50, -20);
    glVertex3f(400, 0, -20);
    glEnd();

    //7
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(400, 0, -20);
    glVertex3f(400, 50, -20);
    glVertex3f(400, 50, -50);
    glVertex3f(400, 0, -50);
    glEnd();

    //8
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 1);
    glVertex3f(400, 0, -50);
    glVertex3f(400, 50, -50);
    glVertex3f(420, 50, -50);
    glVertex3f(420, 0, -50);
    glEnd();

    //9
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 1);
    glVertex3f(420, 0, -50);
    glVertex3f(420, 50, -50);
    glVertex3f(420, 50, -40);
    glVertex3f(420, 0, -40);
    glEnd();

    //10
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 1);
    glVertex3f(420, 0, -40);
    glVertex3f(420, 50, -40);
    glVertex3f(450, 50, -40);
    glVertex3f(450, 0, -40);
    glEnd();

    //11
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(450, 0, -40);
    glVertex3f(450, 50, -40);
    glVertex3f(450, 50, -50);
    glVertex3f(450, 0, -50);
    glEnd();

    //12
    glBegin(GL_POLYGON);
    glColor3f(0, 1, 0);
    glVertex3f(450, 0, -50);
    glVertex3f(450, 50, -50);
    glVertex3f(480, 50, -50);
    glVertex3f(480, 0, -50);
    glEnd();

    //13
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(480, 0, -50);
    glVertex3f(480, 50, -50);
    glVertex3f(480, 50, -60);
    glVertex3f(480, 0, -60);
    glEnd();

    //13
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(480, 0, -60);
    glVertex3f(480, 50, -60);
    glVertex3f(500, 50, -60);
    glVertex3f(500, 0, -60);
    glEnd();

    //14
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(500, 0, -60);
    glVertex3f(500, 50, -60);
    glVertex3f(500, 50, -40);
    glVertex3f(500, 0, -40);
    glEnd();

    //15
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(500, 0, -40);
    glVertex3f(500, 50, -40);
    glVertex3f(550, 50, -40);
    glVertex3f(550, 0, -40);
    glEnd();

    //15
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(550, 0, -40);
    glVertex3f(550, 50, -40);
    glVertex3f(550, 50, -60);
    glVertex3f(550, 0, -60);
    glEnd();

    //16
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(550, 0, -60);
    glVertex3f(550, 50, -60);
    glVertex3f(570, 50, -60);
    glVertex3f(570, 0, -60);
    glEnd();

    //17
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(570, 0, -60);
    glVertex3f(570, 50, -60);
    glVertex3f(570, 50, -150);
    glVertex3f(570, 0, -150);
    glEnd();

    //18
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(570, 0, -150);
    glVertex3f(570, 50, -150);
    glVertex3f(600, 50, -150);
    glVertex3f(600, 0, -150);
    glEnd();

    //19
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(600, 0, -150);
    glVertex3f(600, 50, -150);
    glVertex3f(600, 50, -200);
    glVertex3f(600, 0, -200);
    glEnd();

    //17
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 1);
    glVertex3f(570, 0, -200);
    glVertex3f(570, 50, -200);
    glVertex3f(600, 50, -200);
    glVertex3f(600, 0, -200);
    glEnd();

    //17
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 1);
    glVertex3f(570, 0, -200);
    glVertex3f(570, 50, -200);
    glVertex3f(250, 50, -1000);
    glVertex3f(250, 0, -1000);
    glEnd();

}



void tampil(void)
{
    if(is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);
gedung_depan();




    glPushMatrix();
    glPopMatrix();

    glutSwapBuffers();

}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 3.0);
        break;
    case 'd':
    case 'D':
        glTranslatef(3.0, 0.0, 0.0);
        break;
    case 's':
    case 'S':
        glTranslatef(0.0, 0.0, -3.0);
        break;
    case 'a':
    case 'A':
        glTranslatef(-3.0, 0.0, 0.0);
        break;
    case '7':
        glTranslatef(0.0, 3.0, 0.0);
        break;
    case '9':
        glTranslatef(0.0, -3.0, 0.0);
        break;
    case '2':
        glRotatef(2.0, 1.0, 0.0, 0.0);
        break;
    case '8':
        glRotatef(-2.0, 1.0, 0.0, 0.0);
        break;
    case '6':
        glRotatef(2.0, 0.0, 1.0, 0.0);
        break;
    case '4':
        glRotatef(-2.0, 0.0, 1.0, 0.0);
        break;
    case '1':
        glRotatef(2.0, 0.0, 0.0, 1.0);
        break;
    case '3':
        glRotatef(-2.0, 0.0, 0.0, 1.0);
        break;
    case '5':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi==0) tinggi=1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(500.0, lebar / tinggi, 5.0, 400.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
