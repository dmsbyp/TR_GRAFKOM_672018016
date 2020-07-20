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



void gedung_depan_donny (void)
{
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
    glColor3f(1,1,0.5);
    glVertex3f(-400,  0, -175);
    glVertex3f(-400,  50, -175);
    glVertex3f(-575,  50, -175);
    glVertex3f(-575,  0, -175);
    glEnd();

      //7
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-575,  50, -175);
    glVertex3f(-575,  0, -175);
    glVertex3f(-575,  0, -150);
    glVertex3f(-575,  50, -150);
    glEnd();

     //8
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-575,  0, -150);
    glVertex3f(-575,  50, -150);
    glVertex3f(-625,  50, -175);
     glVertex3f(-625,  0, -175);
    glEnd();

    //9
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-625,  50, -175);
     glVertex3f(-625,  0, -175);
     glVertex3f(-625,  0, -200);
     glVertex3f(-625,  50, -200);
    glEnd();

     //10
    glBegin(GL_QUADS);
   glColor3f(1,1,0.5);
     glVertex3f(-625,  0, -200);
     glVertex3f(-625,  50, -200);
     glVertex3f(-650,  50, -200);
     glVertex3f(-650,  0, -200);
    glEnd();

    //11
    glBegin(GL_QUADS);
   glColor3f(1,1,0.5);
     glVertex3f(-650,  50, -200);
     glVertex3f(-650,  0, -200);
     glVertex3f(-575,  0, -325);
     glVertex3f(-575,  50, -325);
    glEnd();

    //12
    glBegin(GL_QUADS);
   glColor3f(1,1,0.5);
     glVertex3f(-575,  0, -325);
     glVertex3f(-575,  50, -325);
     glVertex3f(-525,  50, -325);
     glVertex3f(-525,  0, -325);
    glEnd();

    //13
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
     glVertex3f(-525,  50, -325);
     glVertex3f(-525,  0, -325);
     glVertex3f(-525,  0, -375);
     glVertex3f(-525,  50, -375);
    glEnd();

    //14
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
     glVertex3f(-525,  0, -375);
     glVertex3f(-525,  50, -375);
     glVertex3f(-550,  50, -375);
     glVertex3f(-550,  0, -375);
    glEnd();

    //15
    glBegin(GL_QUADS);
   glColor3f(1,1,0.5);
     glVertex3f(-550,  50, -375);
     glVertex3f(-550,  0, -375);
     glVertex3f(-550,  0, -400);
     glVertex3f(-550,  50, -400);
    glEnd();

     //16
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
     glVertex3f(-550,  0, -400);
     glVertex3f(-550,  50, -400);
      glVertex3f(-500,  50, -400);
       glVertex3f(-500,  0, -400);
    glEnd();

       //17
  glBegin(GL_POLYGON);
 glColor3f(1,1,0.5);
     glVertex3f(-400,  50, -375);
    glVertex3f(-400,  50, -400);
    glVertex3f(-400,  0, -400);
     glVertex3f(-400,  0, -375);
     glEnd();

       //18
    glBegin(GL_QUADS);
   glColor3f(1,1,0.5);
    glVertex3f(-400,  0, -375);
    glVertex3f(-400,  50, -375);
    glVertex3f(-375,  50, -375);
    glVertex3f(-375,  0, -375);
    glEnd();

     //19
    glBegin(GL_QUADS);
   glColor3f(1,1,0.5);
    glVertex3f(-375,  50, -375);
    glVertex3f(-375,  0, -375);
    glVertex3f(-375,  0, -400);
    glVertex3f(-375,  50, -400);
    glEnd();

     //20
    glBegin(GL_QUADS);
   glColor3f(1,1,0.5);
    glVertex3f(-375,  0, -400);
    glVertex3f(-375,  50, -400);
    glVertex3f(-400,  50, -425);
    glVertex3f(-400,  0, -425);
    glEnd();

     //21
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-400,  50, -425);
    glVertex3f(-400,  0, -425);
    glVertex3f(-400,  0, -525);
    glVertex3f(-400,  50, -525);
    glEnd();

    //22
    glBegin(GL_QUADS);
   glColor3f(1,1,0.5);
    glVertex3f(-400,  0, -525);
    glVertex3f(-400,  50, -525);
    glVertex3f(-325,  50, -800);
    glVertex3f(-325,  0, -800);

    glEnd();


//23
    glBegin(GL_QUADS);
   glColor3f(1,1,0.5);
     glVertex3f(-325,  50, -800);
    glVertex3f(-325,  0, -800);
     glVertex3f(350, 0, -800);
     glVertex3f(350, 50, -800);
    glEnd();



//gedung bulat
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
     glVertex3f(-400,  50, -400);
    glVertex3f(-410,  50, -410);
    glVertex3f(-410,  0, -410);
    glVertex3f(-400,  0, -400);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
   glVertex3f(-410,  50, -410);
    glVertex3f(-430,  50, -415);
    glVertex3f(-430,  0, -415);
     glVertex3f(-410,  0, -410);
    glEnd();


     glBegin(GL_QUADS);
   glColor3f(1,1,0.5);
    glVertex3f(-430,  50, -415);
    glVertex3f(-470,  50, -415);
    glVertex3f(-470,  0, -415);
    glVertex3f(-430,  0, -415);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
       glVertex3f(-470,  50, -415);
    glVertex3f(-490,  50, -410);
    glVertex3f(-490,  0, -410);
    glVertex3f(-470,  0, -415);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-490,  50, -410);
    glVertex3f(-500,  50, -400);
    glVertex3f(-500,  0, -400);
     glVertex3f(-490,  00, -410);
    glEnd();
}

void garis_gedung_depan (void)
{
   //donny
     //5
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-400, 0, -60);
    glVertex3f(-400,  50, -60);
    glVertex3f(-400, 50, -175);
    glVertex3f(-400, 0, -175);
    glEnd();

     //6
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-400,  0, -175);
    glVertex3f(-400,  50, -175);
    glVertex3f(-575,  50, -175);
    glVertex3f(-575,  0, -175);
    glEnd();

      //7
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-575,  50, -175);
    glVertex3f(-575,  0, -175);
    glVertex3f(-575,  0, -150);
    glVertex3f(-575,  50, -150);
    glEnd();

     //8
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-575,  0, -150);
    glVertex3f(-575,  50, -150);
    glVertex3f(-625,  50, -175);
    glVertex3f(-625,  0, -175);
    glEnd();

    //9
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-625,  50, -175);
    glVertex3f(-625,  0, -175);
    glVertex3f(-625,  0, -200);
    glVertex3f(-625,  50, -200);
    glEnd();

     //10
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-625,  0, -200);
    glVertex3f(-625,  50, -200);
    glVertex3f(-650,  50, -200);
    glVertex3f(-650,  0, -200);
    glEnd();

    //11
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-650,  50, -200);
    glVertex3f(-650,  0, -200);
    glVertex3f(-575,  0, -325);
    glVertex3f(-575,  50, -325);
    glEnd();

    //12
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-575,  0, -325);
    glVertex3f(-575,  50, -325);
    glVertex3f(-525,  50, -325);
    glVertex3f(-525,  0, -325);
    glEnd();

    //13
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-525,  50, -325);
    glVertex3f(-525,  0, -325);
    glVertex3f(-525,  0, -375);
    glVertex3f(-525,  50, -375);
    glEnd();

    //14
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-525,  0, -375);
    glVertex3f(-525,  50, -375);
    glVertex3f(-550,  50, -375);
    glVertex3f(-550,  0, -375);
    glEnd();

    //15
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-550,  50, -375);
    glVertex3f(-550,  0, -375);
    glVertex3f(-550,  0, -400);
    glVertex3f(-550,  50, -400);
    glEnd();

     //16
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-550,  0, -400);
    glVertex3f(-550,  50, -400);
    glVertex3f(-500,  50, -400);
    glVertex3f(-500,  0, -400);
    glEnd();

       //17
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-400,  50, -375);
    glVertex3f(-400,  50, -400);
    glVertex3f(-400,  0, -400);
    glVertex3f(-400,  0, -375);
    glEnd();

       //18
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-400,  0, -375);
    glVertex3f(-400,  50, -375);
    glVertex3f(-375,  50, -375);
    glVertex3f(-375,  0, -375);
    glEnd();

     //19
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-375,  50, -375);
    glVertex3f(-375,  0, -375);
    glVertex3f(-375,  0, -400);
    glVertex3f(-375,  50, -400);
    glEnd();

     //20
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-375,  0, -400);
    glVertex3f(-375,  50, -400);
    glVertex3f(-400,  50, -425);
    glVertex3f(-400,  0, -425);
    glEnd();

     //21
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-400,  50, -425);
    glVertex3f(-400,  0, -425);
    glVertex3f(-400,  0, -525);
    glVertex3f(-400,  50, -525);
    glEnd();

    //22
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-400,  0, -525);
    glVertex3f(-400,  50, -525);
    glVertex3f(-325,  50, -800);
    glVertex3f(-325,  0, -800);
    glEnd();


//23
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-325,  50, -800);
    glVertex3f(-325,  0, -800);
    glVertex3f(350, 0, -800);
    glVertex3f(350, 50, -800);
    glEnd();



//gedung bulat
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-400,  50, -400);
    glVertex3f(-410,  50, -410);
    glVertex3f(-410,  0, -410);
    glVertex3f(-400,  0, -400);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-410,  50, -410);
    glVertex3f(-430,  50, -415);
    glVertex3f(-430,  0, -415);
    glVertex3f(-410,  0, -410);
    glEnd();


    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-430,  50, -415);
    glVertex3f(-470,  50, -415);
    glVertex3f(-470,  0, -415);
    glVertex3f(-430,  0, -415);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-470,  50, -415);
    glVertex3f(-490,  50, -410);
    glVertex3f(-490,  0, -410);
    glVertex3f(-470,  0, -415);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-490,  50, -410);
    glVertex3f(-500,  50, -400);
    glVertex3f(-500,  0, -400);
    glVertex3f(-490,  00, -410);
    glEnd();
}

void atap(){

//atap gabungan
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
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
     glVertex3f(-375, 50, -400);
     glVertex3f(-400, 50, -425);
     glVertex3f(-400, 50, -525);

      glVertex3f(-379,  50, -600);
     glVertex3f(350, 50, -600);
     glVertex3f(350, 50, -175);
     glVertex3f(-375,  50, -375);

    glEnd();

    //atap
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
     glVertex3f(-400,  50, -175);
    glVertex3f(-575,  50, -175);
     glVertex3f(-625, 50, -175);
     glVertex3f(-625, 50, -200);
     glVertex3f(-650,  50, -200);
    glVertex3f(-575,  50, -325);
     glVertex3f(-400, 50, -325);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0,0,0);
    glVertex3f(-575,  50, -175);
    glVertex3f(-575,  50, -150);
     glVertex3f(-625, 50, -175);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0,0,0);
     glVertex3f(-500,  50, -375);
    glVertex3f(-500,  50, -400);
     glVertex3f(-550, 50, -400);
     glVertex3f(-550, 50, -375);

     glVertex3f(-525,  50, -375);
    glVertex3f(-525,  50, -325);
     glVertex3f(-400, 50, -325);
     glVertex3f(-400, 50, -375);
    glEnd();

//atap gedung bulat
  glBegin(GL_POLYGON);
  glColor3f(0,0,0);
     glVertex3f(-400,  50, -375);
    glVertex3f(-400,  50, -400);
    glVertex3f(-500,  50, -400);
     glVertex3f(-500, 50, -375);
    glEnd();

      glBegin(GL_POLYGON);
    glColor3f(0,0,0);
     glVertex3f(-400,  50, -400);
    glVertex3f(-410,  50, -410);
    glVertex3f(-430,  50, -415);
    glVertex3f(-470,  50, -415);
    glVertex3f(-490,  50, -410);
    glVertex3f(-500,  50, -400);

    glEnd();


}

void jendela (){

    //6
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-565,  40, -174);
    glVertex3f(-570,  40, -174);
    glVertex3f(-570,  45, -174);
    glVertex3f(-565,  45, -174);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-565,  25, -174);
    glVertex3f(-570,  25, -174);
    glVertex3f(-570,  35, -174);
    glVertex3f(-565,  35, -174);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-565,  10, -174);
    glVertex3f(-570,  10, -174);
    glVertex3f(-570,  20, -174);
    glVertex3f(-565,  20, -174);
    glEnd();


     glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-564,  40, -174);
    glVertex3f(-559,  40, -174);
    glVertex3f(-559,  45, -174);
    glVertex3f(-564,  45, -174);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-564,  25, -174);
    glVertex3f(-559,  25, -174);
    glVertex3f(-559,  35, -174);
    glVertex3f(-564,  35, -174);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-564,  10, -174);
    glVertex3f(-559,  10, -174);
    glVertex3f(-559,  20, -174);
    glVertex3f(-564,  20, -174);
    glEnd();


     glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-553,  40, -174);
    glVertex3f(-558,  40, -174);
    glVertex3f(-558,  45, -174);
    glVertex3f(-553,  45, -174);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-553,  25, -174);
    glVertex3f(-558,  25, -174);
    glVertex3f(-558,  35, -174);
    glVertex3f(-553,  35, -174);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-553,  10, -174);
    glVertex3f(-558,  10, -174);
    glVertex3f(-558,  20, -174);
    glVertex3f(-553,  20, -174);
    glEnd();


     glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-552,  40, -174);
    glVertex3f(-547,  40, -174);
    glVertex3f(-547,  45, -174);
    glVertex3f(-552,  45, -174);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-552,  25, -174);
    glVertex3f(-547,  25, -174);
    glVertex3f(-547,  35, -174);
    glVertex3f(-552,  35, -174);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-552,  10, -174);
    glVertex3f(-547,  10, -174);
    glVertex3f(-547,  20, -174);
    glVertex3f(-552,  20, -174);
    glEnd();


     //7
     glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-574,  40, -165);
    glVertex3f(-574,  40, -170);
    glVertex3f(-574,  45, -170);
    glVertex3f(-574,  45, -165);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-574,  25, -165);
    glVertex3f(-574,  25, -170);
    glVertex3f(-574,  35, -170);
    glVertex3f(-574,  35, -165);
    glEnd();



      glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-574,  40, -164);
    glVertex3f(-574,  40, -159);
    glVertex3f(-574,  45, -159);
    glVertex3f(-574,  45, -164);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-574,  25, -164);
    glVertex3f(-574,  25, -159);
    glVertex3f(-574,  35, -159);
    glVertex3f(-574,  35, -164);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-574,  40, -158);
    glVertex3f(-574,  40, -153);
    glVertex3f(-574,  45, -153);
    glVertex3f(-574,  45, -158);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-574,  25, -158);
    glVertex3f(-574,  25, -153);
    glVertex3f(-574,  35, -153);
    glVertex3f(-574,  35, -158);
    glEnd();

  //15
    glBegin(GL_QUADS);
    glColor3f(0,1,0.5);
     glVertex3f(-551,  40, -380);
     glVertex3f(-551,  10, -380);
     glVertex3f(-551,  10, -395);
     glVertex3f(-551,  40, -395);
    glEnd();

 //16
    glBegin(GL_QUADS);
    glColor3f(0.5,0,1);
     glVertex3f(-540,  10, -400);
     glVertex3f(-540,  40, -400);
      glVertex3f(-510,  40, -400);
       glVertex3f(-510,  10, -400);
    glEnd();







	 //jendela theovan
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(484,  60, -139);
     glVertex3f(484,  100, -139);
     glVertex3f(474,  100, -139);
      glVertex3f(474,  60, -139);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(484,  105, -139);
     glVertex3f(484,  145, -139);
     glVertex3f(474,  145, -139);
      glVertex3f(474,  105, -139);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(484,  150, -139);
     glVertex3f(484,  190, -139);
     glVertex3f(474,  190, -139);
     glVertex3f(474,  150, -139);
    glEnd();


     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(494,  60, -139);
     glVertex3f(494,  100, -139);
     glVertex3f(504,  100, -139);
      glVertex3f(504,  60, -139);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(494,  105, -139);
     glVertex3f(494,  145, -139);
     glVertex3f(504,  145, -139);
      glVertex3f(504,  105, -139);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(494,  150, -139);
     glVertex3f(494,  190, -139);
     glVertex3f(504,  190, -139);
     glVertex3f(504,  150, -139);
    glEnd();


     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(524,  60, -139);
     glVertex3f(524,  100, -139);
     glVertex3f(514,  100, -139);
      glVertex3f(514,  60, -139);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(524,  105, -139);
     glVertex3f(524,  145, -139);
     glVertex3f(514,  145, -139);
      glVertex3f(514,  105, -139);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(524,  150, -139);
     glVertex3f(524,  190, -139);
     glVertex3f(514,  190, -139);
     glVertex3f(514,  150, -139);
    glEnd();


glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(534,  60, -139);
     glVertex3f(534,  100, -139);
     glVertex3f(544,  100, -139);
      glVertex3f(544,  60, -139);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(534,  105, -139);
     glVertex3f(534,  145, -139);
     glVertex3f(544,  145, -139);
      glVertex3f(544,  105, -139);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(534,  150, -139);
     glVertex3f(534,  190, -139);
     glVertex3f(544,  190, -139);
     glVertex3f(544,  150, -139);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(554,  60, -139);
     glVertex3f(554,  100, -139);
     glVertex3f(564,  100, -139);
      glVertex3f(564,  60, -139);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(554,  105, -139);
     glVertex3f(554,  145, -139);
     glVertex3f(564,  145, -139);
      glVertex3f(564,  105, -139);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(554,  150, -139);
     glVertex3f(554,  190, -139);
     glVertex3f(564,  190, -139);
     glVertex3f(564,  150, -139);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(574,  60, -139);
     glVertex3f(574,  100, -139);
     glVertex3f(584,  100, -139);
      glVertex3f(584,  60, -139);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(574,  105, -139);
     glVertex3f(574,  145, -139);
     glVertex3f(584,  145, -139);
      glVertex3f(584,  105, -139);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(574,  150, -139);
     glVertex3f(574,  190, -139);
     glVertex3f(584,  190, -139);
     glVertex3f(584,  150, -139);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(594,  60, -139);
     glVertex3f(594,  100, -139);
     glVertex3f(604,  100, -139);
      glVertex3f(604,  60, -139);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(594,  105, -139);
     glVertex3f(594,  145, -139);
     glVertex3f(604,  145, -139);
      glVertex3f(604,  105, -139);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(594,  150, -139);
     glVertex3f(594,  190, -139);
     glVertex3f(604,  190, -139);
     glVertex3f(604,  150, -139);
    glEnd();


    //jendela gedung 2

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(270,  60, -79);
     glVertex3f(270,  70, -79);
     glVertex3f(280,  70, -79);
     glVertex3f(280,  60, -79);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(270,  80, -79);
     glVertex3f(270,  90, -79);
     glVertex3f(280,  90, -79);
     glVertex3f(280,  80, -79);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(270,  100, -79);
     glVertex3f(270,  110, -79);
     glVertex3f(280,  110, -79);
     glVertex3f(280,  100, -79);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(270,  120, -79);
     glVertex3f(270,  130, -79);
     glVertex3f(280,  130, -79);
     glVertex3f(280,  120, -79);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(270,  140, -79);
     glVertex3f(270,  150, -79);
     glVertex3f(280,  150, -79);
     glVertex3f(280,  140, -79);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(270,  160, -79);
     glVertex3f(270,  170, -79);
     glVertex3f(280,  170, -79);
     glVertex3f(280,  160, -79);
 glEnd();

   glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(270,  180, -79);
     glVertex3f(270,  190, -79);
     glVertex3f(280,  190, -79);
     glVertex3f(280,  180, -79);
    glEnd();




      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(290,  60, -79);
     glVertex3f(290,  70, -79);
     glVertex3f(300,  70, -79);
     glVertex3f(300,  60, -79);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(290,  80, -79);
     glVertex3f(290,  90, -79);
     glVertex3f(300,  90, -79);
     glVertex3f(300,  80, -79);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(290,  100, -79);
     glVertex3f(290,  110, -79);
     glVertex3f(300,  110, -79);
     glVertex3f(300,  100, -79);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(290,  120, -79);
     glVertex3f(290,  130, -79);
     glVertex3f(300,  130, -79);
     glVertex3f(300,  120, -79);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(290,  140, -79);
     glVertex3f(290,  150, -79);
     glVertex3f(300,  150, -79);
     glVertex3f(300,  140, -79);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(290,  160, -79);
     glVertex3f(290,  170, -79);
     glVertex3f(300,  170, -79);
     glVertex3f(300,  160, -79);
 glEnd();

   glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(290,  180, -79);
     glVertex3f(290,  190, -79);
     glVertex3f(300,  190, -79);
     glVertex3f(300,  180, -79);
    glEnd();





      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(310,  60, -79);
     glVertex3f(310,  70, -79);
     glVertex3f(320,  70, -79);
     glVertex3f(320,  60, -79);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(310,  80, -79);
     glVertex3f(310,  90, -79);
     glVertex3f(320,  90, -79);
     glVertex3f(320,  80, -79);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(310,  100, -79);
     glVertex3f(310,  110, -79);
     glVertex3f(320,  110, -79);
     glVertex3f(320,  100, -79);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(310,  120, -79);
     glVertex3f(310,  130, -79);
     glVertex3f(320,  130, -79);
     glVertex3f(320,  120, -79);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(310,  140, -79);
     glVertex3f(310,  150, -79);
     glVertex3f(320,  150, -79);
     glVertex3f(320,  140, -79);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(310,  160, -79);
     glVertex3f(310,  170, -79);
     glVertex3f(320,  170, -79);
     glVertex3f(320,  160, -79);
 glEnd();

   glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(310,  180, -79);
     glVertex3f(310,  190, -79);
     glVertex3f(320,  190, -79);
     glVertex3f(320,  180, -79);
    glEnd();




     //jendela gedung 3

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(340,  110, -59);
     glVertex3f(340,  120, -59);
     glVertex3f(350,  120, -59);
     glVertex3f(350,  110, -59);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(340,  140, -59);
     glVertex3f(340,  130, -59);
     glVertex3f(350,  130, -59);
     glVertex3f(350,  140, -59);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(340,  150, -59);
     glVertex3f(340,  160, -59);
     glVertex3f(350,  160, -59);
     glVertex3f(350,  150, -59);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(340,  170, -59);
     glVertex3f(340,  180, -59);
     glVertex3f(350,  180, -59);
     glVertex3f(350,  170, -59);
    glEnd();



     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(360,  110, -59);
     glVertex3f(360,  120, -59);
     glVertex3f(370,  120, -59);
     glVertex3f(370,  110, -59);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(360,  140, -59);
     glVertex3f(360,  130, -59);
     glVertex3f(370,  130, -59);
     glVertex3f(370,  140, -59);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(360,  150, -59);
     glVertex3f(360,  160, -59);
     glVertex3f(370,  160, -59);
     glVertex3f(370,  150, -59);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(360,  170, -59);
     glVertex3f(360,  180, -59);
     glVertex3f(370,  180, -59);
     glVertex3f(370,  170, -59);
    glEnd();




     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(360,  110, -59);
     glVertex3f(360,  120, -59);
     glVertex3f(370,  120, -59);
     glVertex3f(370,  110, -59);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(360,  140, -59);
     glVertex3f(360,  130, -59);
     glVertex3f(370,  130, -59);
     glVertex3f(370,  140, -59);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(360,  150, -59);
     glVertex3f(360,  160, -59);
     glVertex3f(370,  160, -59);
     glVertex3f(370,  150, -59);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(360,  170, -59);
     glVertex3f(360,  180, -59);
     glVertex3f(370,  180, -59);
     glVertex3f(370,  170, -59);
    glEnd();






     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(380,  110, -59);
     glVertex3f(380,  120, -59);
     glVertex3f(390,  120, -59);
     glVertex3f(390,  110, -59);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(380,  140, -59);
     glVertex3f(380,  130, -59);
     glVertex3f(390,  130, -59);
     glVertex3f(390,  140, -59);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(380,  150, -59);
     glVertex3f(380,  160, -59);
     glVertex3f(390,  160, -59);
     glVertex3f(390,  150, -59);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(380,  170, -59);
     glVertex3f(380,  180, -59);
     glVertex3f(390,  180, -59);
     glVertex3f(390,  170, -59);
    glEnd();





     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(400,  110, -59);
     glVertex3f(400,  120, -59);
     glVertex3f(410,  120, -59);
     glVertex3f(410,  110, -59);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(400,  140, -59);
     glVertex3f(400,  130, -59);
     glVertex3f(410,  130, -59);
     glVertex3f(410,  140, -59);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(400,  150, -59);
     glVertex3f(400,  160, -59);
     glVertex3f(410,  160, -59);
     glVertex3f(410,  150, -59);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(400,  170, -59);
     glVertex3f(400,  180, -59);
     glVertex3f(410,  180, -59);
     glVertex3f(410,  170, -59);
    glEnd();



     //jendela gedung 4

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(430,  110, -59);
     glVertex3f(430,  120, -59);
     glVertex3f(440,  120, -59);
     glVertex3f(440,  110, -59);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(430,  130, -59);
     glVertex3f(430,  140, -59);
     glVertex3f(440,  140, -59);
     glVertex3f(440,  130, -59);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(430,  150, -59);
     glVertex3f(430,  160, -59);
     glVertex3f(440,  160, -59);
     glVertex3f(440,  150, -59);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(430,  170, -59);
     glVertex3f(430,  180, -59);
     glVertex3f(440,  180, -59);
     glVertex3f(440,  170, -59);
    glEnd();



     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(430,  190, -59);
     glVertex3f(430,  200, -59);
     glVertex3f(440,  200, -59);
     glVertex3f(440,  190, -59);
    glEnd();

        glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(430,  210, -59);
     glVertex3f(430,  220, -59);
     glVertex3f(440,  220, -59);
     glVertex3f(440,  210, -59);
    glEnd();

       glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(430,  230, -59);
     glVertex3f(430,  240, -59);
     glVertex3f(440,  240, -59);
     glVertex3f(440,  230, -59);
    glEnd();

       glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(430,  250, -59);
     glVertex3f(430,  260, -59);
     glVertex3f(440,  260, -59);
     glVertex3f(440,  250, -59);
    glEnd();

       glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(430,  270, -59);
     glVertex3f(430,  280, -59);
     glVertex3f(440,  280, -59);
     glVertex3f(440,  270, -59);
    glEnd();





     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(450,  110, -59);
     glVertex3f(450,  120, -59);
     glVertex3f(460,  120, -59);
     glVertex3f(460,  110, -59);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(450,  130, -59);
     glVertex3f(450,  140, -59);
     glVertex3f(460,  140, -59);
     glVertex3f(460,  130, -59);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(450,  150, -59);
     glVertex3f(450,  160, -59);
     glVertex3f(460,  160, -59);
     glVertex3f(460,  150, -59);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(450,  170, -59);
     glVertex3f(450,  180, -59);
     glVertex3f(460,  180, -59);
     glVertex3f(460,  170, -59);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(450,  190, -59);
     glVertex3f(450,  200, -59);
     glVertex3f(460,  200, -59);
     glVertex3f(460,  190, -59);
    glEnd();

        glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(450,  210, -59);
     glVertex3f(450,  220, -59);
     glVertex3f(460,  220, -59);
     glVertex3f(460,  210, -59);
    glEnd();

       glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(450,  230, -59);
     glVertex3f(450,  240, -59);
     glVertex3f(460,  240, -59);
     glVertex3f(460,  230, -59);
    glEnd();

       glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(450,  250, -59);
     glVertex3f(450,  260, -59);
     glVertex3f(460,  260, -59);
     glVertex3f(460,  250, -59);
    glEnd();

       glBegin(GL_QUADS);
    glColor3f(1,1,1);
     glVertex3f(450,  270, -59);
     glVertex3f(450,  280, -59);
     glVertex3f(460,  280, -59);
     glVertex3f(460,  270, -59);
    glEnd();






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

gedung_depan_donny();
garis_gedung_depan();
atap();
jendela();

gedung_depan();
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
