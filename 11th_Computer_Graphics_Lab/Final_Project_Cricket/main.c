
#include <windows.h>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

int left = 0, right = 0;
int tx=0, ty=0;

void display(void){

     glClear(GL_COLOR_BUFFER_BIT);
     glPushMatrix();

    //Green Field
    glColor3f(0.0f, 1.0f, 0.0f);
     glBegin(GL_POLYGON);
         glVertex2i(-600, -320);
         glVertex2i(-600, -150);
         glVertex2i(600, -150);
         glVertex2i(600, -320);
     glEnd();

    //Pitch
     glColor3f(1.0f, 1.0f, 1.0f);
     glBegin(GL_POLYGON);
         glVertex2i(-500, -180);
         glVertex2i(-500, -240);
         glVertex2i(500, -240);
         glVertex2i(500, -180);
     glEnd();

    //Sky
     glColor3f(0.0f, 1.0f, 1.0f);
     glBegin(GL_POLYGON);
         glVertex2i(-600, 320);
         glVertex2i(-600, 210);
         glVertex2i(-460, 260);
         glVertex2i(-360, 280);
         glVertex2i(-260, 265);
         glVertex2i(-160, 270);
         glVertex2i(-60, 240);
         glVertex2i(140, 270);
         glVertex2i(160, 260);
         glVertex2i(200, 290);
         glVertex2i(280, 230);
         glVertex2i(380, 260);
         glVertex2i(480, 245);
         glVertex2i(600, 260);//210
         glVertex2i(600, 320);

     glEnd();

     glColor3f(1.0f, 0.0f, 0.0f);
    // these four points draws outer rectangle which determines window
     glBegin(GL_LINE_LOOP);
         glVertex2i(-600, -320);
         glVertex2i(-600, 320);
         glVertex2i(600, 320);
         glVertex2i(600, -320);
     glEnd();

    // Batsman body
     glBegin(GL_LINES);
        glVertex2i(-460, 0);
        glVertex2i(-460,170);
     glEnd();

    // Batsman Leg
     glBegin(GL_LINES);
        glVertex2i(-460, 0);
        glVertex2i(-400,-120);
     glEnd();

     glBegin(GL_LINES);
        glVertex2i(-400,-120);
        glVertex2i(-420,-200);
     glEnd();

     glBegin(GL_LINES);
        glVertex2i(-460, 0);
        glVertex2i(-490,-240);
     glEnd();

     // Batsman head
     glBegin(GL_LINE_LOOP);
        glVertex2i(-460,170);
        glVertex2i(-470,177);
        glVertex2i(-480,190);
        glVertex2i(-480,200);
        glVertex2i(-475,208);
        glVertex2i(-470,215);
        glVertex2i(-465,218);
        glVertex2i(-460,220);   //middle
        glVertex2i(-455,218);
        glVertex2i(-450,215);
        glVertex2i(-445,208);
        glVertex2i(-440,200);
        glVertex2i(-440,190);
        glVertex2i(-450,177);
     glEnd();

     // Batsman hand1
     glBegin(GL_LINES);
        glVertex2i(-460,120);
        glVertex2i(-500,100);
     glEnd();

     glBegin(GL_LINES);
        glVertex2i(-500,100);
        glVertex2i(-420,40);
     glEnd();

     // Batsman hand2
     glBegin(GL_LINES);
        glVertex2i(-460,120);
        glVertex2i(-420,80);
     glEnd();

     glBegin(GL_LINES);
        glVertex2i(-420,80);
        glVertex2i(-410,40);
     glEnd();

    //The bat body
     glBegin(GL_LINE_LOOP);
        glVertex2i(-240, -200);
        glVertex2i(-250, -200);
        glVertex2i(-415, 10);
        glVertex2i(-378, 20);
        glVertex2i(-230, -150);
        glVertex2i(-228, -170);
     glEnd();

     glBegin(GL_LINE_LOOP);
        glVertex2i(-235, -150);
        glVertex2i(-235, -170);
        glVertex2i(-240, -190);
        glVertex2i(-407, 13);
        glVertex2i(-378, 20);
        glVertex2i(-235, -150);
     glEnd();

     //Bat handle
     glBegin(GL_LINE_LOOP);
         glVertex2i(-410, 30);
         glVertex2i(-440, 60);
         glVertex2i(-430, 60);
         glVertex2i(-400, 30);
      glEnd();

      //Join between bat handle and bat body
      glBegin(GL_LINE_LOOP);
         glVertex2i(-415, 10);
         glVertex2i(-410, 30);
         glVertex2i(-400, 30);
         glVertex2i(-378, 20);
      glEnd();

      glBegin(GL_LINES);
         glVertex2i(-407, 13);
         glVertex2i(-410, 30);
      glEnd();

     // Baller body
     glBegin(GL_LINES);
        glVertex2i(380, 0);
        glVertex2i(380,170);
     glEnd();

    // Baller Leg
     glBegin(GL_LINES);
        glVertex2i(380, 0);
        glVertex2i(340,-180);
     glEnd();

     glBegin(GL_LINES);
        glVertex2i(340,-180);
        glVertex2i(350,-220);
     glEnd();

     glBegin(GL_LINES);
        glVertex2i(380, 0);
        glVertex2i(420,-240);
     glEnd();

     // Baller head
     glBegin(GL_LINE_LOOP);
        glVertex2i(380,170);
        glVertex2i(370,177);
        glVertex2i(360,190);
        glVertex2i(360,200);
        glVertex2i(365,208);
        glVertex2i(370,215);
        glVertex2i(375,218);
        glVertex2i(380,220);   //middle
        glVertex2i(385,218);
        glVertex2i(390,215);
        glVertex2i(395,208);
        glVertex2i(400,200);
        glVertex2i(400,190);
        glVertex2i(390,177);
     glEnd();

     // Baller hand1
     glBegin(GL_LINES);
        glVertex2i(380,90);
        glVertex2i(300,100);
     glEnd();

     glBegin(GL_LINES);
        glVertex2i(300,100);
        glVertex2i(285,140);
     glEnd();

     // Baller hand2
     glBegin(GL_LINES);
        glVertex2i(380,95);
        glVertex2i(330,140);
     glEnd();

     glBegin(GL_LINES);
        glVertex2i(330,140);
        glVertex2i(360,160);
     glEnd();

      //ball
        glBegin(GL_POLYGON);
            glVertex2i(270+tx,120+ty);
            glVertex2i(260+tx,123+ty);
            glVertex2i(255+tx,130+ty);
            glVertex2i(255+tx,140+ty);
            glVertex2i(260+tx,147+ty);
            glVertex2i(270+tx,150+ty);
            glVertex2i(280+tx,147+ty);
            glVertex2i(285+tx,140+ty);
            glVertex2i(285+tx,130+ty);
            glVertex2i(280+tx,123+ty);
        glEnd();

        glutSwapBuffers();
    //}

 glEnd();
 glFlush ();
 }


void spe_key(int key, int x, int y)
{
    switch (key) {
		case GLUT_KEY_LEFT:
            if(tx>-720 && ty<156)
            {
                if(tx>=-550){
                    tx -=5;
                    ty -=2;
                }
                else{
                    tx -=10;
                    ty +=25;
                }
            }
			glutPostRedisplay();
			break;

		case GLUT_KEY_RIGHT:
            if(ty!=0)
            {
                tx +=20;
				ty -=5;
            }
			glutPostRedisplay();
			break;
        default:
			break;
	}
}

void init (void)
 {

 glClearColor(1.0, 1.0, 0.0, 0.0);

 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(-620.0, 620.0, -340.0, 340.0);
 }

 int main(int argc, char** argv)
 {
     glClear(GL_COLOR_BUFFER_BIT);
     glutInit(&argc, argv);
     glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
     glutInitWindowSize (1100, 600);
     glutInitWindowPosition (100, 100);
     glutCreateWindow ("A full toss");
     init ();
     glutDisplayFunc(display);
     glutSpecialFunc(spe_key);
     glutMainLoop();
     return 0;
 }
