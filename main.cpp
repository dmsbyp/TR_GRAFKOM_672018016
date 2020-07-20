#include <windows.h>
#include <GL/glut.h>

void init(void);
void tampil(void);
void mouse(int button, int state, int x, int y);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouseMotion(int x,int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("mall of the emirates");
    init();
	glutDisplayFunc(tampil);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
	glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.5, 0.4, 0.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(2.0f);
}


void gedung_samping_hotel ()
{
   //1
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(200.0, 50.0, -90.0);
    glVertex3f(180.0, 50.0, -80.0);
    glVertex3f(180.0, 100.0, -80.0);
    glVertex3f(200.0, 100.0, -90.0);
    glEnd();
    //atap 1
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(200.0, 90.0, -150.0);
    glVertex3f(180.0, 90.0, -150.0);
    glVertex3f(180.0, 90.0, -80.0);
    glVertex3f(200.0, 90.0, -90.0);
    glEnd();
    //2
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(180.0, 50.0, -80.0);
    glVertex3f(40.0, 50.0, -80.0);
    glVertex3f(40.0, 100.0, -80.0);
    glVertex3f(180.0, 100.0, -80.0);
    glEnd();
    //balok 1
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(160.0, 50.0, -75.0);
    glVertex3f(150.0, 50.0, -75.0);
    glVertex3f(150.0, 110.0, -75.0);
    glVertex3f(160.0, 110.0, -75.0);
    glEnd();
    //balok 1
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(160.0, 50.0, -85.0);
    glVertex3f(150.0, 50.0, -85.0);
    glVertex3f(150.0, 110.0, -85.0);
    glVertex3f(160.0, 110.0, -85.0);
    glEnd();

    //balok 2
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(160.0, 50.0, -75.0);
    glVertex3f(160.0, 50.0, -85.0);
    glVertex3f(160.0, 110.0, -85.0);
    glVertex3f(160.0, 110.0, -75.0);
    glEnd();

    //balok 3
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(150.0, 50.0, -75.0);
    glVertex3f(150.0, 50.0, -85.0);
    glVertex3f(150.0, 110.0, -85.0);
    glVertex3f(150.0, 110.0, -75.0);
    glEnd();
    //atap 2
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(180.0, 90.0, -150.0);
    glVertex3f(40.0, 90.0, -150.0);
    glVertex3f(40.0, 90.0, -80.0);
    glVertex3f(180.0, 90.0, -80.0);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(40.0, 50.0, -80.0);
    glVertex3f(40.0, 50.0, -150.0);
    glVertex3f(40.0, 100.0, -150.0);
    glVertex3f(40.0, 100.0, -80.0);
    glEnd();
    //4
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(200.0, 50.0, -150.0);
    glVertex3f(40.0, 50.0, -150.0);
    glVertex3f(40.0, 100.0, -150.0);
    glVertex3f(200.0, 100.0, -150.0);
    glEnd();
    //5
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(200.0, 50.0, -90.0);
    glVertex3f(200.0, 50.0, -150.0);
    glVertex3f(200.0, 100.0, -150.0);
    glVertex3f(200.0, 100.0, -90.0);
    glEnd();




}
void line_gedung_samping_hotel ()
{
     //1
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(200.0, 50.0, -90.0);
    glVertex3f(180.0, 50.0, -80.0);
    glVertex3f(180.0, 100.0, -80.0);
    glVertex3f(200.0, 100.0, -90.0);
    glEnd();

    //2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(180.0, 50.0, -80.0);
    glVertex3f(40.0, 50.0, -80.0);
    glVertex3f(40.0, 100.0, -80.0);
    glVertex3f(180.0, 100.0, -80.0);
    glEnd();
    //balok 1
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(160.0, 50.0, -75.0);
    glVertex3f(150.0, 50.0, -75.0);
    glVertex3f(150.0, 110.0, -75.0);
    glVertex3f(160.0, 110.0, -75.0);
    glEnd();
    //balok 1
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(160.0, 50.0, -85.0);
    glVertex3f(150.0, 50.0, -85.0);
    glVertex3f(150.0, 110.0, -85.0);
    glVertex3f(160.0, 110.0, -85.0);
    glEnd();

    //balok 2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(160.0, 50.0, -75.0);
    glVertex3f(160.0, 50.0, -85.0);
    glVertex3f(160.0, 110.0, -85.0);
    glVertex3f(160.0, 110.0, -75.0);
    glEnd();

    //balok 3
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(150.0, 50.0, -75.0);
    glVertex3f(150.0, 50.0, -85.0);
    glVertex3f(150.0, 110.0, -85.0);
    glVertex3f(150.0, 110.0, -75.0);
    glEnd();

    //3
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(40.0, 50.0, -80.0);
    glVertex3f(40.0, 50.0, -150.0);
    glVertex3f(40.0, 100.0, -150.0);
    glVertex3f(40.0, 100.0, -80.0);
    glEnd();
    //4
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(200.0, 50.0, -150.0);
    glVertex3f(40.0, 50.0, -150.0);
    glVertex3f(40.0, 100.0, -150.0);
    glVertex3f(200.0, 100.0, -150.0);
    glEnd();
    //5
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(200.0, 50.0, -90.0);
    glVertex3f(200.0, 50.0, -150.0);
    glVertex3f(200.0, 100.0, -150.0);
    glVertex3f(200.0, 100.0, -90.0);
    glEnd();

}

void gedung_depan ()
{
    //1
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(200.0, 0.0, -60.0);
    glVertex3f(150.0, 0.0, -50.0);
    glVertex3f(150.0, 50.0, -50.0);
    glVertex3f(200.0, 50.0, -60.0);
    glEnd();

    //atap 1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(200.0, 50.0, -60.0);
    glVertex3f(150.0, 50.0, -50.0);
    glVertex3f(150.0, 50.0, -200.0);
    glVertex3f(200.0, 50.0, -200.0);
    glEnd();
    //2
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(150.0, 0.0, -50.0);
    glVertex3f(150.0, 50.0, -50.0);
    glVertex3f(150.0, 50.0, -40.0);
    glVertex3f(150.0, 0.0, -40.0);
    glEnd();
    //3
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(150.0, 0.0, -40.0);
    glVertex3f(140.0, 0.0, -40.0);
    glVertex3f(140.0, 50.0, -40.0);
    glVertex3f(150.0, 50.0, -40.0);
    glEnd();
    //atap 3
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(150.0, 50.0, -40.0);
    glVertex3f(140.0, 50.0, -40.0);
    glVertex3f(140.0, 50.0, -200.0);
    glVertex3f(150.0, 50.0, -200.0);
    glEnd();

    //4
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(140.0, 0.0, -40.0);
    glVertex3f(140.0, 50.0, -40.0);
    glVertex3f(140.0, 50.0, -60.0);
    glVertex3f(140.0, 0.0, -60.0);
    glEnd();
    //5
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(140.0, 50.0, -60.0);
    glVertex3f(50.0, 50.0, -60.0);
    glVertex3f(50.0, 30.0, -60.0);
    glVertex3f(140.0, 30.0, -60.0);
    glEnd();
    //5 menjorok kedalam
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(140.0, 30.0, -60.0);
    glVertex3f(50.0, 30.0, -60.0);
    glVertex3f(50.0, 30.0, -80.0);
    glVertex3f(140.0, 30.0, -80.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(140.0, 0.0, -80.0);
    glVertex3f(50.0, 0.0, -80.0);
    glVertex3f(50.0, 30.0, -80.0);
    glVertex3f(140.0, 30.0, -80.0);
    glEnd();
    //atap 5
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(140.0, 50.0, -60.0);
    glVertex3f(50.0, 50.0, -60.0);
    glVertex3f(50.0, 50.0, -200.0);
    glVertex3f(140.0, 50.0, -200.0);
    glEnd();
    //6
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(50.0, 50.0, -60.0);
    glVertex3f(50.0, 50.0, -50.0);
    glVertex3f(50.0, 0.0, -50.0);
    glVertex3f(50.0, 0.0, -60.0);
    glEnd();
    //7
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(50.0, 50.0, -50.0);
    glVertex3f(40.0, 50.0, -50.0);
    glVertex3f(40.0, 0.0, -50.0);
    glVertex3f(50.0, 00.0, -50.0);
    glEnd();
    //atap 7
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(50.0, 50.0, -50.0);
    glVertex3f(40.0, 50.0, -50.0);
    glVertex3f(40.0, 50.0, -200.0);
    glVertex3f(50.0, 50.0, -200.0);
    glEnd();
    //8
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(40.0, 50.0, -60.0);
    glVertex3f(40.0, 50.0, -50.0);
    glVertex3f(40.0, 0.0, -50.0);
    glVertex3f(40.0, 00.0, -60.0);
    glEnd();
    //9
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(40.0, 50.0, -60.0);
    glVertex3f(20.0, 50.0, -60.0);
    glVertex3f(20.0, 0.0, -60.0);
    glVertex3f(40.0, 0.0, -60.0);
    glEnd();
    //atap 9
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(40.0, 50.0, -60.0);
    glVertex3f(20.0, 50.0, -60.0);
    glVertex3f(20.0, 50.0, -200.0);
    glVertex3f(40.0, 50.0, -200.0);
    glEnd();
}
void line_gedung_depan ()
{
     //1
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(200.0, 0.0, -60.0);
    glVertex3f(150.0, 0.0, -50.0);
    glVertex3f(150.0, 50.0, -50.0);
    glVertex3f(200.0, 50.0, -60.0);
    glEnd();

    //atap 1
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(200.0, 50.0, -60.0);
    glVertex3f(150.0, 50.0, -50.0);
    glVertex3f(150.0, 50.0, -200.0);
    glVertex3f(200.0, 50.0, -200.0);
    glEnd();
    //2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(150.0, 0.0, -50.0);
    glVertex3f(150.0, 50.0, -50.0);
    glVertex3f(150.0, 50.0, -40.0);
    glVertex3f(150.0, 0.0, -40.0);
    glEnd();
    //3
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(150.0, 0.0, -40.0);
    glVertex3f(140.0, 0.0, -40.0);
    glVertex3f(140.0, 50.0, -40.0);
    glVertex3f(150.0, 50.0, -40.0);
    glEnd();
    //atap 3
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(150.0, 50.0, -40.0);
    glVertex3f(140.0, 50.0, -40.0);
    glVertex3f(140.0, 50.0, -200.0);
    glVertex3f(150.0, 50.0, -200.0);
    glEnd();

    //4
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(140.0, 0.0, -40.0);
    glVertex3f(140.0, 50.0, -40.0);
    glVertex3f(140.0, 50.0, -60.0);
    glVertex3f(140.0, 0.0, -60.0);
    glEnd();
    //5
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(140.0, 50.0, -60.0);
    glVertex3f(50.0, 50.0, -60.0);
    glVertex3f(50.0, 30.0, -60.0);
    glVertex3f(140.0, 30.0, -60.0);
    glEnd();
    //5 menjorok kedalam
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(140.0, 30.0, -60.0);
    glVertex3f(50.0, 30.0, -60.0);
    glVertex3f(50.0, 30.0, -80.0);
    glVertex3f(140.0, 30.0, -80.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(140.0, 0.0, -80.0);
    glVertex3f(50.0, 0.0, -80.0);
    glVertex3f(50.0, 30.0, -80.0);
    glVertex3f(140.0, 30.0, -80.0);
    glEnd();
    //6
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(50.0, 50.0, -60.0);
    glVertex3f(50.0, 50.0, -50.0);
    glVertex3f(50.0, 0.0, -50.0);
    glVertex3f(50.0, 0.0, -60.0);
    glEnd();
    //7
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(50.0, 50.0, -50.0);
    glVertex3f(40.0, 50.0, -50.0);
    glVertex3f(40.0, 0.0, -50.0);
    glVertex3f(50.0, 00.0, -50.0);
    glEnd();
    //8
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(40.0, 50.0, -60.0);
    glVertex3f(40.0, 50.0, -50.0);
    glVertex3f(40.0, 0.0, -50.0);
    glVertex3f(40.0, 00.0, -60.0);
    glEnd();
    //9
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(40.0, 50.0, -60.0);
    glVertex3f(20.0, 50.0, -60.0);
    glVertex3f(20.0, 0.0, -60.0);
    glVertex3f(40.0, 0.0, -60.0);
    glEnd();

}

void kubah (void)
{
    //kubah kanan
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(20.0, 80.0, -40.0);
    glVertex3f(20.0, 80.0, -60.0);
    glVertex3f(0.0, 80.0, -80.0);
    glVertex3f(-20.0, 80.0, -80.0);
    glVertex3f(-40.0, 80.0, -60.0);
    glVertex3f(-40.0, 80.0, -40.0);
    glVertex3f(-20.0, 80.0, -20.0);
    glVertex3f(0.0, 80.0, -20.0);
    glEnd();

    // dinding kanan
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(20.0, 80.0, -40.0);
    glVertex3f(20.0, 80.0, -60.0);
    glVertex3f(20.0, 0.0, -60.0);
    glVertex3f(20.0, 0.0, -40.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(20.0, 80.0, -40.0);
    glVertex3f(0.0, 80.0, -20.0);
    glVertex3f(0.0, 0.0, -20.0);
    glVertex3f(20.0, 0.0, -40.0);
    glEnd();

    //pintu kanan
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-10.0, 80.0, -20.0);
    glVertex3f(0.0, 80.0, -20.0);
    glVertex3f(0.0, 45.0, -20.0);
    glVertex3f(-10.0, 45.0, -20.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-5.0, 45.0, -20.0);
    glVertex3f(0.0, 45.0, -20.0);
    glVertex3f(0.0, 40.0, -20.0);
    glVertex3f(-2.0, 40.0, -20.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(0.0, 40.0, -20.0);
    glVertex3f(0.0, 00.0, -20.0);
    glVertex3f(-2.0, 00.0, -20.0);
    glVertex3f(-2.0, 40.0, -20.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-20.0, 80.0, -20.0);
    glVertex3f(-10.0, 80.0, -20.0);
    glVertex3f(-10.0, 45.0, -20.0);
    glVertex3f(-20.0, 45.0, -20.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-15.0, 45.0, -20.0);
    glVertex3f(-20.0, 45.0, -20.0);
    glVertex3f(-20.0, 40.0, -20.0);
    glVertex3f(-18.0, 40.0, -20.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-20.0, 40.0, -20.0);
    glVertex3f(-18.0, 40.0, -20.0);
    glVertex3f(-18.0, 0.0, -20.0);
    glVertex3f(-20.0, 0.0, -20.0);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-20.0, 80.0, -20.0);
    glVertex3f(-20.0, 0.0, -20.0);
    glVertex3f(-40.0, 0.0, -40.0);
    glVertex3f(-40.0, 80.0, -40.0);
    glEnd();
    //line kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(20.0, 80.0, -40.0);
    glVertex3f(20.0, 80.0, -60.0);
    glVertex3f(20.0, 0.0, -60.0);
    glVertex3f(20.0, 0.0, -40.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(20.0, 80.0, -40.0);
    glVertex3f(0.0, 80.0, -20.0);
    glVertex3f(0.0, 0.0, -20.0);
    glVertex3f(20.0, 0.0, -40.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, 80.0, -20.0);
    glVertex3f(0.0, 0.0, -20.0);
    glVertex3f(-20.0, 0.0, -20.0);
    glVertex3f(-20.0, 80.0, -20.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-20.0, 80.0, -20.0);
    glVertex3f(-20.0, 0.0, -20.0);
    glVertex3f(-40.0, 0.0, -40.0);
    glVertex3f(-40.0, 80.0, -40.0);
    glEnd();

    //tutup kubah kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(20.0, 80.0, -40.0);
    glVertex3f(20.0, 80.0, -60.0);
    glVertex3f(-10.0, 90.0, -50.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(20.0, 80.0, -40.0);
    glVertex3f(0.0, 80.0, -20.0);
    glVertex3f(-10.0, 90.0, -50.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(0.0, 80.0, -20.0);
    glVertex3f(-20.0, 80.0, -20.0);
    glVertex3f(-10.0, 90.0, -50.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-20.0, 80.0, -20.0);
    glVertex3f(-40.0, 80.0, -40.0);
    glVertex3f(-10.0, 90.0, -50.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-40.0, 80.0, -40.0);
    glVertex3f(-40.0, 80.0, -60.0);
    glVertex3f(-10.0, 90.0, -50.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-40.0, 80.0, -60.0);
    glVertex3f(-20.0, 80.0, -80.0);
    glVertex3f(-10.0, 90.0, -50.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-20.0, 80.0, -80.0);
    glVertex3f(0.0, 80.0, -80.0);
    glVertex3f(-10.0, 90.0, -50.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(0.0, 80.0, -80.0);
    glVertex3f(20.0, 80.0, -60.0);
    glVertex3f(-10.0, 90.0, -50.0);
    glEnd();
    //garis pinggir
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(20.0, 80.0, -40.0);
    glVertex3f(20.0, 80.0, -60.0);
    glVertex3f(-10.0, 90.0, -50.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(20.0, 80.0, -40.0);
    glVertex3f(0.0, 80.0, -20.0);
    glVertex3f(-10.0, 90.0, -50.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, 80.0, -20.0);
    glVertex3f(-20.0, 80.0, -20.0);
    glVertex3f(-10.0, 90.0, -50.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-20.0, 80.0, -20.0);
    glVertex3f(-40.0, 80.0, -40.0);
    glVertex3f(-10.0, 90.0, -50.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-40.0, 80.0, -40.0);
    glVertex3f(-40.0, 80.0, -60.0);
    glVertex3f(-10.0, 90.0, -50.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-40.0, 80.0, -60.0);
    glVertex3f(-20.0, 80.0, -80.0);
    glVertex3f(-10.0, 90.0, -50.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-20.0, 80.0, -80.0);
    glVertex3f(0.0, 80.0, -80.0);
    glVertex3f(-10.0, 90.0, -50.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, 80.0, -80.0);
    glVertex3f(20.0, 80.0, -60.0);
    glVertex3f(-10.0, 90.0, -50.0);
    glEnd();

     //kubah tengah
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-40.0, 80.0, -40.0);
    glVertex3f(-40.0, 80.0, -80.0);
    glVertex3f(-80.0, 80.0, -120.0);
    glVertex3f(-120.0, 80.0, -120.0);
    glVertex3f(-160.0, 80.0, -80.0);
    glVertex3f(-160.0, 80.0, -40.0);
    glVertex3f(-120.0, 80.0, 0.0);
    glVertex3f(-80.0, 80.0, 0.0);
    glEnd();

    //dinding tengah
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-40.0, 80.0, -40.0);
    glVertex3f(-40.0, 0.0, -40.0);
    glVertex3f(-80.0, 0.0, 0.0);
    glVertex3f(-80.0, 80.0, 0.0);
    glEnd();
    //pintu tengah
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-80.0, 80.0, 0.0);
    glVertex3f(-80.0, 45.0, 0.0);
    glVertex3f(-100.0, 45.0, 0.0);
    glVertex3f(-100.0, 80.0, 0.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-80.0, 45.0, 0.0);
    glVertex3f(-80.0, 40.0, 0.0);
    glVertex3f(-87.0, 40.0, 0.0);
    glVertex3f(-94.0, 45.0, 0.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-80.0, 40.0, 0.0);
    glVertex3f(-87.0, 40.0, 0.0);
    glVertex3f(-87.0, 0.0, 0.0);
    glVertex3f(-80.0, 0.0, 0.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-120.0, 45.0, 0.0);
    glVertex3f(-120.0, 40.0, 0.0);
    glVertex3f(-114.0, 40.0, 0.0);
    glVertex3f(-107.0, 45.0, 0.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-120.0, 40.0, 0.0);
    glVertex3f(-114.0, 40.0, 0.0);
    glVertex3f(-114.0, 00.0, 0.0);
    glVertex3f(-120.0, 0.0, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-120.0, 80.0, 0.0);
    glVertex3f(-120.0, 45.0, 0.0);
    glVertex3f(-100.0, 45.0, 0.0);
    glVertex3f(-100.0, 80.0, 0.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-120.0, 80.0, 00.0);
    glVertex3f(-120.0, 0.0, 0.0);
    glVertex3f(-160.0, 0.0, -40.0);
    glVertex3f(-160.0, 80.0, -40.0);
    glEnd();

    //lines dinding tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-40.0, 80.0, -40.0);
    glVertex3f(-40.0, 0.0, -40.0);
    glVertex3f(-80.0, 0.0, 0.0);
    glVertex3f(-80.0, 80.0, 0.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-80.0, 80.0, 0.0);
    glVertex3f(-80.0, 0.0, 0.0);
    glVertex3f(-120.0, 0.0, 0.0);
    glVertex3f(-120.0, 80.0, 0.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-120.0, 80.0, 00.0);
    glVertex3f(-120.0, 0.0, 0.0);
    glVertex3f(-160.0, 0.0, -40.0);
    glVertex3f(-160.0, 80.0, -40.0);
    glEnd();

    //tutup kubah tengah
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-40.0, 80.0, -40.0);
    glVertex3f(-40.0, 80.0, -80.0);
    glVertex3f(-100.0, 100.0, -60.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-40.0, 80.0, -80.0);
    glVertex3f(-80.0, 80.0, -120.0);
    glVertex3f(-100.0, 100.0, -60.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-80.0, 80.0, -120.0);
    glVertex3f(-120.0, 80.0, -120.0);
    glVertex3f(-100.0, 100.0, -60.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-120.0, 80.0, -120.0);
    glVertex3f(-160.0, 80.0, -80.0);
    glVertex3f(-100.0, 100.0, -60.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-160.0, 80.0, -80.0);
    glVertex3f(-160.0, 80.0, -40.0);
    glVertex3f(-100.0, 100.0, -60.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-160.0, 80.0, -40.0);
    glVertex3f(-120.0, 80.0, 00.0);
    glVertex3f(-100.0, 100.0, -60.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-120.0, 80.0, 00.0);
    glVertex3f(-80.0, 80.0, 00.0);
    glVertex3f(-100.0, 100.0, -60.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-80.0, 80.0, 00.0);
    glVertex3f(-40.0, 80.0, -40.0);
    glVertex3f(-100.0, 100.0, -60.0);
    glEnd();

    //line tutup kubah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-40.0, 80.0, -40.0);
    glVertex3f(-40.0, 80.0, -80.0);
    glVertex3f(-100.0, 100.0, -60.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-40.0, 80.0, -80.0);
    glVertex3f(-80.0, 80.0, -120.0);
    glVertex3f(-100.0, 100.0, -60.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-80.0, 80.0, -120.0);
    glVertex3f(-120.0, 80.0, -120.0);
    glVertex3f(-100.0, 100.0, -60.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-120.0, 80.0, -120.0);
    glVertex3f(-160.0, 80.0, -80.0);
    glVertex3f(-100.0, 100.0, -60.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-160.0, 80.0, -80.0);
    glVertex3f(-160.0, 80.0, -40.0);
    glVertex3f(-100.0, 100.0, -60.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-160.0, 80.0, -40.0);
    glVertex3f(-120.0, 80.0, 00.0);
    glVertex3f(-100.0, 100.0, -60.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-120.0, 80.0, 00.0);
    glVertex3f(-80.0, 80.0, 00.0);
    glVertex3f(-100.0, 100.0, -60.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-80.0, 80.0, 00.0);
    glVertex3f(-40.0, 80.0, -40.0);
    glVertex3f(-100.0, 100.0, -60.0);
    glEnd();

     //kubah kiri
     glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-160.0, 80.0, -40.0);
    glVertex3f(-160.0, 80.0, -60.0);
    glVertex3f(-180.0, 80.0, -80.0);
    glVertex3f(-200.0, 80.0, -80.0);
    glVertex3f(-220.0, 80.0, -60.0);
    glVertex3f(-220.0, 80.0, -40.0);
    glVertex3f(-200.0, 80.0, -20.0);
    glVertex3f(-180.0, 80.0, -20.0);
    glEnd();

    //dinding kiri
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-160.0, 80.0, -40.0);
    glVertex3f(-160.0, 0.0, -40.0);
    glVertex3f(-180.0, 0.0, -20.0);
    glVertex3f(-180.0, 80.0, -20.0);
    glEnd();
    //pintu kiri
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-180.0, 80.0, -20.0);
    glVertex3f(-190.0, 80.0, -20.0);
    glVertex3f(-190.0, 45.0, -20.0);
    glVertex3f(-180.0, 45.0, -20.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-185.0, 45.0, -20.0);
    glVertex3f(-180.0, 45.0, -20.0);
    glVertex3f(-180.0, 40.0, -20.0);
    glVertex3f(-182.0, 40.0, -20.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-180.0, 40.0, -20.0);
    glVertex3f(-180.0, 00.0, -20.0);
    glVertex3f(-182.0, 00.0, -20.0);
    glVertex3f(-182.0, 40.0, -20.0);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-200.0, 80.0, -20.0);
    glVertex3f(-190.0, 80.0, -20.0);
    glVertex3f(-190.0, 45.0, -20.0);
    glVertex3f(-200.0, 45.0, -20.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-195.0, 45.0, -20.0);
    glVertex3f(-200.0, 45.0, -20.0);
    glVertex3f(-200.0, 40.0, -20.0);
    glVertex3f(-198.0, 40.0, -20.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-200.0, 40.0, -20.0);
    glVertex3f(-198.0, 40.0, -20.0);
    glVertex3f(-198.0, 0.0, -20.0);
    glVertex3f(-200.0, 0.0, -20.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-200.0, 80.0, -20.0);
    glVertex3f(-200.0, 0.0, -20.0);
    glVertex3f(-220.0, 0.0, -40.0);
    glVertex3f(-220.0, 80.0, -40.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(-220.0, 80.0, -60.0);
    glVertex3f(-220.0, 0.0, -60.0);
    glVertex3f(-220.0, 0.0, -40.0);
    glVertex3f(-220.0, 80.0, -40.0);
    glEnd();
    //tembok 400 panjang
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(-220.0, 50.0, -60.0);
    glVertex3f(-220.0, 0.0, -60.0);
    glVertex3f(-400.0, 0.0, -60.0);
    glVertex3f(-400.0, 50.0, -60.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-220.0, 50.0, -60.0);
    glVertex3f(-220.0, 0.0, -60.0);
    glVertex3f(-400.0, 0.0, -60.0);
    glVertex3f(-400.0, 50.0, -60.0);
    glEnd();


    //line dinding kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-160.0, 80.0, -40.0);
    glVertex3f(-160.0, 0.0, -40.0);
    glVertex3f(-180.0, 0.0, -20.0);
    glVertex3f(-180.0, 80.0, -20.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-180.0, 80.0, -20.0);
    glVertex3f(-180.0, 0.0, -20.0);
    glVertex3f(-200.0, 0.0, -20.0);
    glVertex3f(-200.0, 80.0, -20.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-200.0, 80.0, -20.0);
    glVertex3f(-200.0, 0.0, -20.0);
    glVertex3f(-220.0, 0.0, -40.0);
    glVertex3f(-220.0, 80.0, -40.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-220.0, 80.0, -60.0);
    glVertex3f(-220.0, 0.0, -60.0);
    glVertex3f(-220.0, 0.0, -40.0);
    glVertex3f(-220.0, 80.0, -40.0);
    glEnd();

    //tutup kubah kiri
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-160.0, 80.0, -40.0);
    glVertex3f(-160.0, 80.0, -60.0);
    glVertex3f(-190.0, 90.0, -60.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-160.0, 80.0, -60.0);
    glVertex3f(-180.0, 80.0, -80.0);
    glVertex3f(-190.0, 90.0, -60.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-180.0, 80.0, -80.0);
    glVertex3f(-200.0, 80.0, -80.0);
    glVertex3f(-190.0, 90.0, -60.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-200.0, 80.0, -80.0);
    glVertex3f(-220.0, 80.0, -60.0);
    glVertex3f(-190.0, 90.0, -60.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-220.0, 80.0, -60.0);
    glVertex3f(-220.0, 80.0, -40.0);
    glVertex3f(-190.0, 90.0, -60.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-220.0, 80.0, -40.0);
    glVertex3f(-200.0, 80.0, -20.0);
    glVertex3f(-190.0, 90.0, -60.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-200.0, 80.0, -20.0);
    glVertex3f(-180.0, 80.0, -20.0);
    glVertex3f(-190.0, 90.0, -60.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex3f(-180.0, 80.0, -20.0);
    glVertex3f(-160.0, 80.0, -40.0);
    glVertex3f(-190.0, 90.0, -60.0);
    glEnd();
    //line tutup kubah kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-160.0, 80.0, -40.0);
    glVertex3f(-160.0, 80.0, -60.0);
    glVertex3f(-190.0, 90.0, -60.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-160.0, 80.0, -60.0);
    glVertex3f(-180.0, 80.0, -80.0);
    glVertex3f(-190.0, 90.0, -60.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-180.0, 80.0, -80.0);
    glVertex3f(-200.0, 80.0, -80.0);
    glVertex3f(-190.0, 90.0, -60.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-200.0, 80.0, -80.0);
    glVertex3f(-220.0, 80.0, -60.0);
    glVertex3f(-190.0, 90.0, -60.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-220.0, 80.0, -60.0);
    glVertex3f(-220.0, 80.0, -40.0);
    glVertex3f(-190.0, 90.0, -60.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-220.0, 80.0, -40.0);
    glVertex3f(-200.0, 80.0, -20.0);
    glVertex3f(-190.0, 90.0, -60.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-200.0, 80.0, -20.0);
    glVertex3f(-180.0, 80.0, -20.0);
    glVertex3f(-190.0, 90.0, -60.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-180.0, 80.0, -20.0);
    glVertex3f(-160.0, 80.0, -40.0);
    glVertex3f(-190.0, 90.0, -60.0);
    glEnd();

}


void gedung_kiri(){
  //donny
     //5
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-400, 0, -60);
    glVertex3f(-400,  50, -60);
    glVertex3f(-400, 50, -175);
    glVertex3f(-400, 0, -175);
    glEnd();

     //6
    glBegin(GL_QUADS);
    glColor3f(1,0,1);
    glVertex3f(-400,  0, -175);
    glVertex3f(-400,  50, -175);
    glVertex3f(-575,  50, -175);
    glVertex3f(-575,  0, -175);
    glEnd();

      //7
    glBegin(GL_QUADS);
    glColor3f(1,1,0);
    glVertex3f(-575,  50, -175);
    glVertex3f(-575,  0, -175);
    glVertex3f(-575,  0, -150);
    glVertex3f(-575,  50, -150);
    glEnd();

     //8
    glBegin(GL_QUADS);
    glColor3f(0,1,1);
    glVertex3f(-575,  0, -150);
    glVertex3f(-575,  50, -150);
    glVertex3f(-625,  50, -175);
     glVertex3f(-625,  0, -175);
    glEnd();

    //9
    glBegin(GL_QUADS);
    glColor3f(1,0,1);
    glVertex3f(-625,  50, -175);
     glVertex3f(-625,  0, -175);
     glVertex3f(-625,  0, -200);
     glVertex3f(-625,  50, -200);
    glEnd();

     //10
    glBegin(GL_QUADS);
    glColor3f(0.5,0,1);
     glVertex3f(-625,  0, -200);
     glVertex3f(-625,  50, -200);
     glVertex3f(-650,  50, -200);
     glVertex3f(-650,  0, -200);
    glEnd();

    //11
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(-650,  50, -200);
     glVertex3f(-650,  0, -200);
     glVertex3f(-575,  0, -325);
     glVertex3f(-575,  50, -325);
    glEnd();

    //12
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0);
     glVertex3f(-575,  0, -325);
     glVertex3f(-575,  50, -325);
     glVertex3f(-525,  50, -325);
     glVertex3f(-525,  0, -325);
    glEnd();

    //13
    glBegin(GL_QUADS);
    glColor3f(0,0.5,0.5);
     glVertex3f(-525,  50, -325);
     glVertex3f(-525,  0, -325);
     glVertex3f(-525,  0, -375);
     glVertex3f(-525,  50, -375);
    glEnd();

    //14
    glBegin(GL_QUADS);
    glColor3f(0,0,0.5);
     glVertex3f(-525,  0, -375);
     glVertex3f(-525,  50, -375);
     glVertex3f(-550,  50, -375);
     glVertex3f(-550,  0, -375);
    glEnd();

    //15
    glBegin(GL_QUADS);
    glColor3f(0,0,0.5);
     glVertex3f(-550,  50, -375);
     glVertex3f(-550,  0, -375);
     glVertex3f(-550,  0, -400);
     glVertex3f(-550,  50, -400);
    glEnd();

     //16
    glBegin(GL_QUADS);
    glColor3f(0.5,0,0.5);
     glVertex3f(-550,  0, -400);
     glVertex3f(-550,  50, -400);
      glVertex3f(-500,  50, -400);
       glVertex3f(-500,  0, -400);
    glEnd();


     //17
    glBegin(GL_QUADS);
    glColor3f(0,0,0.5);
    glVertex3f(-500,  50, -400);
    glVertex3f(-500,  0, -400);
    glVertex3f(-500,  0, -375);
    glVertex3f(-500,  50, -375);
    glEnd();

       //18
    glBegin(GL_QUADS);
    glColor3f(0,0,0.5);
    glVertex3f(-500,  0, -375);
    glVertex3f(-500,  50, -375);
    glVertex3f(-375,  50, -375);
    glVertex3f(-375,  0, -375);
    glEnd();

     //19
    glBegin(GL_QUADS);
    glColor3f(0.5,0,0.5);
    glVertex3f(-375,  50, -375);
    glVertex3f(-375,  0, -375);
    glVertex3f(-375,  0, -400);
    glVertex3f(-375,  50, -400);
    glEnd();

     //20
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0);
    glVertex3f(-375,  0, -400);
    glVertex3f(-375,  50, -400);
    glVertex3f(-400,  50, -425);
    glVertex3f(-400,  0, -425);
    glEnd();

     //21
    glBegin(GL_QUADS);
    glColor3f(1,0.5,0);
    glVertex3f(-400,  50, -425);
    glVertex3f(-400,  0, -425);
    glVertex3f(-400,  0, -525);
    glVertex3f(-400,  50, -525);
    glEnd();

    //22
    glBegin(GL_QUADS);
    glColor3f(1,1,0);
    glVertex3f(-400,  0, -525);
    glVertex3f(-400,  50, -525);
    glVertex3f(-325,  50, -800);
    glVertex3f(-325,  0, -800);

    glEnd();


//23
    glBegin(GL_QUADS);
    glColor3f(0.5,0,0.5);
     glVertex3f(-325,  50, -800);
    glVertex3f(-325,  0, -800);
     glVertex3f(350, 0, -800);
     glVertex3f(350, 50, -800);
    glEnd();



//atap gabungan
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.5);
     glVertex3f(-325,  50, -800);
    glVertex3f(-379,  50, -600);
     glVertex3f(350, 50, -600);
     glVertex3f(350, 50, -800);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex3f(-400,  50, -175);
     glVertex3f(-400, 50, -375);
     glVertex3f(350, 50, -375);
     glVertex3f(350, 50, -175);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex3f(-375,  50, -375);
     glVertex3f(-375, 50, -400);
     glVertex3f(-400, 50, -425);
     glVertex3f(-400, 50, -525);

      glVertex3f(-379,  50, -600);
     glVertex3f(350, 50, -600);
     glVertex3f(350, 50, -175);

    glEnd();

    //atap
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.5);
     glVertex3f(-400,  50, -175);
    glVertex3f(-575,  50, -175);
     glVertex3f(-625, 50, -175);
     glVertex3f(-625, 50, -200);
     glVertex3f(-650,  50, -200);
    glVertex3f(-575,  50, -325);
     glVertex3f(-400, 50, -325);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0,0.5);
    glVertex3f(-575,  50, -175);
    glVertex3f(-575,  50, -150);
     glVertex3f(-625, 50, -175);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.5);
     glVertex3f(-500,  50, -375);
    glVertex3f(-500,  50, -400);
     glVertex3f(-550, 50, -400);
     glVertex3f(-550, 50, -375);

     glVertex3f(-525,  50, -375);
    glVertex3f(-525,  50, -325);
     glVertex3f(-400, 50, -325);
     glVertex3f(-400, 50, -375);
    glEnd();

}

void hotel(void)
{
    //theo
    //1
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(200, 0, -60);
    glVertex3f(200, 50, -60);
    glVertex3f(300, 50, -60);
    glVertex3f(300, 0, -60);
    glEnd();


    //2
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(300, 0, -60);
    glVertex3f(300, 50, -60);
    glVertex3f(300, 50, -20);
    glVertex3f(300, 0, -20);
    glEnd();

    //3 tengah
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(300, 0, -20);
    glVertex3f(300, 50, -20);
    glVertex3f(500, 50, -20);
    glVertex3f(500, 0, -20);
    glEnd();

    //4
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(500, 0, -20);
    glVertex3f(500, 50, -20);
    glVertex3f(500, 50, -60);
    glVertex3f(500, 0, -60);
    glEnd();

    //5
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(500, 0, -60);
    glVertex3f(500, 50, -60);
    glVertex3f(520, 50, -60);
    glVertex3f(520, 0, -60);
    glEnd();

    //6
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(520, 0, -60);
    glVertex3f(520, 50, -60);
    glVertex3f(520, 50, -40);
    glVertex3f(520, 0, -40);
    glEnd();

    //7
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(520, 0, -40);
    glVertex3f(520, 50, -40);
    glVertex3f(550, 50, -40);
    glVertex3f(550, 0, -40);
    glEnd();

    //8
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(550, 0, -40);
    glVertex3f(550, 50, -40);
    glVertex3f(550, 50, -60);
    glVertex3f(550, 0, -60);
    glEnd();

    //9
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(550, 0, -60);
    glVertex3f(550, 50, -60);
    glVertex3f(570, 50, -60);
    glVertex3f(570, 0, -60);
    glEnd();


    //10
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(570, 0, -60);
    glVertex3f(570, 50, -60);
    glVertex3f(570, 50, -30);
    glVertex3f(570, 0, -30);
    glEnd();

    //11
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(570, 0, -30);
    glVertex3f(570, 50, -30);
    glVertex3f(630, 50, -30);
    glVertex3f(630, 0, -30);
    glEnd();

    //12
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(630, 0, -30);
    glVertex3f(630, 50, -30);
    glVertex3f(630, 50, -60);
    glVertex3f(630, 0, -60);
    glEnd();

    //13
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(630, 0, -60);
    glVertex3f(630, 50, -60);
    glVertex3f(650, 50, -60);
    glVertex3f(650, 0, -60);
    glEnd();

    //14
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(650, 0, -60);
    glVertex3f(650, 50, -60);
    glVertex3f(650, 50, -150);
    glVertex3f(650, 0, -150);
    glEnd();


}

void datar (void)
{

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex3f(200, 50, -60);
    glVertex3f(300, 50, -60);
    glVertex3f(300, 50, -200);
    glVertex3f(200, 50, -200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex3f(300, 50, -20);
    glVertex3f(500, 50, -20);
    glVertex3f(500, 50, -200);
    glVertex3f(300, 50, -200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex3f(500, 50, -60);
    glVertex3f(520, 50, -60);
    glVertex3f(520, 50, -200);
    glVertex3f(500, 50, -200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex3f(520, 50, -40);
    glVertex3f(550, 50, -40);
    glVertex3f(550, 50, -200);
    glVertex3f(520, 50, -200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex3f(550, 50, -60);
    glVertex3f(570, 50, -60);
    glVertex3f(570, 50, -200);
    glVertex3f(550, 50, -200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex3f(570, 50, -200);
    glVertex3f(570, 50, -60);
    glVertex3f(570, 50, -30);
    glVertex3f(630, 50, -30);
    glVertex3f(630, 50, -60);
    glVertex3f(650, 50, -60);
    glVertex3f(650, 50, -200);
    glEnd();

}

void gedunghotel1(void)
{
    glBegin(GL_POLYGON); //atas
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(200, 200, -120);
    glVertex3f(200, 200, -100);
    glVertex3f(220, 200, -80);
    glVertex3f(240, 200, -80);
    glVertex3f(260, 200, -100);
    glVertex3f(260, 200, -120);
    glVertex3f(240, 200, -140);
    glVertex3f(220, 200, -140);
    glEnd();

    glBegin(GL_POLYGON); //bawah
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(200, 51, -120);
    glVertex3f(200, 51, -100);
    glVertex3f(220, 51, -80);
    glVertex3f(240, 51, -80);
    glVertex3f(260, 51, -100);
    glVertex3f(260, 51, -120);
    glVertex3f(240, 51, -140);
    glVertex3f(220, 51, -140);
    glEnd();

    //sisi
    glBegin(GL_POLYGON); //1
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(200, 200, -120);
    glVertex3f(200, 200, -100);
    glVertex3f(200, 51, -100);
    glVertex3f(200, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(200, 51, -100);
    glVertex3f(220, 51, -80);
    glVertex3f(220, 200, -80);
    glVertex3f(200, 200, -100);
    glEnd();

    glBegin(GL_POLYGON); //3
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(220, 200, -80);
    glVertex3f(240, 200, -80);
    glVertex3f(240, 51, -80);
    glVertex3f(220, 51, -80);
    glEnd();

    glBegin(GL_POLYGON); //4
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(240, 51, -80);
    glVertex3f(260, 51, -100);
    glVertex3f(260, 200, -100);
    glVertex3f(240, 200, -80);
    glEnd();

    glBegin(GL_POLYGON); //5
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(260, 200, -100);
    glVertex3f(260, 200, -120);
    glVertex3f(260, 51, -120);
    glVertex3f(260, 51, -100);
    glEnd();

    glBegin(GL_POLYGON); //6
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(260, 200, -120);
    glVertex3f(240, 200, -140);
    glVertex3f(240, 51, -140);
    glVertex3f(260, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //7
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(240, 200, -140);
    glVertex3f(220, 200, -140);
    glVertex3f(220, 51, -140);
    glVertex3f(240, 51, -140);
    glEnd();

    glBegin(GL_POLYGON); //8
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(220, 51, -140);
    glVertex3f(200, 51, -120);
    glVertex3f(200, 200, -120);
    glVertex3f(220, 200, -140);
    glEnd();
}

void gedunghotel2(void)
{
    glBegin(GL_POLYGON); //1
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(261, 200, -80);
    glVertex3f(261, 200, -150);
    glVertex3f(261, 51, -150);
    glVertex3f(261, 51, -80);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(261, 200, -150);
    glVertex3f(350, 200, -150);
    glVertex3f(350, 51, -150);
    glVertex3f(261, 51, -150);
    glEnd();

    glBegin(GL_POLYGON); //3
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(350, 200, -120);
    glVertex3f(350, 200, -150);
    glVertex3f(350, 51, -150);
    glVertex3f(350, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //4
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(330, 200, -120);
    glVertex3f(350, 200, -120);
    glVertex3f(350, 51, -120);
    glVertex3f(330, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //5
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(330, 200, -120);
    glVertex3f(330, 200, -80);
    glVertex3f(330, 51, -80);
    glVertex3f(330, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //6
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(261, 200, -80);
    glVertex3f(330, 200, -80);
    glVertex3f(330, 51, -80);
    glVertex3f(261, 51, -80);
    glEnd();

}

void gedunghotel3(void)
{
    //gedung kecil depan
    glBegin(GL_POLYGON); //depan
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(331, 100, -40);
    glVertex3f(380, 100, -40);
    glVertex3f(380, 51, -40);
    glVertex3f(331, 51, -40);
    glEnd();

    glBegin(GL_POLYGON); //atas
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(331, 100, -40);
    glVertex3f(380, 100, -40);
    glVertex3f(380, 100, -60);
    glVertex3f(331, 100, -60);
    glEnd();

    glBegin(GL_POLYGON); //kiri
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(331, 100, -40);
    glVertex3f(331, 51, -40);
    glVertex3f(331, 51, -60);
    glVertex3f(331, 100, -60);
    glEnd();

    glBegin(GL_POLYGON); //kanan
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(380, 100, -40);
    glVertex3f(380, 51, -40);
    glVertex3f(380, 51, -60);
    glVertex3f(380, 100, -60);
    glEnd();

    //gedung inti
    glBegin(GL_POLYGON); //1
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(331, 200, -120);
    glVertex3f(331, 200, -60);
    glVertex3f(331, 51, -60);
    glVertex3f(331, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(331, 200, -120);
    glVertex3f(420, 200, -120);
    glVertex3f(420, 51, -120);
    glVertex3f(331, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //3
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(420, 200, -120);
    glVertex3f(420, 200, -60);
    glVertex3f(420, 51, -60);
    glVertex3f(420, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //4
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(331, 200, -60);
    glVertex3f(420, 200, -60);
    glVertex3f(420, 51, -60);
    glVertex3f(331, 51, -60);
    glEnd();

    //gedungtinggi
    glBegin(GL_POLYGON); //1
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(421, 300, -120);
    glVertex3f(421, 300, -60);
    glVertex3f(421, 51, -60);
    glVertex3f(421, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(421, 300, -120);
    glVertex3f(470, 300, -120);
    glVertex3f(470, 51, -120);
    glVertex3f(421, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //3
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(470, 300, -120);
    glVertex3f(470, 300, -60);
    glVertex3f(470, 51, -60);
    glVertex3f(470, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //4
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(421, 300, -60);
    glVertex3f(470, 300, -60);
    glVertex3f(470, 51, -60);
    glVertex3f(421, 51, -60);
    glEnd();

    //gedung kecil depan 2
    glBegin(GL_POLYGON); //depan
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(450, 100, -40);
    glVertex3f(480, 100, -40);
    glVertex3f(480, 51, -40);
    glVertex3f(450, 51, -40);
    glEnd();

    glBegin(GL_POLYGON); //belakang
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(470, 100, -90);
    glVertex3f(480, 100, -90);
    glVertex3f(480, 51, -90);
    glVertex3f(470, 51, -90);
    glEnd();

    glBegin(GL_POLYGON); //atas 1
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(450, 100, -40);
    glVertex3f(480, 100, -40);
    glVertex3f(480, 100, -60);
    glVertex3f(450, 100, -60);
    glEnd();

    glBegin(GL_POLYGON); //atas 2
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(470, 100, -40);
    glVertex3f(480, 100, -40);
    glVertex3f(480, 100, -90);
    glVertex3f(470, 100, -90);
    glEnd();

    glBegin(GL_POLYGON); //kiri
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(450, 100, -40);
    glVertex3f(450, 51, -40);
    glVertex3f(450, 51, -60);
    glVertex3f(450, 100, -60);
    glEnd();

    glBegin(GL_POLYGON); //kanan
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(480, 100, -40);
    glVertex3f(480, 51, -40);
    glVertex3f(480, 51, -90);
    glVertex3f(480, 100, -90);
    glEnd();

    //gedung setengah tinggi
    glBegin(GL_POLYGON); //1
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(421, 250, -180);
    glVertex3f(421, 250, -121);
    glVertex3f(421, 51, -121);
    glVertex3f(421, 51, -180);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(421, 250, -180);
    glVertex3f(470, 250, -180);
    glVertex3f(470, 51, -180);
    glVertex3f(421, 51, -180);
    glEnd();

    glBegin(GL_POLYGON); //3
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(470, 250, -180);
    glVertex3f(470, 250, -121);
    glVertex3f(470, 51, -121);
    glVertex3f(470, 51, -180);
    glEnd();

    glBegin(GL_POLYGON); //4
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(421, 250, -121);
    glVertex3f(470, 250, -121);
    glVertex3f(470, 51, -121);
    glVertex3f(421, 51, -121);
    glEnd();

}
void gedunghotel4(void)
{
    glBegin(GL_POLYGON); //1
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(471, 200, -200);
    glVertex3f(471, 200, -140);
    glVertex3f(471, 51, -140);
    glVertex3f(471, 51, -200);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(471, 200, -200);
    glVertex3f(619, 200, -200);
    glVertex3f(619, 51, -200);
    glVertex3f(471, 51, -200);
    glEnd();

    glBegin(GL_POLYGON); //3
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(619, 200, -200);
    glVertex3f(619, 200, -140);
    glVertex3f(619, 51, -140);
    glVertex3f(619, 51, -200);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(471, 200, -140);
    glVertex3f(619, 200, -140);
    glVertex3f(619, 51, -140);
    glVertex3f(471, 51, -140);
    glEnd();

}

void gedunghotel5(void)
{
    glBegin(GL_POLYGON); //atas
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(620, 200, -180);
    glVertex3f(620, 200, -160);
    glVertex3f(640, 200, -140);
    glVertex3f(660, 200, -140);
    glVertex3f(680, 200, -160);
    glVertex3f(680, 200, -180);
    glVertex3f(660, 200, -200);
    glVertex3f(640, 200, -200);
    glEnd();

    glBegin(GL_POLYGON); //bawah
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(620, 0, -180);
    glVertex3f(620, 0, -160);
    glVertex3f(640, 0, -140);
    glVertex3f(660, 0, -140);
    glVertex3f(680, 0, -160);
    glVertex3f(680, 0, -180);
    glVertex3f(660, 0, -200);
    glVertex3f(640, 0, -200);
    glEnd();

   //sisi
    glBegin(GL_POLYGON); //1
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(620, 200, -180);
    glVertex3f(620, 200, -160);
    glVertex3f(620, 0, -160);
    glVertex3f(620, 0, -180);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(620, 0, -160);
    glVertex3f(640, 0, -140);
    glVertex3f(640, 200, -140);
    glVertex3f(620, 200, -160);
    glEnd();

    glBegin(GL_POLYGON); //3
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(640, 200, -140);
    glVertex3f(660, 200, -140);
    glVertex3f(660, 0, -140);
    glVertex3f(640, 0, -140);
    glEnd();

    glBegin(GL_POLYGON); //4
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(660, 0, -140);
    glVertex3f(680, 0, -160);
    glVertex3f(680, 200, -160);
    glVertex3f(660, 200, -140);
    glEnd();

    glBegin(GL_POLYGON); //5
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(680, 200, -160);
    glVertex3f(680, 200, -180);
    glVertex3f(680, 0, -180);
    glVertex3f(680, 0,  -160);
    glEnd();

    glBegin(GL_POLYGON); //6
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(680, 200, -180);
    glVertex3f(660, 200, -200);
    glVertex3f(660, 0, -200);
    glVertex3f(680, 0, -180);
    glEnd();

    glBegin(GL_POLYGON); //7
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(660, 200, -200);
    glVertex3f(640, 200, -200);
    glVertex3f(640, 0, -200);
    glVertex3f(660, 0, -200);
    glEnd();

    glBegin(GL_POLYGON); //8
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(640, 0, -200);
    glVertex3f(620, 0, -180);
    glVertex3f(620, 200, -180);
    glVertex3f(640, 200, -200);
    glEnd();
}

void gedungbelakang(void)
{
     glBegin(GL_POLYGON); //depan
    glColor3f(0.0, 0.0, 0.4);
    glVertex3f(650, 0, -200);
    glVertex3f(350, 0, -200);
    glVertex3f(350, 50, -200);
    glVertex3f(650, 50, -200);
    glEnd();

    glBegin(GL_POLYGON); //1
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(650, 0, -200);
    glVertex3f(650, 0, -500);
    glVertex3f(650, 50, -500);
    glVertex3f(650, 50, -200);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(350, 0, -200);
    glVertex3f(350, 0, -500);
    glVertex3f(350, 50, -500);
    glVertex3f(350, 50, -200);
    glEnd();

    glBegin(GL_POLYGON); //belakang
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(650, 0, -500);
    glVertex3f(350, 0, -500);
    glVertex3f(350, 50, -500);
    glVertex3f(650, 50, -500);
    glEnd();

    glBegin(GL_POLYGON); //atas
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 50, -200);
    glVertex3f(350, 50, -200);
    glVertex3f(350, 50, -500);
    glVertex3f(650, 50, -500);
    glEnd();

    //besar
    glBegin(GL_POLYGON); //depan
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(650, 0, -500);
    glVertex3f(350, 0, -500);
    glVertex3f(350, 100, -500);
    glVertex3f(650, 100, -500);
    glEnd();

    glBegin(GL_POLYGON); //1
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(350, 0, -500);
    glVertex3f(350, 0, -600);
    glVertex3f(350, 100, -600);
    glVertex3f(350, 100, -500);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(650, 0, -500);
    glVertex3f(650, 0, -600);
    glVertex3f(650, 100, -600);
    glVertex3f(650, 100, -500);
    glEnd();

    glBegin(GL_POLYGON); //belakang
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(650, 0, -600);
    glVertex3f(350, 0, -600);
    glVertex3f(350, 100, -600);
    glVertex3f(650, 100, -600);
    glEnd();

    glBegin(GL_POLYGON); //atas
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 100, -500);
    glVertex3f(350, 100, -500);
    glVertex3f(350, 100, -600);
    glVertex3f(650, 100, -600);
    glEnd();

    //kecillagi
    glBegin(GL_POLYGON); //depan
    glColor3f(1.0, 0.5, 0.4);
    glVertex3f(650, 0, -600);
    glVertex3f(350, 0, -600);
    glVertex3f(350, 50, -600);
    glVertex3f(650, 50, -600);
    glEnd();

    glBegin(GL_POLYGON); //1
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(350, 0, -600);
    glVertex3f(350, 0, -800);
    glVertex3f(350, 50, -800);
    glVertex3f(350, 50, -600);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(650, 0, -600);
    glVertex3f(650, 0, -800);
    glVertex3f(650, 50, -800);
    glVertex3f(650, 50, -600);
    glEnd();

    glBegin(GL_POLYGON); //belakang
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(650, 0, -800);
    glVertex3f(350, 0, -800);
    glVertex3f(350, 50, -800);
    glVertex3f(650, 50, -800);
    glEnd();

    glBegin(GL_POLYGON); //atas
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 50, -600);
    glVertex3f(350, 50, -600);
    glVertex3f(350, 50, -800);
    glVertex3f(650, 50, -800);
    glEnd();
}


void gedungatas()
{
    //bawah
    glBegin(GL_POLYGON); //atas 1
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(650, 60, -200);
    glVertex3f(400, 60, -230);
    glVertex3f(380, 60, -260);
    glVertex3f(360, 60, -280);
    glVertex3f(350, 60, -300);
    glVertex3f(350, 101, -500);
    glVertex3f(650, 101, -500);
    glEnd();

     glBegin(GL_POLYGON); //atas 2
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(650, 101, -500);
    glVertex3f(600, 101, -550);
    glVertex3f(400, 101, -550);
    glVertex3f(350, 101, -500);
    glEnd();

    glBegin(GL_POLYGON); //atas3
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(600, 101, -550);
    glVertex3f(400, 101, -550);
    glVertex3f(400, 101, -650);
    glVertex3f(600, 101, -650);
    glEnd();

    glBegin(GL_POLYGON); //atas4
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(400, 101, -650);
    glVertex3f(600, 101, -650);
    glVertex3f(650, 101, -700);
    glVertex3f(350, 101, -700);
    glEnd();

    glBegin(GL_POLYGON); //atas5
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(350, 101, -700);
    glVertex3f(650, 101, -700);
    glVertex3f(680, 101, -720);
    glVertex3f(700, 101, -740);
    glVertex3f(700, 101, -760);
    glVertex3f(680, 101, -780);
    glVertex3f(650, 101, -800);
    glVertex3f(350, 101, -800);
    glEnd();


    glBegin(GL_POLYGON); //atas6
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(350, 101, -800);
    glVertex3f(350, 101, -700);
    glVertex3f(50, 200, -700);
    glVertex3f(50, 200, -800);
    glEnd();

        //atas
    glBegin(GL_POLYGON); //atas 1
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(650, 101, -200);
    glVertex3f(400, 101, -230);
    glVertex3f(380, 101, -260);
    glVertex3f(360, 101, -280);
    glVertex3f(350, 101, -300);
    glVertex3f(350, 150, -500);
    glVertex3f(650, 150, -500);
    glEnd();

     glBegin(GL_POLYGON); //atas 2
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(650, 150, -500);
    glVertex3f(600, 150, -550);
    glVertex3f(400, 150, -550);
    glVertex3f(350, 150, -500);
    glEnd();

    glBegin(GL_POLYGON); //atas3
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(600, 150, -550);
    glVertex3f(400, 150, -550);
    glVertex3f(400, 150, -650);
    glVertex3f(600, 150, -650);
    glEnd();

    glBegin(GL_POLYGON); //atas4
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(400, 150, -650);
    glVertex3f(600, 150, -650);
    glVertex3f(650, 150, -700);
    glVertex3f(350, 150, -700);
    glEnd();

    glBegin(GL_POLYGON); //atas5
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(350, 150, -700);
    glVertex3f(650, 150, -700);
    glVertex3f(680, 150, -720);
    glVertex3f(700, 150, -740);
    glVertex3f(700, 150, -760);
    glVertex3f(680, 150, -780);
    glVertex3f(650, 150, -800);
    glVertex3f(350, 150, -800);
    glEnd();


    glBegin(GL_POLYGON); //atas6
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(350, 150, -800);
    glVertex3f(350, 150, -700);
    glVertex3f(50, 250, -700);
    glVertex3f(50, 250, -800);
    glEnd();

    //samping
    glBegin(GL_POLYGON); //atas 1
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(650, 60, -200);
    glVertex3f(400, 60, -230);
	glVertex3f(400, 101, -230);
	glVertex3f(650, 101, -200);
	glEnd();

	glBegin(GL_POLYGON); //2
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(400, 101, -230);
	glVertex3f(400, 60, -230);
    glVertex3f(380, 60, -260);
	glVertex3f(380, 101, -260);
	glEnd();


	glBegin(GL_POLYGON); //3
   glColor3f(1.0, 1.0, 0.9);
	glVertex3f(380, 60, -260);
	glVertex3f(380, 101, -260);
	glVertex3f(360, 101, -280);
	glVertex3f(360, 60, -280);
	glEnd();

	glBegin(GL_POLYGON); //4
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(360, 101, -280);
	glVertex3f(360, 60, -280);
    glVertex3f(350, 60, -300);
    glVertex3f(350, 101, -300);
    glEnd();

    glBegin(GL_POLYGON); //5
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(350, 60, -300);
    glVertex3f(350, 101, -300);
    glVertex3f(350, 150, -500);
    glVertex3f(350, 101, -500);
    glEnd();

     glBegin(GL_POLYGON); //5
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(650, 60, -200);
    glVertex3f(650, 101, -200);
    glVertex3f(650, 150, -500);
    glVertex3f(650, 101, -500);
    glEnd();

    glBegin(GL_POLYGON); //5
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(650, 60, -200);
    glVertex3f(650, 101, -200);
    glVertex3f(650, 150, -500);
    glVertex3f(650, 101, -500);
    glEnd();

    glBegin(GL_POLYGON); //6
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(650, 101, -500);
    glVertex3f(600, 101, -550);
	glVertex3f(600, 150, -550);
	glVertex3f(650, 150, -500);
	glEnd();

	glBegin(GL_POLYGON); //7
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(400, 101, -550);
    glVertex3f(350, 101, -500);
	glVertex3f(350, 150, -500);
	glVertex3f(400, 150, -550);
	glEnd();

	glBegin(GL_POLYGON); //8
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(400, 101, -550);
    glVertex3f(400, 101, -650);
	glVertex3f(400, 150, -650);
	glVertex3f(400, 150, -550);
	glEnd();

	glBegin(GL_POLYGON); //9
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(600, 101, -550);
    glVertex3f(600, 101, -650);
	glVertex3f(600, 150, -650);
	glVertex3f(600, 150, -550);
	glEnd();

	glBegin(GL_POLYGON); //10
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(600, 101, -650);
   	glVertex3f(650, 101, -700);
	glVertex3f(650, 150, -700);
	glVertex3f(600, 150, -650);
	glEnd();

	glBegin(GL_POLYGON); //11
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(400, 101, -650);
   	glVertex3f(350, 101, -700);
	glVertex3f(350, 150, -700);
	glVertex3f(400, 150, -650);
	glEnd();

	glBegin(GL_POLYGON); //12
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(650, 150, -700);
    glVertex3f(680, 150, -720);
	glVertex3f(680, 101, -720);
	glVertex3f(650, 101, -700);
	glEnd();

	glBegin(GL_POLYGON); //13
    glColor3f(1.0, 1.0, 0.9);
    glVertex3f(680, 150, -720);
	glVertex3f(680, 101, -720);
	glVertex3f(700, 101, -740);
	glVertex3f(700, 150, -740);
	glEnd();

	glBegin(GL_POLYGON); //14
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(700, 101, -740);
	glVertex3f(700, 150, -740);
	glVertex3f(700, 150, -760);
	glVertex3f(700, 101, -760);
	glEnd();

	glBegin(GL_POLYGON); //15
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(700, 150, -760);
	glVertex3f(700, 101, -760);
	glVertex3f(680, 101, -780);
	glVertex3f(680, 150, -780);
	glEnd();

	glBegin(GL_POLYGON); //16
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(680, 101, -780);
	glVertex3f(680, 150, -780);
	glVertex3f(650, 150, -800);
	glVertex3f(650, 101, -800);
	glEnd();

	glBegin(GL_POLYGON); //17
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(650, 150, -800);
	glVertex3f(650, 101, -800);
	glVertex3f(350, 101, -800);
	glVertex3f(350, 150, -800);
	glEnd();

	glBegin(GL_POLYGON); //18
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(350, 150, -700);
    glVertex3f(650, 150, -700);
	glVertex3f(650, 101, -700);
	glVertex3f(350, 101, -700);
	glEnd();

	glBegin(GL_POLYGON); //19
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(350, 150, -700);
    glVertex3f(50, 250, -700);
	glVertex3f(50, 200, -700);
	glVertex3f(350, 101, -700);
	glEnd();

	glBegin(GL_POLYGON); //20
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(350, 150, -800);
    glVertex3f(50, 250, -800);
	glVertex3f(50, 200, -800);
	glVertex3f(350, 101, -800);
	glEnd();

	glBegin(GL_POLYGON); //21
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(50, 250, -700);
    glVertex3f(50, 250, -800);
	glVertex3f(50, 200, -800);
	glVertex3f(50, 200, -700);
	glEnd();


	//tiang
	glBegin(GL_POLYGON); //1
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(50, 200, -700);
    glVertex3f(70, 200, -700);
	glVertex3f(70, 51, -700);
	glVertex3f(50, 51, -700);
	glEnd();

	glBegin(GL_POLYGON); //2
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(50, 200, -720);
    glVertex3f(70, 200, -720);
	glVertex3f(70, 51, -720);
	glVertex3f(50, 51, -720);
	glEnd();

	glBegin(GL_POLYGON); //3
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(50, 200, -720);
    glVertex3f(50, 200, -700);
	glVertex3f(50, 51, -700);
	glVertex3f(50, 51, -720);
	glEnd();

	glBegin(GL_POLYGON); //4
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(70, 200, -720);
    glVertex3f(70, 200, -700);
	glVertex3f(70, 51, -700);
	glVertex3f(70, 51, -720);
	glEnd();

	//tiang2
	glBegin(GL_POLYGON); //1
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(50, 200, -800);
    glVertex3f(70, 200, -800);
	glVertex3f(70, 51, -800);
	glVertex3f(50, 51, -800);
	glEnd();

	glBegin(GL_POLYGON); //2
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(50, 200, -780);
    glVertex3f(70, 200, -780);
	glVertex3f(70, 51, -780);
	glVertex3f(50, 51, -780);
	glEnd();

	glBegin(GL_POLYGON); //3
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(50, 200, -780);
    glVertex3f(50, 200, -800);
	glVertex3f(50, 51, -800);
	glVertex3f(50, 51, -780);
	glEnd();

	glBegin(GL_POLYGON); //4
    glColor3f(1.0, 1.0, 0.9);
	glVertex3f(70, 200, -780);
    glVertex3f(70, 200, -800);
	glVertex3f(70, 51, -800);
	glVertex3f(70, 51, -780);
	glEnd();
}

void genteng (void)
{
    //bangunan samping
    glBegin(GL_TRIANGLES); //1
    glColor3f(0.2, 0, 0);
	glVertex3f(261, 200, -150);
    glVertex3f(280, 230, -115);
	glVertex3f(261, 200, -80);
	glEnd();

	glBegin(GL_TRIANGLES); //2
    glColor3f(0.2, 0, 0);
	glVertex3f(330, 200, -150);
    glVertex3f(310, 230, -115);
	glVertex3f(330, 200, -80);
	glEnd();

	glBegin(GL_POLYGON); //3
    glColor3f(0.2, 0, 0);
	glVertex3f(330, 200, -150);
    glVertex3f(310, 230, -115);
	glVertex3f(280, 230, -115);
	glVertex3f(261, 200, -150);
	glEnd();

	glBegin(GL_POLYGON); //4
    glColor3f(0.2, 0, 0);
	glVertex3f(330, 200, -80);
    glVertex3f(310, 230, -115);
	glVertex3f(280, 230, -115);
	glVertex3f(261, 200, -80);
	glEnd();

	//bangunan inti
    glBegin(GL_TRIANGLES); //1
    glColor3f(0.2, 0, 0);
	glVertex3f(331, 200, -120);
    glVertex3f(350, 230, -90);
	glVertex3f(331, 200, -60);
	glEnd();

	glBegin(GL_TRIANGLES); //2
    glColor3f(0.2, 0, 0);
	glVertex3f(420, 200, -120);
    glVertex3f(400, 230, -90);
	glVertex3f(420, 200, -60);
	glEnd();

	glBegin(GL_POLYGON); //3
    glColor3f(0.2, 0, 0);
	glVertex3f(420, 200, -120);
    glVertex3f(400, 230, -90);
	glVertex3f(350, 230, -90);
	glVertex3f(331, 200, -120);
	glEnd();

	glBegin(GL_POLYGON); //4
	glColor3f(0.2, 0, 0);
	glVertex3f(420, 200, -60);
    glVertex3f(400, 230, -90);
	glVertex3f(350, 230, -90);
	glVertex3f(331, 200, -60);
	glEnd();

	//gedung belakang
	 glBegin(GL_TRIANGLES); //1
    glColor3f(0.2, 0, 0);
	glVertex3f(471, 200, -200);
    glVertex3f(490, 230, -170);
	glVertex3f(471, 200, -140);
	glEnd();

	glBegin(GL_TRIANGLES); //2
    glColor3f(0.2, 0, 0);
	glVertex3f(619, 200, -200);
    glVertex3f(600, 230, -170);
	glVertex3f(619, 200, -140);
	glEnd();

	glBegin(GL_POLYGON); //3
    glColor3f(0.2, 0, 0);
	glVertex3f(619, 200, -200);
    glVertex3f(600, 230, -170);
	glVertex3f(490, 230, -170);
	glVertex3f(471, 200, -200);
	glEnd();

	glBegin(GL_POLYGON); //4
	glColor3f(0.2, 0, 0);
	glVertex3f(619, 200, -140);
    glVertex3f(600, 230, -170);
	glVertex3f(490, 230, -170);
	glVertex3f(471, 200, -140);
	glEnd();
}


void kubahhotel1(void)
{
    glBegin(GL_POLYGON); //atas gedung 2
    glColor3f(0.2, 0, 0);
    glVertex3f(330, 200, -120);
    glVertex3f(350, 200, -120);
    glVertex3f(350, 200, -150);
    glVertex3f(330, 200, -150);
    glEnd();

    //1
    glBegin(GL_POLYGON); //atas 1
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(330, 230, -120);
    glVertex3f(332, 230, -120);
    glVertex3f(332, 201, -120);
    glVertex3f(330, 201, -120);
    glEnd();

    glBegin(GL_POLYGON); //atas 2
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(332, 201, -122);
    glVertex3f(332, 201, -120);
    glVertex3f(332, 230, -120);
    glVertex3f(332, 230, -122);
    glEnd();

    glBegin(GL_POLYGON); //atas 3
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(330, 201, -122);
    glVertex3f(332, 201, -122);
    glVertex3f(332, 230, -122);
    glVertex3f(330, 230, -122);
    glEnd();

    glBegin(GL_POLYGON); //atas 4
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(330, 201, -122);
    glVertex3f(330, 201, -120);
    glVertex3f(330, 230, -120);
    glVertex3f(330, 230, -122);
    glEnd();

    //2
    glBegin(GL_POLYGON); //atas 1
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(330, 230, -150);
    glVertex3f(332, 230, -150);
    glVertex3f(332, 201, -150);
    glVertex3f(330, 201, -150);
    glEnd();

    glBegin(GL_POLYGON); //atas 2
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(332, 201, -152);
    glVertex3f(332, 201, -150);
    glVertex3f(332, 230, -150);
    glVertex3f(332, 230, -152);
    glEnd();

    glBegin(GL_POLYGON); //atas 3
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(330, 201, -152);
    glVertex3f(332, 201, -152);
    glVertex3f(332, 230, -152);
    glVertex3f(330, 230, -152);
    glEnd();

    glBegin(GL_POLYGON); //atas 4
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(330, 201, -152);
    glVertex3f(330, 201, -150);
    glVertex3f(330, 230, -150);
    glVertex3f(330, 230, -152);
    glEnd();

    //3
    glBegin(GL_POLYGON); //atas 1
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(350, 230, -150);
    glVertex3f(348, 230, -150);
    glVertex3f(348, 201, -150);
    glVertex3f(350, 201, -150);
    glEnd();

    glBegin(GL_POLYGON); //atas 2
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(348, 201, -152);
    glVertex3f(348, 201, -150);
    glVertex3f(348, 230, -150);
    glVertex3f(348, 230, -152);
    glEnd();

    glBegin(GL_POLYGON); //atas 3
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(350, 201, -152);
    glVertex3f(348, 201, -152);
    glVertex3f(348, 230, -152);
    glVertex3f(350, 230, -152);
    glEnd();

    glBegin(GL_POLYGON); //atas 4
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(350, 201, -152);
    glVertex3f(350, 201, -150);
    glVertex3f(350, 230, -150);
    glVertex3f(350, 230, -152);
    glEnd();

    //4
    glBegin(GL_POLYGON); //atas 1
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(350, 230, -120);
    glVertex3f(348, 230, -120);
    glVertex3f(348, 201, -120);
    glVertex3f(350, 201, -120);
    glEnd();

    glBegin(GL_POLYGON); //atas 2
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(348, 201, -122);
    glVertex3f(348, 201, -120);
    glVertex3f(348, 230, -120);
    glVertex3f(348, 230, -122);
    glEnd();

    glBegin(GL_POLYGON); //atas 3
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(350, 201, -122);
    glVertex3f(348, 201, -122);
    glVertex3f(348, 230, -122);
    glVertex3f(350, 230, -122);
    glEnd();

    glBegin(GL_POLYGON); //atas 4
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(350, 201, -122);
    glVertex3f(350, 201, -120);
    glVertex3f(350, 230, -120);
    glVertex3f(350, 230, -122);
    glEnd();

    //kubah
	glBegin(GL_TRIANGLES); //1
    glColor3f(0.2, 0, 0);
	glVertex3f(350, 230, -150);
    glVertex3f(340, 250, -135);
	glVertex3f(350, 230, -120);
	glEnd();

	glBegin(GL_TRIANGLES); //2
    glColor3f(0.2, 0, 0);
	glVertex3f(330, 230, -150);
   	glVertex3f(340, 250, -135);
	glVertex3f(330, 230, -120);
	glEnd();

	glBegin(GL_TRIANGLES); //3
   	glColor3f(0.2, 0, 0);
	glVertex3f(350, 230, -150);
   	glVertex3f(340, 250, -135);
	glVertex3f(330, 230, -150);
	glEnd();

	glBegin(GL_TRIANGLES); //4
    glColor3f(0.2, 0, 0);
	glVertex3f(350, 230, -120);
   	glVertex3f(340, 250, -135);
	glVertex3f(330, 230, -120);
	glEnd();

}

void kubahhotel2(void)
{
    glBegin(GL_POLYGON); //atas gedung inti
    glColor3f(0.2, 0, 0);
    glVertex3f(421, 300, -120);
    glVertex3f(470, 300, -120);
    glVertex3f(470, 300, -60);
    glVertex3f(421, 300, -60);
    glEnd();

    glBegin(GL_POLYGON); //bawah kubah inti
    glColor3f(0.2, 0, 0);
    glVertex3f(421, 330, -120);
    glVertex3f(470, 330, -120);
    glVertex3f(470, 330, -60);
    glVertex3f(421, 330, -60);
    glEnd();

    //1
    glBegin(GL_POLYGON); //atas 1
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(421, 330, -120);
    glVertex3f(425, 330, -120);
    glVertex3f(425, 301, -120);
    glVertex3f(421, 301, -120);
    glEnd();

    glBegin(GL_POLYGON); //atas 2
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(425, 301, -118);
    glVertex3f(425, 301, -120);
    glVertex3f(425, 330, -120);
    glVertex3f(425, 330, -118);
    glEnd();

    glBegin(GL_POLYGON); //atas 3
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(421, 301, -118);
    glVertex3f(425, 301, -118);
    glVertex3f(425, 330, -118);
    glVertex3f(421, 330, -118);
    glEnd();

    glBegin(GL_POLYGON); //atas 4
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(421, 301, -118);
    glVertex3f(421, 301, -120);
    glVertex3f(421, 330, -120);
    glVertex3f(421, 330, -118);
    glEnd();


    //2
    glBegin(GL_POLYGON); //atas 1
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(421, 330, -60);
    glVertex3f(425, 330, -60);
    glVertex3f(425, 301, -60);
    glVertex3f(421, 301, -60);
    glEnd();

    glBegin(GL_POLYGON); //atas 2
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(425, 301, -62);
    glVertex3f(425, 301, -60);
    glVertex3f(425, 330, -60);
    glVertex3f(425, 330, -62);
    glEnd();

    glBegin(GL_POLYGON); //atas 3
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(421, 301, -62);
    glVertex3f(425, 301, -62);
    glVertex3f(425, 330, -62);
    glVertex3f(421, 330, -62);
    glEnd();

    glBegin(GL_POLYGON); //atas 4
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(421, 301, -62);
    glVertex3f(421, 301, -60);
    glVertex3f(421, 330, -60);
    glVertex3f(421, 330, -62);
    glEnd();

    //3
    glBegin(GL_POLYGON); //atas 1
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(470, 330, -60);
    glVertex3f(465, 330, -60);
    glVertex3f(465, 301, -60);
    glVertex3f(470, 301, -60);
    glEnd();

    glBegin(GL_POLYGON); //atas 2
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(465, 301, -62);
    glVertex3f(465, 301, -60);
    glVertex3f(465, 330, -60);
    glVertex3f(465, 330, -62);
    glEnd();

    glBegin(GL_POLYGON); //atas 3
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(470, 301, -62);
    glVertex3f(465, 301, -62);
    glVertex3f(465, 330, -62);
    glVertex3f(470, 330, -62);
    glEnd();

    glBegin(GL_POLYGON); //atas 4
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(470, 301, -62);
    glVertex3f(470, 301, -60);
    glVertex3f(470, 330, -60);
    glVertex3f(470, 330, -62);
    glEnd();

    //4
    glBegin(GL_POLYGON); //atas 1
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(470, 330, -120);
    glVertex3f(465, 330, -120);
    glVertex3f(465, 301, -120);
    glVertex3f(470, 301, -120);
    glEnd();

    glBegin(GL_POLYGON); //atas 2
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(465, 301, -118);
    glVertex3f(465, 301, -120);
    glVertex3f(465, 330, -120);
    glVertex3f(465, 330, -118);
    glEnd();

    glBegin(GL_POLYGON); //atas 3
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(470, 301, -118);
    glVertex3f(465, 301, -118);
    glVertex3f(465, 330, -118);
    glVertex3f(470, 330, -118);
    glEnd();

    glBegin(GL_POLYGON); //atas 4
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(470, 301, -118);
    glVertex3f(470, 301, -120);
    glVertex3f(470, 330, -120);
    glVertex3f(470, 330, -118);
    glEnd();

    //kubah
	glBegin(GL_TRIANGLES); //1
    glColor3f(0.2, 0, 0);
	glVertex3f(421, 330, -120);
    glVertex3f(445, 350, -90);
	glVertex3f(421, 330, -60);
	glEnd();

	glBegin(GL_TRIANGLES); //2
    glColor3f(0.2, 0, 0);
	glVertex3f(470, 330, -120);
   	glVertex3f(445, 350, -90);
	glVertex3f(470, 330, -60);
	glEnd();

	glBegin(GL_TRIANGLES); //3
   	glColor3f(0.2, 0, 0);
	glVertex3f(421, 330, -120);
   	glVertex3f(445, 350, -90);
	glVertex3f(470, 330, -120);
	glEnd();

	glBegin(GL_TRIANGLES); //4
    glColor3f(0.2, 0, 0);
	glVertex3f(421, 330, -60);
   	glVertex3f(445, 350, -90);
	glVertex3f(470, 330, -60);
	glEnd();

}

void kubahhotel3(void)
{
    glBegin(GL_POLYGON); //atas SET tinggi
    glColor3f(0.2, 0, 0);
    glVertex3f(421, 250, -121);
    glVertex3f(470, 250, -121);
    glVertex3f(470, 250, -180);
    glVertex3f(421, 250, -180);
    glEnd();

    glBegin(GL_POLYGON); //bawah set tinggi280
    glColor3f(0.2, 0, 0);
    glVertex3f(421, 280, -121);
    glVertex3f(470, 280, -121);
    glVertex3f(470, 280, -180);
    glVertex3f(421, 280, -180);
    glEnd();

    //1
    glBegin(GL_POLYGON); //atas 1
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(421, 280, -121);
    glVertex3f(425, 280, -121);
    glVertex3f(425, 250, -121);
    glVertex3f(421, 250, -121);
    glEnd();

    glBegin(GL_POLYGON); //atas 2
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(425, 250, -123);
    glVertex3f(425, 250, -121);
    glVertex3f(425, 280, -121);
    glVertex3f(425, 280, -123);
    glEnd();

    glBegin(GL_POLYGON); //atas 3
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(421, 250, -123);
    glVertex3f(425, 250, -123);
    glVertex3f(425, 280, -123);
    glVertex3f(421, 280, -123);
    glEnd();

    glBegin(GL_POLYGON); //atas 4
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(421, 250, -123);
    glVertex3f(421, 250, -121);
    glVertex3f(421, 280, -121);
    glVertex3f(421, 280, -123);
    glEnd();


    //2
    glBegin(GL_POLYGON); //atas 1
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(421, 280, -180);
    glVertex3f(425, 280, -180);
    glVertex3f(425, 250, -180);
    glVertex3f(421, 250, -180);
    glEnd();

    glBegin(GL_POLYGON); //atas 2
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(425, 250, -178);
    glVertex3f(425, 250, -180);
    glVertex3f(425, 280, -180);
    glVertex3f(425, 280, -178);
    glEnd();

    glBegin(GL_POLYGON); //atas 3
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(421, 250, -178);
    glVertex3f(425, 250, -178);
    glVertex3f(425, 280, -178);
    glVertex3f(421, 280, -178);
    glEnd();

    glBegin(GL_POLYGON); //atas 4
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(421, 250, -178);
    glVertex3f(421, 250, -180);
    glVertex3f(421, 280, -180);
    glVertex3f(421, 280, -178);
    glEnd();

    //3
    glBegin(GL_POLYGON); //atas 1
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(470, 280, -180);
    glVertex3f(465, 280, -180);
    glVertex3f(465, 250, -180);
    glVertex3f(470, 250, -180);
    glEnd();

    glBegin(GL_POLYGON); //atas 2
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(465, 250, -178);
    glVertex3f(465, 250, -180);
    glVertex3f(465, 280, -180);
    glVertex3f(465, 280, -178);
    glEnd();

    glBegin(GL_POLYGON); //atas 3
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(470, 250, -178);
    glVertex3f(465, 250, -178);
    glVertex3f(465, 280, -178);
    glVertex3f(470, 280, -178);
    glEnd();

    glBegin(GL_POLYGON); //atas 4
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(470, 250, -178);
    glVertex3f(470, 250, -180);
    glVertex3f(470, 280, -180);
    glVertex3f(470, 280, -178);
    glEnd();

    //4
    glBegin(GL_POLYGON); //atas 1
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(470, 280, -123);
    glVertex3f(465, 280, -123);
    glVertex3f(465, 250, -123);
    glVertex3f(470, 250, -123);
    glEnd();

    glBegin(GL_POLYGON); //atas 2
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(465, 250, -121);
    glVertex3f(465, 250, -123);
    glVertex3f(465, 280, -123);
    glVertex3f(465, 280, -121);
    glEnd();

    glBegin(GL_POLYGON); //atas 3
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(470, 250, -121);
    glVertex3f(465, 250, -121);
    glVertex3f(465, 280, -121);
    glVertex3f(470, 280, -121);
    glEnd();

    glBegin(GL_POLYGON); //atas 4
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(470, 250, -121);
    glVertex3f(470, 250, -123);
    glVertex3f(470, 280, -123);
    glVertex3f(470, 280, -121);
    glEnd();

    //kubah
	glBegin(GL_TRIANGLES); //1
    glColor3f(0.2, 0, 0);
	glVertex3f(421, 280, -121);
    glVertex3f(445, 300, -150);
	glVertex3f(421, 280, -180);
	glEnd();

	glBegin(GL_TRIANGLES); //2
    glColor3f(0.2, 0, 0);
	glVertex3f(470, 280, -121);
   	glVertex3f(445, 300, -150);
	glVertex3f(470, 280, -180);
	glEnd();

	glBegin(GL_TRIANGLES); //3
   	glColor3f(0.2, 0, 0);
	glVertex3f(421, 280, -121);
   	glVertex3f(445, 300, -150);
	glVertex3f(470, 280, -121);
	glEnd();

	glBegin(GL_TRIANGLES); //4
    glColor3f(0.2, 0, 0);
	glVertex3f(421, 280, -180);
   	glVertex3f(445, 300, -150);
	glVertex3f(470, 280, -180);
	glEnd();

}
void line_hotel ()
{
    //theo
    //1
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(200, 0, -60);
    glVertex3f(200, 50, -60);
    glVertex3f(300, 50, -60);
    glVertex3f(300, 0, -60);
    glEnd();
    //2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);;
    glVertex3f(300, 0, -60);
    glVertex3f(300, 50, -60);
    glVertex3f(300, 50, -20);
    glVertex3f(300, 0, -20);
    glEnd();
    //3 tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(300, 0, -20);
    glVertex3f(300, 50, -20);
    glVertex3f(500, 50, -20);
    glVertex3f(500, 0, -20);
    glEnd();
    //4
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(500, 0, -20);
    glVertex3f(500, 50, -20);
    glVertex3f(500, 50, -60);
    glVertex3f(500, 0, -60);
    glEnd();

    //5
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(500, 0, -60);
    glVertex3f(500, 50, -60);
    glVertex3f(520, 50, -60);
    glVertex3f(520, 0, -60);
    glEnd();
    //6
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(520, 0, -60);
    glVertex3f(520, 50, -60);
    glVertex3f(520, 50, -40);
    glVertex3f(520, 0, -40);
    glEnd();
    //7
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(520, 0, -40);
    glVertex3f(520, 50, -40);
    glVertex3f(550, 50, -40);
    glVertex3f(550, 0, -40);
    glEnd();

    //8
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(550, 0, -40);
    glVertex3f(550, 50, -40);
    glVertex3f(550, 50, -60);
    glVertex3f(550, 0, -60);
    glEnd();

    //9
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(550, 0, -60);
    glVertex3f(550, 50, -60);
    glVertex3f(570, 50, -60);
    glVertex3f(570, 0, -60);
    glEnd();
    //10
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(570, 0, -60);
    glVertex3f(570, 50, -60);
    glVertex3f(570, 50, -30);
    glVertex3f(570, 0, -30);
    glEnd();
    //11
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(570, 0, -30);
    glVertex3f(570, 50, -30);
    glVertex3f(630, 50, -30);
    glVertex3f(630, 0, -30);
    glEnd();
    //12
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(630, 0, -30);
    glVertex3f(630, 50, -30);
    glVertex3f(630, 50, -60);
    glVertex3f(630, 0, -60);
    glEnd();
    //13
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(630, 0, -60);
    glVertex3f(630, 50, -60);
    glVertex3f(650, 50, -60);
    glVertex3f(650, 0, -60);
    glEnd();
    //14
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 0, -60);
    glVertex3f(650, 50, -60);
    glVertex3f(650, 50, -150);
    glVertex3f(650, 0, -150);
    glEnd();

}
void line_1 ()
{
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(200, 200, -120);
    glVertex3f(200, 200, -100);
    glVertex3f(220, 200, -80);
    glVertex3f(240, 200, -80);
    glVertex3f(260, 200, -100);
    glVertex3f(260, 200, -120);
    glVertex3f(240, 200, -140);
    glVertex3f(220, 200, -140);
    glEnd();

     glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(200, 51, -120);
    glVertex3f(200, 51, -100);
    glVertex3f(220, 51, -80);
    glVertex3f(240, 51, -80);
    glVertex3f(260, 51, -100);
    glVertex3f(260, 51, -120);
    glVertex3f(240, 51, -140);
    glVertex3f(220, 51, -140);
    glEnd();

    //sisi
     glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(200, 200, -120);
    glVertex3f(200, 200, -100);
    glVertex3f(200, 51, -100);
    glVertex3f(200, 51, -120);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(200, 51, -100);
    glVertex3f(220, 51, -80);
    glVertex3f(220, 200, -80);
    glVertex3f(200, 200, -100);
    glEnd();

     glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(220, 200, -80);
    glVertex3f(240, 200, -80);
    glVertex3f(240, 51, -80);
    glVertex3f(220, 51, -80);
    glEnd();

     glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(240, 51, -80);
    glVertex3f(260, 51, -100);
    glVertex3f(260, 200, -100);
    glVertex3f(240, 200, -80);
    glEnd();

     glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(260, 200, -100);
    glVertex3f(260, 200, -120);
    glVertex3f(260, 51, -120);
    glVertex3f(260, 51, -100);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(260, 200, -120);
    glVertex3f(240, 200, -140);
    glVertex3f(240, 51, -140);
    glVertex3f(260, 51, -120);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(240, 200, -140);
    glVertex3f(220, 200, -140);
    glVertex3f(220, 51, -140);
    glVertex3f(240, 51, -140);
    glEnd();

     glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(220, 51, -140);
    glVertex3f(200, 51, -120);
    glVertex3f(200, 200, -120);
    glVertex3f(220, 200, -140);
    glEnd();

}
void line_2()
{
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(261, 200, -80);
    glVertex3f(261, 200, -150);
    glVertex3f(261, 51, -150);
    glVertex3f(261, 51, -80);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(261, 200, -150);
    glVertex3f(350, 200, -150);
    glVertex3f(350, 51, -150);
    glVertex3f(261, 51, -150);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(350, 200, -120);
    glVertex3f(350, 200, -150);
    glVertex3f(350, 51, -150);
    glVertex3f(350, 51, -120);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(330, 200, -120);
    glVertex3f(350, 200, -120);
    glVertex3f(350, 51, -120);
    glVertex3f(330, 51, -120);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(330, 200, -120);
    glVertex3f(330, 200, -80);
    glVertex3f(330, 51, -80);
    glVertex3f(330, 51, -120);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(261, 200, -80);
    glVertex3f(330, 200, -80);
    glVertex3f(330, 51, -80);
    glVertex3f(261, 51, -80);
    glEnd();
}
void line_3()
{
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(331, 100, -40);
    glVertex3f(380, 100, -40);
    glVertex3f(380, 51, -40);
    glVertex3f(331, 51, -40);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(331, 100, -40);
    glVertex3f(380, 100, -40);
    glVertex3f(380, 100, -60);
    glVertex3f(331, 100, -60);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(331, 100, -40);
    glVertex3f(331, 51, -40);
    glVertex3f(331, 51, -60);
    glVertex3f(331, 100, -60);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(380, 100, -40);
    glVertex3f(380, 51, -40);
    glVertex3f(380, 51, -60);
    glVertex3f(380, 100, -60);
    glEnd();

    //gedung inti
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(331, 200, -120);
    glVertex3f(331, 200, -60);
    glVertex3f(331, 51, -60);
    glVertex3f(331, 51, -120);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(331, 200, -120);
    glVertex3f(420, 200, -120);
    glVertex3f(420, 51, -120);
    glVertex3f(331, 51, -120);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(420, 200, -120);
    glVertex3f(420, 200, -60);
    glVertex3f(420, 51, -60);
    glVertex3f(420, 51, -120);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(331, 200, -60);
    glVertex3f(420, 200, -60);
    glVertex3f(420, 51, -60);
    glVertex3f(331, 51, -60);
    glEnd();

    //gedungtinggi
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(421, 300, -120);
    glVertex3f(421, 300, -60);
    glVertex3f(421, 51, -60);
    glVertex3f(421, 51, -120);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(421, 300, -120);
    glVertex3f(470, 300, -120);
    glVertex3f(470, 51, -120);
    glVertex3f(421, 51, -120);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(470, 300, -120);
    glVertex3f(470, 300, -60);
    glVertex3f(470, 51, -60);
    glVertex3f(470, 51, -120);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(421, 300, -60);
    glVertex3f(470, 300, -60);
    glVertex3f(470, 51, -60);
    glVertex3f(421, 51, -60);
    glEnd();

    //gedung kecil depan 2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(450, 100, -40);
    glVertex3f(480, 100, -40);
    glVertex3f(480, 51, -40);
    glVertex3f(450, 51, -40);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(470, 100, -90);
    glVertex3f(480, 100, -90);
    glVertex3f(480, 51, -90);
    glVertex3f(470, 51, -90);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(450, 100, -40);
    glVertex3f(480, 100, -40);
    glVertex3f(480, 100, -60);
    glVertex3f(450, 100, -60);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(470, 100, -40);
    glVertex3f(480, 100, -40);
    glVertex3f(480, 100, -90);
    glVertex3f(470, 100, -90);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(450, 100, -40);
    glVertex3f(450, 51, -40);
    glVertex3f(450, 51, -60);
    glVertex3f(450, 100, -60);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(480, 100, -40);
    glVertex3f(480, 51, -40);
    glVertex3f(480, 51, -90);
    glVertex3f(480, 100, -90);
    glEnd();

    //gedung setengah tinggi
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(421, 250, -180);
    glVertex3f(421, 250, -121);
    glVertex3f(421, 51, -121);
    glVertex3f(421, 51, -180);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(421, 250, -180);
    glVertex3f(470, 250, -180);
    glVertex3f(470, 51, -180);
    glVertex3f(421, 51, -180);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(470, 250, -180);
    glVertex3f(470, 250, -121);
    glVertex3f(470, 51, -121);
    glVertex3f(470, 51, -180);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(421, 250, -121);
    glVertex3f(470, 250, -121);
    glVertex3f(470, 51, -121);
    glVertex3f(421, 51, -121);
    glEnd();

}
void line_4()
{
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(471, 200, -200);
    glVertex3f(471, 200, -140);
    glVertex3f(471, 51, -140);
    glVertex3f(471, 51, -200);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(471, 200, -200);
    glVertex3f(619, 200, -200);
    glVertex3f(619, 51, -200);
    glVertex3f(471, 51, -200);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(619, 200, -200);
    glVertex3f(619, 200, -140);
    glVertex3f(619, 51, -140);
    glVertex3f(619, 51, -200);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(471, 200, -140);
    glVertex3f(619, 200, -140);
    glVertex3f(619, 51, -140);
    glVertex3f(471, 51, -140);
    glEnd();
}
void line_5()
{
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(620, 200, -180);
    glVertex3f(620, 200, -160);
    glVertex3f(640, 200, -140);
    glVertex3f(660, 200, -140);
    glVertex3f(680, 200, -160);
    glVertex3f(680, 200, -180);
    glVertex3f(660, 200, -200);
    glVertex3f(640, 200, -200);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(620, 0, -180);
    glVertex3f(620, 0, -160);
    glVertex3f(640, 0, -140);
    glVertex3f(660, 0, -140);
    glVertex3f(680, 0, -160);
    glVertex3f(680, 0, -180);
    glVertex3f(660, 0, -200);
    glVertex3f(640, 0, -200);
    glEnd();

   //sisi
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(620, 200, -180);
    glVertex3f(620, 200, -160);
    glVertex3f(620, 0, -160);
    glVertex3f(620, 0, -180);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(620, 0, -160);
    glVertex3f(640, 0, -140);
    glVertex3f(640, 200, -140);
    glVertex3f(620, 200, -160);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(640, 200, -140);
    glVertex3f(660, 200, -140);
    glVertex3f(660, 0, -140);
    glVertex3f(640, 0, -140);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(660, 0, -140);
    glVertex3f(680, 0, -160);
    glVertex3f(680, 200, -160);
    glVertex3f(660, 200, -140);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(680, 200, -160);
    glVertex3f(680, 200, -180);
    glVertex3f(680, 0, -180);
    glVertex3f(680, 0,  -160);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(680, 200, -180);
    glVertex3f(660, 200, -200);
    glVertex3f(660, 0, -200);
    glVertex3f(680, 0, -180);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(660, 200, -200);
    glVertex3f(640, 200, -200);
    glVertex3f(640, 0, -200);
    glVertex3f(660, 0, -200);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(640, 0, -200);
    glVertex3f(620, 0, -180);
    glVertex3f(620, 200, -180);
    glVertex3f(640, 200, -200);
    glEnd();
}
void line_6 ()
{
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 60, -200);
    glVertex3f(400, 60, -230);
    glVertex3f(380, 60, -260);
    glVertex3f(360, 60, -280);
    glVertex3f(350, 60, -300);
    glVertex3f(350, 101, -500);
    glVertex3f(650, 101, -500);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 101, -500);
    glVertex3f(600, 101, -550);
    glVertex3f(400, 101, -550);
    glVertex3f(350, 101, -500);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(600, 101, -550);
    glVertex3f(400, 101, -550);
    glVertex3f(400, 101, -650);
    glVertex3f(600, 101, -650);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(400, 101, -650);
    glVertex3f(600, 101, -650);
    glVertex3f(650, 101, -700);
    glVertex3f(350, 101, -700);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(350, 101, -700);
    glVertex3f(650, 101, -700);
    glVertex3f(680, 101, -720);
    glVertex3f(700, 101, -740);
    glVertex3f(700, 101, -760);
    glVertex3f(680, 101, -780);
    glVertex3f(650, 101, -800);
    glVertex3f(350, 101, -800);
    glEnd();


    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(350, 101, -800);
    glVertex3f(350, 101, -700);
    glVertex3f(50, 200, -700);
    glVertex3f(50, 200, -800);
    glEnd();

        //atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 101, -200);
    glVertex3f(400, 101, -230);
    glVertex3f(380, 101, -260);
    glVertex3f(360, 101, -280);
    glVertex3f(350, 101, -300);
    glVertex3f(350, 150, -500);
    glVertex3f(650, 150, -500);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 150, -500);
    glVertex3f(600, 150, -550);
    glVertex3f(400, 150, -550);
    glVertex3f(350, 150, -500);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(600, 150, -550);
    glVertex3f(400, 150, -550);
    glVertex3f(400, 150, -650);
    glVertex3f(600, 150, -650);

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 60, -200);
    glVertex3f(400, 60, -230);
    glVertex3f(380, 60, -260);
    glVertex3f(360, 60, -280);
    glVertex3f(350, 60, -300);
    glVertex3f(350, 101, -500);
    glVertex3f(650, 101, -500);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 101, -500);
    glVertex3f(600, 101, -550);
    glVertex3f(400, 101, -550);
    glVertex3f(350, 101, -500);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(600, 101, -550);
    glVertex3f(400, 101, -550);
    glVertex3f(400, 101, -650);
    glVertex3f(600, 101, -650);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(400, 101, -650);
    glVertex3f(600, 101, -650);
    glVertex3f(650, 101, -700);
    glVertex3f(350, 101, -700);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(350, 101, -700);
    glVertex3f(650, 101, -700);
    glVertex3f(680, 101, -720);
    glVertex3f(700, 101, -740);
    glVertex3f(700, 101, -760);
    glVertex3f(680, 101, -780);
    glVertex3f(650, 101, -800);
    glVertex3f(350, 101, -800);
    glEnd();


    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(350, 101, -800);
    glVertex3f(350, 101, -700);
    glVertex3f(50, 200, -700);
    glVertex3f(50, 200, -800);
    glEnd();

        //atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 101, -200);
    glVertex3f(400, 101, -230);
    glVertex3f(380, 101, -260);
    glVertex3f(360, 101, -280);
    glVertex3f(350, 101, -300);
    glVertex3f(350, 150, -500);
    glVertex3f(650, 150, -500);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 150, -500);
    glVertex3f(600, 150, -550);
    glVertex3f(400, 150, -550);
    glVertex3f(350, 150, -500);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(600, 150, -550);
    glVertex3f(400, 150, -550);
    glVertex3f(400, 150, -650);
    glVertex3f(600, 150, -650);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(400, 150, -650);
    glVertex3f(600, 150, -650);
    glVertex3f(650, 150, -700);
    glVertex3f(350, 150, -700);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(350, 150, -700);
    glVertex3f(650, 150, -700);
    glVertex3f(680, 150, -720);
    glVertex3f(700, 150, -740);
    glVertex3f(700, 150, -760);
    glVertex3f(680, 150, -780);
    glVertex3f(650, 150, -800);
    glVertex3f(350, 150, -800);
    glEnd();


    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(350, 150, -800);
    glVertex3f(350, 150, -700);
    glVertex3f(50, 250, -700);
    glVertex3f(50, 250, -800);
    glEnd();

    //samping
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 60, -200);
    glVertex3f(400, 60, -230);
	glVertex3f(400, 101, -230);
	glVertex3f(650, 101, -200);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(400, 101, -230);
	glVertex3f(400, 60, -230);
    glVertex3f(380, 60, -260);
	glVertex3f(380, 101, -260);
	glEnd();


	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(380, 60, -260);
	glVertex3f(380, 101, -260);
	glVertex3f(360, 101, -280);
	glVertex3f(360, 60, -280);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(360, 101, -280);
	glVertex3f(360, 60, -280);
    glVertex3f(350, 60, -300);
    glVertex3f(350, 101, -300);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(350, 60, -300);
    glVertex3f(350, 101, -300);
    glVertex3f(350, 150, -500);
    glVertex3f(350, 101, -500);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 60, -200);
    glVertex3f(650, 101, -200);
    glVertex3f(650, 150, -500);
    glVertex3f(650, 101, -500);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 60, -200);
    glVertex3f(650, 101, -200);
    glVertex3f(650, 150, -500);
    glVertex3f(650, 101, -500);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(650, 101, -500);
    glVertex3f(600, 101, -550);
	glVertex3f(600, 150, -550);
	glVertex3f(650, 150, -500);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(400, 101, -550);
    glVertex3f(350, 101, -500);
	glVertex3f(350, 150, -500);
	glVertex3f(400, 150, -550);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(400, 101, -550);
    glVertex3f(400, 101, -650);
	glVertex3f(400, 150, -650);
	glVertex3f(400, 150, -550);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(600, 101, -550);
    glVertex3f(600, 101, -650);
	glVertex3f(600, 150, -650);
	glVertex3f(600, 150, -550);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(600, 101, -650);
   	glVertex3f(650, 101, -700);
	glVertex3f(650, 150, -700);
	glVertex3f(600, 150, -650);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(400, 101, -650);
   	glVertex3f(350, 101, -700);
	glVertex3f(350, 150, -700);
	glVertex3f(400, 150, -650);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(650, 150, -700);
    glVertex3f(680, 150, -720);
	glVertex3f(680, 101, -720);
	glVertex3f(650, 101, -700);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(680, 150, -720);
	glVertex3f(680, 101, -720);
	glVertex3f(700, 101, -740);
	glVertex3f(700, 150, -740);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(700, 101, -740);
	glVertex3f(700, 150, -740);
	glVertex3f(700, 150, -760);
	glVertex3f(700, 101, -760);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(700, 150, -760);
	glVertex3f(700, 101, -760);
	glVertex3f(680, 101, -780);
	glVertex3f(680, 150, -780);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(680, 101, -780);
	glVertex3f(680, 150, -780);
	glVertex3f(650, 150, -800);
	glVertex3f(650, 101, -800);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(650, 150, -800);
	glVertex3f(650, 101, -800);
	glVertex3f(350, 101, -800);
	glVertex3f(350, 150, -800);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(350, 150, -700);
    glVertex3f(650, 150, -700);
	glVertex3f(650, 101, -700);
	glVertex3f(350, 101, -700);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(350, 150, -700);
    glVertex3f(50, 250, -700);
	glVertex3f(50, 200, -700);
	glVertex3f(350, 101, -700);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(350, 150, -800);
    glVertex3f(50, 250, -800);
	glVertex3f(50, 200, -800);
	glVertex3f(350, 101, -800);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(50, 250, -700);
    glVertex3f(50, 250, -800);
	glVertex3f(50, 200, -800);
	glVertex3f(50, 200, -700);
	glEnd();


	//tiang
	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(50, 200, -700);
    glVertex3f(70, 200, -700);
	glVertex3f(70, 51, -700);
	glVertex3f(50, 51, -700);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(50, 200, -720);
    glVertex3f(70, 200, -720);
	glVertex3f(70, 51, -720);
	glVertex3f(50, 51, -720);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(50, 200, -720);
    glVertex3f(50, 200, -700);
	glVertex3f(50, 51, -700);
	glVertex3f(50, 51, -720);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(70, 200, -720);
    glVertex3f(70, 200, -700);
	glVertex3f(70, 51, -700);
	glVertex3f(70, 51, -720);
	glEnd();

	//tiang2
	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(50, 200, -800);
    glVertex3f(70, 200, -800);
	glVertex3f(70, 51, -800);
	glVertex3f(50, 51, -800);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(50, 200, -780);
    glVertex3f(70, 200, -780);
	glVertex3f(70, 51, -780);
	glVertex3f(50, 51, -780);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(50, 200, -780);
    glVertex3f(50, 200, -800);
	glVertex3f(50, 51, -800);
	glVertex3f(50, 51, -780);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(70, 200, -780);
    glVertex3f(70, 200, -800);
	glVertex3f(70, 51, -800);
	glVertex3f(70, 51, -780);
	glEnd();  glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(400, 150, -650);
    glVertex3f(600, 150, -650);
    glVertex3f(650, 150, -700);
    glVertex3f(350, 150, -700);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(350, 150, -700);
    glVertex3f(650, 150, -700);
    glVertex3f(680, 150, -720);
    glVertex3f(700, 150, -740);
    glVertex3f(700, 150, -760);
    glVertex3f(680, 150, -780);
    glVertex3f(650, 150, -800);
    glVertex3f(350, 150, -800);
    glEnd();


    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(350, 150, -800);
    glVertex3f(350, 150, -700);
    glVertex3f(50, 250, -700);
    glVertex3f(50, 250, -800);
    glEnd();

    //samping
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 60, -200);
    glVertex3f(400, 60, -230);
	glVertex3f(400, 101, -230);
	glVertex3f(650, 101, -200);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(400, 101, -230);
	glVertex3f(400, 60, -230);
    glVertex3f(380, 60, -260);
	glVertex3f(380, 101, -260);
	glEnd();


	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(380, 60, -260);
	glVertex3f(380, 101, -260);
	glVertex3f(360, 101, -280);
	glVertex3f(360, 60, -280);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(360, 101, -280);
	glVertex3f(360, 60, -280);
    glVertex3f(350, 60, -300);
    glVertex3f(350, 101, -300);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(350, 60, -300);
    glVertex3f(350, 101, -300);
    glVertex3f(350, 150, -500);
    glVertex3f(350, 101, -500);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 60, -200);
    glVertex3f(650, 101, -200);
    glVertex3f(650, 150, -500);
    glVertex3f(650, 101, -500);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(650, 60, -200);
    glVertex3f(650, 101, -200);
    glVertex3f(650, 150, -500);
    glVertex3f(650, 101, -500);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(650, 101, -500);
    glVertex3f(600, 101, -550);
	glVertex3f(600, 150, -550);
	glVertex3f(650, 150, -500);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(400, 101, -550);
    glVertex3f(350, 101, -500);
	glVertex3f(350, 150, -500);
	glVertex3f(400, 150, -550);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(400, 101, -550);
    glVertex3f(400, 101, -650);
	glVertex3f(400, 150, -650);
	glVertex3f(400, 150, -550);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(600, 101, -550);
    glVertex3f(600, 101, -650);
	glVertex3f(600, 150, -650);
	glVertex3f(600, 150, -550);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(600, 101, -650);
   	glVertex3f(650, 101, -700);
	glVertex3f(650, 150, -700);
	glVertex3f(600, 150, -650);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(400, 101, -650);
   	glVertex3f(350, 101, -700);
	glVertex3f(350, 150, -700);
	glVertex3f(400, 150, -650);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(650, 150, -700);
    glVertex3f(680, 150, -720);
	glVertex3f(680, 101, -720);
	glVertex3f(650, 101, -700);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(680, 150, -720);
	glVertex3f(680, 101, -720);
	glVertex3f(700, 101, -740);
	glVertex3f(700, 150, -740);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(700, 101, -740);
	glVertex3f(700, 150, -740);
	glVertex3f(700, 150, -760);
	glVertex3f(700, 101, -760);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(700, 150, -760);
	glVertex3f(700, 101, -760);
	glVertex3f(680, 101, -780);
	glVertex3f(680, 150, -780);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(680, 101, -780);
	glVertex3f(680, 150, -780);
	glVertex3f(650, 150, -800);
	glVertex3f(650, 101, -800);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(650, 150, -800);
	glVertex3f(650, 101, -800);
	glVertex3f(350, 101, -800);
	glVertex3f(350, 150, -800);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(350, 150, -700);
    glVertex3f(650, 150, -700);
	glVertex3f(650, 101, -700);
	glVertex3f(350, 101, -700);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(350, 150, -700);
    glVertex3f(50, 250, -700);
	glVertex3f(50, 200, -700);
	glVertex3f(350, 101, -700);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(350, 150, -800);
    glVertex3f(50, 250, -800);
	glVertex3f(50, 200, -800);
	glVertex3f(350, 101, -800);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(50, 250, -700);
    glVertex3f(50, 250, -800);
	glVertex3f(50, 200, -800);
	glVertex3f(50, 200, -700);
	glEnd();


	//tiang
	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(50, 200, -700);
    glVertex3f(70, 200, -700);
	glVertex3f(70, 51, -700);
	glVertex3f(50, 51, -700);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(50, 200, -720);
    glVertex3f(70, 200, -720);
	glVertex3f(70, 51, -720);
	glVertex3f(50, 51, -720);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(50, 200, -720);
    glVertex3f(50, 200, -700);
	glVertex3f(50, 51, -700);
	glVertex3f(50, 51, -720);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(70, 200, -720);
    glVertex3f(70, 200, -700);
	glVertex3f(70, 51, -700);
	glVertex3f(70, 51, -720);
	glEnd();

	//tiang2
	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(50, 200, -800);
    glVertex3f(70, 200, -800);
	glVertex3f(70, 51, -800);
	glVertex3f(50, 51, -800);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(50, 200, -780);
    glVertex3f(70, 200, -780);
	glVertex3f(70, 51, -780);
	glVertex3f(50, 51, -780);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(50, 200, -780);
    glVertex3f(50, 200, -800);
	glVertex3f(50, 51, -800);
	glVertex3f(50, 51, -780);
	glEnd();

	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
	glVertex3f(70, 200, -780);
    glVertex3f(70, 200, -800);
	glVertex3f(70, 51, -800);
	glVertex3f(70, 51, -780);
	glEnd();
}
void tampil(void)
{
    if(is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);

gedung_depan();
gedung_kiri();
datar();
hotel();
kubah();
gedunghotel1();
gedunghotel2();
gedunghotel3();
gedunghotel4();
gedunghotel5();
gedungatas();
genteng();
kubahhotel1();
kubahhotel2();
kubahhotel3();
gedungbelakang();
gedung_samping_hotel();
line_gedung_samping_hotel();
line_gedung_depan();
line_hotel();
line_1();
line_2();
line_3();
line_4();
line_5();
line_6();

    glPushMatrix();
    glPopMatrix();

    glutSwapBuffers();

}

void idle(){
	if(!mouseDown){
		xrot += 0.3f;
		yrot += 0.4f;
	}
	glutPostRedisplay();
}

void mouse (int button, int state, int x, int y){
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
		mouseDown = true;
		xdiff = x - yrot;
		ydiff = -y + xrot;
	} else {
		mouseDown = false;
	}
}

void mouseMotion(int x, int y){
	if(mouseDown){
		yrot = x - xdiff;
		xrot = y + xdiff;
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glLoadIdentity();
        gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
        glRotatef(xrot, 1.0f, 0.0f, 0.0f);
        glRotatef(yrot, 0.0f, 1.0f, 0.0f);
		glutPostRedisplay();
	}
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
    if (tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(-1000.0, lebar / tinggi, 80.0, 1000.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
//ayo semangat
