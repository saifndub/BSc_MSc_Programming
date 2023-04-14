// C program to demonstrate drawing a Line using DDA Line Drawing algorithm in OpenGL
#include<GL/glut.h>
#include<stdio.h>
#include<windows.h>
int x1,x2,y1,y2,dx,dy,step;
// function to initialize
void myInit (void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);   // making background color black as first
	glColor3f(0.0, 1.0, 0.0);           // making picture color green (in RGB mode), as middle argument is 1.0

	// breadth of picture boundary is 1 pixel
	glPointSize(3.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	// setting window dimension in X- and Y- direction
	gluOrtho2D(-220, 220, -120, 120);
}

void display (void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);

	float x,y,Xinc,Yinc;
    dx=x2-x1;   //(float)
    dy=y2-y1;

    if(abs(dx) > abs(dy))
        step = abs(dx);
    else
        step = abs(dy);

    Xinc = (float)dx/(float)step;
    Yinc = (float)dy/(float)step;

    Xinc = roundf(Xinc*10)/10;  //assign only a number after decimal point
    Yinc = roundf(Yinc*10)/10;

    x = x1;
    y = y1;

    for (int k=1 ; k<=step; k++)
    {
        x = x + Xinc;
        y = y + Yinc;
        printf("%.1f | %.1f \n", round(x), round(y));
		glVertex2i(round(x), round(y));
	}
	glEnd();
	glFlush();
}

int main (int argc, char** argv)
{
    printf("Enter the value of x1 and y1: ");
    scanf("%d%d",&x1,&y1);
    printf("Enter the value of x2 and y2 :");
    scanf("%d%d",&x2,&y2);

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	// giving window size in X- and Y- direction
	glutInitWindowSize(768, 430);
	glutInitWindowPosition(0, 0);
	// Giving name to window
	glutCreateWindow("DDA Line Drawing");
	myInit();

	glutDisplayFunc(display);
	glutMainLoop();
}

