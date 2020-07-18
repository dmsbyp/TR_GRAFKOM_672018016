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
    glClearColor(0.5, 0.5, 0.5, 0.5);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);
}


void gedung_samping_hotel ()
{
   //1
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.8, 0.4);
    glVertex3f(200.0, 50.0, -90.0);
    glVertex3f(180.0, 50.0, -80.0);
    glVertex3f(180.0, 100.0, -80.0);
    glVertex3f(200.0, 100.0, -90.0);
    glEnd();
    //atap 1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(200.0, 90.0, -150.0);
    glVertex3f(180.0, 90.0, -150.0);
    glVertex3f(180.0, 90.0, -80.0);
    glVertex3f(200.0, 90.0, -90.0);
    glEnd();
    //2
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.6, 1.0);
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
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(180.0, 90.0, -150.0);
    glVertex3f(40.0, 90.0, -150.0);
    glVertex3f(40.0, 90.0, -80.0);
    glVertex3f(180.0, 90.0, -80.0);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.6, 1.0);
    glVertex3f(40.0, 50.0, -80.0);
    glVertex3f(40.0, 50.0, -150.0);
    glVertex3f(40.0, 100.0, -150.0);
    glVertex3f(40.0, 100.0, -80.0);
    glEnd();
    //4
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.6, 1.0);
    glVertex3f(200.0, 50.0, -150.0);
    glVertex3f(40.0, 50.0, -150.0);
    glVertex3f(40.0, 100.0, -150.0);
    glVertex3f(200.0, 100.0, -150.0);
    glEnd();
    //5
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.6, 1.0);
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
    //1 line
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(200.0, 50.0, -60.0);
    glVertex3f(150.0, 50.0, -50.0);

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
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(140.0, 30.0, -60.0);
    glVertex3f(50.0, 30.0, -60.0);
    glVertex3f(50.0, 30.0, -80.0);
    glVertex3f(140.0, 30.0, -80.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
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
    //10kubah
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(20.0, 80.0, -60.0);
    glVertex3f(20.0, 80.0, -30.0);
    glVertex3f(20.0, 0.0, -30.0);
    glVertex3f(20.0, 0.0, -60.0);
    glEnd();


    //11 kubah
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(20.0, 80.0, -30.0);
    glVertex3f(10.0, 80.0, -10.0);
    glVertex3f(10.0, 0.0, -10.0);
    glVertex3f(20.0, 0.0, -30.0);
    glEnd();


    //12 kubah
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(10.0, 80.0, -10.0);
    glVertex3f(-20.0, 80.0, -10.0);
    glVertex3f(-20.0, 0.0, -10.0);
    glVertex3f(10.0, 0.0, -10.0);
    glEnd();

    //13 kubah
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(-20.0, 80.0, -10.0);
    glVertex3f(-25.0, 80.0, -15.0);
    glVertex3f(-25.0, 0.0, -15.0);
    glVertex3f(-20.0, 0.0, -10.0);
    glEnd();
    //14 kubah
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(-25.0, 110.0, -15.0);
    glVertex3f(-40.0, 110.0, 10.0);
    glVertex3f(-40.0, 0.0, 10.0);
    glVertex3f(-25.0, 0.0, -15.0);
    glEnd();
    //15 kubah
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(-40.0, 110.0, 10.0);
    glVertex3f(-90.0, 110.0, 10.0);
    glVertex3f(-90.0, 0.0, 10.0);
    glVertex3f(-40.0, 0.0, 10.0);
    glEnd();
    //16 kubah
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(-105.0, 110.0, -15.0);
    glVertex3f(-90.0, 110.0, 10.0);
    glVertex3f(-90.0, 0.0, 10.0);
    glVertex3f(-105.0, 0.0, -15.0);
    glEnd();
    //17 kubah
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(-105.0, 80.0, -15.0);
    glVertex3f(-110.0, 80.0, -10.0);
    glVertex3f(-110.0, 0.0, -10.0);
    glVertex3f(-105.0, 0.0, -15.0);
    glEnd();
    //18 kubah
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(-110.0, 80.0, -10.0);
    glVertex3f(-140.0, 80.0, -10.0);
    glVertex3f(-140.0, 0.0, -10.0);
    glVertex3f(-110.0, 0.0, -10.0);
    glEnd();
    //19 kubah
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(-140.0, 80.0, -10.0);
    glVertex3f(-160.0, 80.0, -30.0);
    glVertex3f(-160.0, 0.0, -30.0);
    glVertex3f(-140.0, 0.0, -10.0);
    glEnd();
    //20kubah
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(-160.0, 80.0, -60.0);
    glVertex3f(-160.0, 80.0, -30.0);
    glVertex3f(-160.0, 0.0, -30.0);
    glVertex3f(-160.0, 0.0, -60.0);
    glEnd();
    //21 tembok panjang
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(-160.0, 50.0, -60.0);
    glVertex3f(-400.0, 50.0, -60.0);
    glVertex3f(-400.0, 0.0, -60.0);
    glVertex3f(-160.0, 0.0, -60.0);
    glEnd();

}
void gedung_kiri(){
  //donny
     //5
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-400, 0, -50);
    glVertex3f(-400,  50, -50);
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
    glColor3f(1, 0, 0);
    glVertex3f(200, 0, -60);
    glVertex3f(200, 50, -60);
    glVertex3f(300, 50, -60);
    glVertex3f(300, 0, -60);
    glEnd();


    //2
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(300, 0, -60);
    glVertex3f(300, 50, -60);
    glVertex3f(300, 50, -20);
    glVertex3f(300, 0, -20);
    glEnd();

    //3 tengah
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex3f(300, 0, -20);
    glVertex3f(300, 50, -20);
    glVertex3f(500, 50, -20);
    glVertex3f(500, 0, -20);
    glEnd();

    //4
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(500, 0, -20);
    glVertex3f(500, 50, -20);
    glVertex3f(500, 50, -60);
    glVertex3f(500, 0, -60);
    glEnd();

    //5
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(500, 0, -60);
    glVertex3f(500, 50, -60);
    glVertex3f(520, 50, -60);
    glVertex3f(520, 0, -60);
    glEnd();

    //6
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(520, 0, -60);
    glVertex3f(520, 50, -60);
    glVertex3f(520, 50, -40);
    glVertex3f(520, 0, -40);
    glEnd();

    //7
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(520, 0, -40);
    glVertex3f(520, 50, -40);
    glVertex3f(550, 50, -40);
    glVertex3f(550, 0, -40);
    glEnd();

    //8
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(550, 0, -40);
    glVertex3f(550, 50, -40);
    glVertex3f(550, 50, -60);
    glVertex3f(550, 0, -60);
    glEnd();

    //9
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(550, 0, -60);
    glVertex3f(550, 50, -60);
    glVertex3f(570, 50, -60);
    glVertex3f(570, 0, -60);
    glEnd();


    //10
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(570, 0, -60);
    glVertex3f(570, 50, -60);
    glVertex3f(570, 50, -30);
    glVertex3f(570, 0, -30);
    glEnd();

    //11
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(570, 0, -30);
    glVertex3f(570, 50, -30);
    glVertex3f(630, 50, -30);
    glVertex3f(630, 0, -30);
    glEnd();

    //12
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(630, 0, -30);
    glVertex3f(630, 50, -30);
    glVertex3f(630, 50, -60);
    glVertex3f(630, 0, -60);
    glEnd();

    //13
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(630, 0, -60);
    glVertex3f(630, 50, -60);
    glVertex3f(650, 50, -60);
    glVertex3f(650, 0, -60);
    glEnd();

    //14
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(650, 0, -60);
    glVertex3f(650, 50, -60);
    glVertex3f(650, 50, -150);
    glVertex3f(650, 0, -150);
    glEnd();

    /*15
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(650, 0, -150);
    glVertex3f(650, 50, -150);
    glVertex3f(680, 50, -150);
    glVertex3f(680, 0, -150);
    glEnd();

    //16
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex3f(680, 0, -150);
    glVertex3f(680, 50, -150);
    glVertex3f(680, 50, -200);
    glVertex3f(680, 0, -200);
    glEnd();

    //17
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(650, 0, -200);
    glVertex3f(650, 50, -200);
    glVertex3f(680, 50, -200);
    glVertex3f(680, 0, -200);
    glEnd();

    /*18
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 1);
    glVertex3f(570, 0, -200);
    glVertex3f(570, 50, -200);
    glVertex3f(250, 50, -1000);
    glVertex3f(250, 0, -1000);
    glEnd();*/
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
    glColor3f(0, 1, 0);
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
    glColor3f(0, 1, 0);
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
    glColor3f(1, 1, 0);
    glVertex3f(200, 200, -120);
    glVertex3f(200, 200, -100);
    glVertex3f(200, 51, -100);
    glVertex3f(200, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(0, 1, 1);
    glVertex3f(200, 51, -100);
    glVertex3f(220, 51, -80);
    glVertex3f(220, 200, -80);
    glVertex3f(200, 200, -100);
    glEnd();

    glBegin(GL_POLYGON); //3
    glColor3f(1, 1, 0);
    glVertex3f(220, 200, -80);
    glVertex3f(240, 200, -80);
    glVertex3f(240, 51, -80);
    glVertex3f(220, 51, -80);
    glEnd();

    glBegin(GL_POLYGON); //4
    glColor3f(0, 1, 1);
    glVertex3f(240, 51, -80);
    glVertex3f(260, 51, -100);
    glVertex3f(260, 200, -100);
    glVertex3f(240, 200, -80);
    glEnd();

    glBegin(GL_POLYGON); //5
    glColor3f(1, 1, 0);
    glVertex3f(260, 200, -100);
    glVertex3f(260, 200, -120);
    glVertex3f(260, 51, -120);
    glVertex3f(260, 51, -100);
    glEnd();

    glBegin(GL_POLYGON); //6
    glColor3f(0, 1, 1);
    glVertex3f(260, 200, -120);
    glVertex3f(240, 200, -140);
    glVertex3f(240, 51, -140);
    glVertex3f(260, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //7
    glColor3f(1, 1, 0);
    glVertex3f(240, 200, -140);
    glVertex3f(220, 200, -140);
    glVertex3f(220, 51, -140);
    glVertex3f(240, 51, -140);
    glEnd();

    glBegin(GL_POLYGON); //8
    glColor3f(0, 1, 1);
    glVertex3f(220, 51, -140);
    glVertex3f(200, 51, -120);
    glVertex3f(200, 200, -120);
    glVertex3f(220, 200, -140);
    glEnd();
}

void gedunghotel2(void)
{
    glBegin(GL_POLYGON); //1
    glColor3f(1, 0, 1);
    glVertex3f(261, 200, -80);
    glVertex3f(261, 200, -150);
    glVertex3f(261, 51, -150);
    glVertex3f(261, 51, -80);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(0, 0, 1);
    glVertex3f(261, 200, -150);
    glVertex3f(350, 200, -150);
    glVertex3f(350, 51, -150);
    glVertex3f(261, 51, -150);
    glEnd();

    glBegin(GL_POLYGON); //3
    glColor3f(1, 0, 1);
    glVertex3f(350, 200, -120);
    glVertex3f(350, 200, -150);
    glVertex3f(350, 51, -150);
    glVertex3f(350, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //4
    glColor3f(0, 0, 1);
    glVertex3f(330, 200, -120);
    glVertex3f(350, 200, -120);
    glVertex3f(350, 51, -120);
    glVertex3f(330, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //5
    glColor3f(1, 0, 1);
    glVertex3f(330, 200, -120);
    glVertex3f(330, 200, -80);
    glVertex3f(330, 51, -80);
    glVertex3f(330, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //6
    glColor3f(0, 0, 1);
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
    glColor3f(0, 1, 1);
    glVertex3f(331, 100, -40);
    glVertex3f(380, 100, -40);
    glVertex3f(380, 51, -40);
    glVertex3f(331, 51, -40);
    glEnd();

    glBegin(GL_POLYGON); //atas
    glColor3f(0, 0, 1);
    glVertex3f(331, 100, -40);
    glVertex3f(380, 100, -40);
    glVertex3f(380, 100, -60);
    glVertex3f(331, 100, -60);
    glEnd();

    glBegin(GL_POLYGON); //kiri
    glColor3f(1, 0, 0);
    glVertex3f(331, 100, -40);
    glVertex3f(331, 51, -40);
    glVertex3f(331, 51, -60);
    glVertex3f(331, 100, -60);
    glEnd();

    glBegin(GL_POLYGON); //kanan
    glColor3f(1, 0, 0);
    glVertex3f(380, 100, -40);
    glVertex3f(380, 51, -40);
    glVertex3f(380, 51, -60);
    glVertex3f(380, 100, -60);
    glEnd();

    //gedung inti
    glBegin(GL_POLYGON); //1
    glColor3f(0, 1, 0);
    glVertex3f(331, 200, -120);
    glVertex3f(331, 200, -60);
    glVertex3f(331, 51, -60);
    glVertex3f(331, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(1, 1, 0);
    glVertex3f(331, 200, -120);
    glVertex3f(420, 200, -120);
    glVertex3f(420, 51, -120);
    glVertex3f(331, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //3
    glColor3f(0, 1, 0);
    glVertex3f(420, 200, -120);
    glVertex3f(420, 200, -60);
    glVertex3f(420, 51, -60);
    glVertex3f(420, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //4
    glColor3f(1, 1, 0);
    glVertex3f(331, 200, -60);
    glVertex3f(420, 200, -60);
    glVertex3f(420, 51, -60);
    glVertex3f(331, 51, -60);
    glEnd();

    //gedungtinggi
    glBegin(GL_POLYGON); //1
    glColor3f(0, 1, 1);
    glVertex3f(421, 300, -120);
    glVertex3f(421, 300, -60);
    glVertex3f(421, 51, -60);
    glVertex3f(421, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(1, 0, 1);
    glVertex3f(421, 300, -120);
    glVertex3f(470, 300, -120);
    glVertex3f(470, 51, -120);
    glVertex3f(421, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //3
    glColor3f(0, 1, 1);
    glVertex3f(470, 300, -120);
    glVertex3f(470, 300, -60);
    glVertex3f(470, 51, -60);
    glVertex3f(470, 51, -120);
    glEnd();

    glBegin(GL_POLYGON); //4
    glColor3f(1, 0, 1);
    glVertex3f(421, 300, -60);
    glVertex3f(470, 300, -60);
    glVertex3f(470, 51, -60);
    glVertex3f(421, 51, -60);
    glEnd();

    //gedung kecil depan 2
    glBegin(GL_POLYGON); //depan
    glColor3f(0, 1, 1);
    glVertex3f(450, 100, -40);
    glVertex3f(480, 100, -40);
    glVertex3f(480, 51, -40);
    glVertex3f(450, 51, -40);
    glEnd();

    glBegin(GL_POLYGON); //belakang
    glColor3f(1, 0, 1);
    glVertex3f(470, 100, -90);
    glVertex3f(480, 100, -90);
    glVertex3f(480, 51, -90);
    glVertex3f(470, 51, -90);
    glEnd();

    glBegin(GL_POLYGON); //atas 1
    glColor3f(0, 0, 1);
    glVertex3f(450, 100, -40);
    glVertex3f(480, 100, -40);
    glVertex3f(480, 100, -60);
    glVertex3f(450, 100, -60);
    glEnd();

    glBegin(GL_POLYGON); //atas 2
    glColor3f(0, 0, 1);
    glVertex3f(470, 100, -40);
    glVertex3f(480, 100, -40);
    glVertex3f(480, 100, -90);
    glVertex3f(470, 100, -90);
    glEnd();

    glBegin(GL_POLYGON); //kiri
    glColor3f(1, 1, 0);
    glVertex3f(450, 100, -40);
    glVertex3f(450, 51, -40);
    glVertex3f(450, 51, -60);
    glVertex3f(450, 100, -60);
    glEnd();

    glBegin(GL_POLYGON); //kanan
    glColor3f(1, 1, 0);
    glVertex3f(480, 100, -40);
    glVertex3f(480, 51, -40);
    glVertex3f(480, 51, -90);
    glVertex3f(480, 100, -90);
    glEnd();

    //gedung setengah tinggi
    glBegin(GL_POLYGON); //1
    glColor3f(0, 0, 1);
    glVertex3f(421, 250, -180);
    glVertex3f(421, 250, -121);
    glVertex3f(421, 51, -121);
    glVertex3f(421, 51, -180);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(0, 0, 1);
    glVertex3f(421, 250, -180);
    glVertex3f(470, 250, -180);
    glVertex3f(470, 51, -180);
    glVertex3f(421, 51, -180);
    glEnd();

    glBegin(GL_POLYGON); //3
    glColor3f(0, 0, 1);
    glVertex3f(470, 250, -180);
    glVertex3f(470, 250, -121);
    glVertex3f(470, 51, -121);
    glVertex3f(470, 51, -180);
    glEnd();

    glBegin(GL_POLYGON); //4
    glColor3f(0, 0, 1);
    glVertex3f(421, 250, -121);
    glVertex3f(470, 250, -121);
    glVertex3f(470, 51, -121);
    glVertex3f(421, 51, -121);
    glEnd();

}
void gedunghotel4(void)
{
    glBegin(GL_POLYGON); //1
    glColor3f(1, 0, 1);
    glVertex3f(471, 200, -200);
    glVertex3f(471, 200, -140);
    glVertex3f(471, 51, -140);
    glVertex3f(471, 51, -200);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(1, 0, 0);
    glVertex3f(471, 200, -200);
    glVertex3f(619, 200, -200);
    glVertex3f(619, 51, -200);
    glVertex3f(471, 51, -200);
    glEnd();

    glBegin(GL_POLYGON); //3
    glColor3f(1, 0, 1);
    glVertex3f(619, 200, -200);
    glVertex3f(619, 200, -140);
    glVertex3f(619, 51, -140);
    glVertex3f(619, 51, -200);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(1, 0, 0);
    glVertex3f(471, 200, -140);
    glVertex3f(619, 200, -140);
    glVertex3f(619, 51, -140);
    glVertex3f(471, 51, -140);
    glEnd();

}

void gedunghotel5(void)
{
    glBegin(GL_POLYGON); //atas
    glColor3f(0, 1, 0);
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
    glColor3f(0, 1, 0);
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
    glColor3f(1, 1, 0);
    glVertex3f(620, 200, -180);
    glVertex3f(620, 200, -160);
    glVertex3f(620, 0, -160);
    glVertex3f(620, 0, -180);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(0, 1, 1);
    glVertex3f(620, 0, -160);
    glVertex3f(640, 0, -140);
    glVertex3f(640, 200, -140);
    glVertex3f(620, 200, -160);
    glEnd();

    glBegin(GL_POLYGON); //3
    glColor3f(1, 1, 0);
    glVertex3f(640, 200, -140);
    glVertex3f(660, 200, -140);
    glVertex3f(660, 0, -140);
    glVertex3f(640, 0, -140);
    glEnd();

    glBegin(GL_POLYGON); //4
    glColor3f(0, 1, 1);
    glVertex3f(660, 0, -140);
    glVertex3f(680, 0, -160);
    glVertex3f(680, 200, -160);
    glVertex3f(660, 200, -140);
    glEnd();

    glBegin(GL_POLYGON); //5
    glColor3f(1, 1, 0);
    glVertex3f(680, 200, -160);
    glVertex3f(680, 200, -180);
    glVertex3f(680, 0, -180);
    glVertex3f(680, 0,  -160);
    glEnd();

    glBegin(GL_POLYGON); //6
    glColor3f(0, 1, 1);
    glVertex3f(680, 200, -180);
    glVertex3f(660, 200, -200);
    glVertex3f(660, 0, -200);
    glVertex3f(680, 0, -180);
    glEnd();

    glBegin(GL_POLYGON); //7
    glColor3f(1, 1, 0);
    glVertex3f(660, 200, -200);
    glVertex3f(640, 200, -200);
    glVertex3f(640, 0, -200);
    glVertex3f(660, 0, -200);
    glEnd();

    glBegin(GL_POLYGON); //8
    glColor3f(0, 1, 1);
    glVertex3f(640, 0, -200);
    glVertex3f(620, 0, -180);
    glVertex3f(620, 200, -180);
    glVertex3f(640, 200, -200);
    glEnd();
}

void gedungbelakang(void)
{
     glBegin(GL_POLYGON); //depan
    glColor3f(0, 1, 0);
    glVertex3f(650, 0, -200);
    glVertex3f(350, 0, -200);
    glVertex3f(350, 50, -200);
    glVertex3f(650, 50, -200);
    glEnd();

    glBegin(GL_POLYGON); //1
    glColor3f(0, 0, 1);
    glVertex3f(650, 0, -200);
    glVertex3f(650, 0, -500);
    glVertex3f(650, 50, -500);
    glVertex3f(650, 50, -200);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(0, 0, 1);
    glVertex3f(350, 0, -200);
    glVertex3f(350, 0, -500);
    glVertex3f(350, 50, -500);
    glVertex3f(350, 50, -200);
    glEnd();

    glBegin(GL_POLYGON); //belakang
    glColor3f(0, 1, 0);
    glVertex3f(650, 0, -500);
    glVertex3f(350, 0, -500);
    glVertex3f(350, 50, -500);
    glVertex3f(650, 50, -500);
    glEnd();

    glBegin(GL_POLYGON); //atas
    glColor3f(1, 1, 0);
    glVertex3f(650, 50, -200);
    glVertex3f(350, 50, -200);
    glVertex3f(350, 50, -500);
    glVertex3f(650, 50, -500);
    glEnd();

    //besar
    glBegin(GL_POLYGON); //depan
    glColor3f(0, 1, 0);
    glVertex3f(650, 0, -500);
    glVertex3f(350, 0, -500);
    glVertex3f(350, 100, -500);
    glVertex3f(650, 100, -500);
    glEnd();

    glBegin(GL_POLYGON); //1
    glColor3f(0, 0, 1);
    glVertex3f(350, 0, -500);
    glVertex3f(350, 0, -600);
    glVertex3f(350, 100, -600);
    glVertex3f(350, 100, -500);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(0, 0, 1);
    glVertex3f(650, 0, -500);
    glVertex3f(650, 0, -600);
    glVertex3f(650, 100, -600);
    glVertex3f(650, 100, -500);
    glEnd();

    glBegin(GL_POLYGON); //belakang
    glColor3f(0, 1, 0);
    glVertex3f(650, 0, -600);
    glVertex3f(350, 0, -600);
    glVertex3f(350, 100, -600);
    glVertex3f(650, 100, -600);
    glEnd();

    glBegin(GL_POLYGON); //atas
    glColor3f(1, 1, 0);
    glVertex3f(650, 100, -500);
    glVertex3f(350, 100, -500);
    glVertex3f(350, 100, -600);
    glVertex3f(650, 100, -600);
    glEnd();

    //kecillagi
    glBegin(GL_POLYGON); //depan
    glColor3f(0, 1, 0);
    glVertex3f(650, 0, -600);
    glVertex3f(350, 0, -600);
    glVertex3f(350, 50, -600);
    glVertex3f(650, 50, -600);
    glEnd();

    glBegin(GL_POLYGON); //1
    glColor3f(0, 0, 1);
    glVertex3f(350, 0, -600);
    glVertex3f(350, 0, -800);
    glVertex3f(350, 50, -800);
    glVertex3f(350, 50, -600);
    glEnd();

    glBegin(GL_POLYGON); //2
    glColor3f(0, 0, 1);
    glVertex3f(650, 0, -600);
    glVertex3f(650, 0, -800);
    glVertex3f(650, 50, -800);
    glVertex3f(650, 50, -600);
    glEnd();

    glBegin(GL_POLYGON); //belakang
    glColor3f(0, 1, 0);
    glVertex3f(650, 0, -800);
    glVertex3f(350, 0, -800);
    glVertex3f(350, 50, -800);
    glVertex3f(650, 50, -800);
    glEnd();

    glBegin(GL_POLYGON); //atas
    glColor3f(1, 1, 0);
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
    glColor3f(1, 0, 0);
    glVertex3f(650, 60, -200);
    glVertex3f(400, 60, -230);
    glVertex3f(380, 60, -260);
    glVertex3f(360, 60, -280);
    glVertex3f(350, 60, -300);
    glVertex3f(350, 101, -500);
    glVertex3f(650, 101, -500);
    glEnd();

     glBegin(GL_POLYGON); //atas 2
    glColor3f(1, 0, 0);
    glVertex3f(650, 101, -500);
    glVertex3f(600, 101, -550);
    glVertex3f(400, 101, -550);
    glVertex3f(350, 101, -500);
    glEnd();

    glBegin(GL_POLYGON); //atas3
    glColor3f(1, 0, 0);
    glVertex3f(600, 101, -550);
    glVertex3f(400, 101, -550);
    glVertex3f(400, 101, -650);
    glVertex3f(600, 101, -650);
    glEnd();

    glBegin(GL_POLYGON); //atas4
    glColor3f(1, 0, 0);
    glVertex3f(400, 101, -650);
    glVertex3f(600, 101, -650);
    glVertex3f(650, 101, -700);
    glVertex3f(350, 101, -700);
    glEnd();

    glBegin(GL_POLYGON); //atas5
    glColor3f(1, 1, 0);
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
    glColor3f(0, 1, 0);
    glVertex3f(350, 101, -800);
    glVertex3f(350, 101, -700);
    glVertex3f(50, 200, -700);
    glVertex3f(50, 200, -800);
    glEnd();

        //atas
        glBegin(GL_POLYGON); //atas 1
    glColor3f(1, 0, 0);
    glVertex3f(650, 101, -200);
    glVertex3f(400, 101, -230);
    glVertex3f(380, 101, -260);
    glVertex3f(360, 101, -280);
    glVertex3f(350, 101, -300);
    glVertex3f(350, 150, -500);
    glVertex3f(650, 150, -500);
    glEnd();

     glBegin(GL_POLYGON); //atas 2
    glColor3f(1, 0, 0);
    glVertex3f(650, 150, -500);
    glVertex3f(600, 150, -550);
    glVertex3f(400, 150, -550);
    glVertex3f(350, 150, -500);
    glEnd();

    glBegin(GL_POLYGON); //atas3
    glColor3f(1, 0, 0);
    glVertex3f(600, 150, -550);
    glVertex3f(400, 150, -550);
    glVertex3f(400, 150, -650);
    glVertex3f(600, 150, -650);
    glEnd();

    glBegin(GL_POLYGON); //atas4
    glColor3f(1, 0, 0);
    glVertex3f(400, 150, -650);
    glVertex3f(600, 150, -650);
    glVertex3f(650, 150, -700);
    glVertex3f(350, 150, -700);
    glEnd();

    glBegin(GL_POLYGON); //atas5
    glColor3f(1, 1, 0);
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
    glColor3f(0, 1, 0);
    glVertex3f(350, 150, -800);
    glVertex3f(350, 150, -700);
    glVertex3f(50, 250, -700);
    glVertex3f(50, 250, -800);
    glEnd();

    //samping
    glBegin(GL_POLYGON); //atas 1
    glColor3f(1, 1, 1);
    glVertex3f(650, 60, -200);
    glVertex3f(400, 60, -230);
	glVertex3f(400, 101, -230);
	glVertex3f(650, 101, -200);
	glEnd();

	glBegin(GL_POLYGON); //2
    glColor3f(1, 1, 1);
	glVertex3f(400, 101, -230);
	glVertex3f(400, 60, -230);
    glVertex3f(380, 60, -260);
	glVertex3f(380, 101, -260);
	glEnd();


	glBegin(GL_POLYGON); //3
    glColor3f(1, 1, 1);
	glVertex3f(380, 60, -260);
	glVertex3f(380, 101, -260);
	glVertex3f(360, 101, -280);
	glVertex3f(360, 60, -280);
	glEnd();

	glBegin(GL_POLYGON); //4
    glColor3f(1, 1, 1);
	glVertex3f(360, 101, -280);
	glVertex3f(360, 60, -280);
    glVertex3f(350, 60, -300);
    glVertex3f(350, 101, -300);
    glEnd();

    glBegin(GL_POLYGON); //5
    glColor3f(1, 0, 1);
    glVertex3f(350, 60, -300);
    glVertex3f(350, 101, -300);
    glVertex3f(350, 150, -500);
    glVertex3f(350, 101, -500);
    glEnd();

     glBegin(GL_POLYGON); //5
    glColor3f(1, 0, 1);
    glVertex3f(650, 60, -200);
    glVertex3f(650, 101, -200);
    glVertex3f(650, 150, -500);
    glVertex3f(650, 101, -500);
    glEnd();

    glBegin(GL_POLYGON); //5
    glColor3f(1, 0, 1);
    glVertex3f(650, 60, -200);
    glVertex3f(650, 101, -200);
    glVertex3f(650, 150, -500);
    glVertex3f(650, 101, -500);
    glEnd();

    glBegin(GL_POLYGON); //6
    glColor3f(1, 1, 1);
	glVertex3f(650, 101, -500);
    glVertex3f(600, 101, -550);
	glVertex3f(600, 150, -550);
	glVertex3f(650, 150, -500);
	glEnd();

	glBegin(GL_POLYGON); //7
    glColor3f(1, 1, 1);
	glVertex3f(400, 101, -550);
    glVertex3f(350, 101, -500);
	glVertex3f(350, 150, -500);
	glVertex3f(400, 150, -550);
	glEnd();

	glBegin(GL_POLYGON); //8
    glColor3f(1, 1, 1);
	glVertex3f(400, 101, -550);
    glVertex3f(400, 101, -650);
	glVertex3f(400, 150, -650);
	glVertex3f(400, 150, -550);
	glEnd();

	glBegin(GL_POLYGON); //9
    glColor3f(1, 1, 1);
	glVertex3f(600, 101, -550);
    glVertex3f(600, 101, -650);
	glVertex3f(600, 150, -650);
	glVertex3f(600, 150, -550);
	glEnd();

	glBegin(GL_POLYGON); //10
    glColor3f(0, 1, 1);
	glVertex3f(600, 101, -650);
   	glVertex3f(650, 101, -700);
	glVertex3f(650, 150, -700);
	glVertex3f(600, 150, -650);
	glEnd();

	glBegin(GL_POLYGON); //11
    glColor3f(0, 1, 1);
	glVertex3f(400, 101, -650);
   	glVertex3f(350, 101, -700);
	glVertex3f(350, 150, -700);
	glVertex3f(400, 150, -650);
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
gedunghotel1();
gedunghotel2();
gedunghotel3();
gedunghotel4();
gedunghotel5();
gedungatas();
gedungbelakang();
gedung_samping_hotel();

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
    gluPerspective(500.0, lebar / tinggi, 50.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
