//Polygan:
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (0.0, 0.0, 97.0);
glBegin(GL_POLYGON);
/*	*Gl_quads	*GL_triangle 	*gl_line 	*/
/*glVertex2f (10,10);

glVertex2f (10,16);
glColor3f (255.0, 0.0, 97.0);
glVertex2f (16,20);
glColor3f (0.0, 255.0, 97.0);
glVertex2f (28,10);
glColor3f (255.0, 255.0, 97.0);
glVertex2f (28,16);
glColor3f (255.0, 255.0, 97.0);
glVertex2f (22,10);*/

glVertex3f (10, 5, 0.0);
glVertex3f (5, 10, 0.0);
glVertex3f (10, 15, 0.0);
glVertex3f (20, 15, 0.0);
glVertex3f (25, 10, 0.0);
glVertex3f (20, 5, 0.0);

glEnd();
/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0, 30, 0, 30, -30, 30);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (800, 600);
glutInitWindowPosition (0, 0);
glutCreateWindow ("line");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}



