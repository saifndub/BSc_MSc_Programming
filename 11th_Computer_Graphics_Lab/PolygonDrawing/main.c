// C program to demonstrate drawing a Line using Bresenham Line Drawing algorithm with OpenGL
#include<GL/glut.h>
#include<stdio.h>
#include<windows.h>
int x1,x2,z1,z2,dy,dx;
int point1,point2,k,p;
void myInit (void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);   // making background color black as first
	glColor3f(0.0, 1.0, 0.0);           // making picture color green (in RGB mode), as middle argument is 1.0

	glPointSize(3.0);                   // breadth of picture boundary is 1 pixel
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-220, 220, -120, 120);   // setting window dimension in X- and Y- direction
}
void LessThanOne(int dx, int dy){
    p=(2*dy)-dx;
    for (k=1; k<=dx; k++){
        if(p<0){
            point1 = x1 + 1;
            point2 = z1;
        }
        else{
            point1 = x1 + 1;
            point2 = z1 + 1;
        }
        printf("\n%3d | %d | %d", p, point1, point2);
        p=p+(2*dy)-(2*dx*(point2-z1));
        x1 = point1;
        z1 = point2;

        glVertex2i(point1, point2);
    }
}
void greaterThanOne(int dx, int dy){
    p=(2*dx)-dy;
    for (k=1; k<=dy; k++){
        if(p<0){
            point1 = x1;
            point2 = z1 + 1;
        }
        else{
            point1 = x1 + 1;
            point2 = z1 + 1;
        }
        printf("\n%3d | %d | %d", p, point1, point2);
        p=p+(2*dx)-(2*dy*(point1-x1));
        x1 = point1;
        z1 = point2;

        glVertex2i(point1, point2);
    }
}
void display (x1, z1, x2, z2)
{

	dy=z2-z1;
    dx=x2-x1;
    float m= (float)dy/(float)dx;
    printf("Value of m is : %.2f (Bresenham)\n", m);
    if(m<1){
        LessThanOne(dx,dy);
    }
    else if(m>=1){
        greaterThanOne(dx,dy);
    }
}
int a1,b1,a2,b2,c1,c2;
void drawing (void)
{
	//glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);

    display (a1, b1, a2, b2);
    display (a2, b2, c1, c2);

	glEnd();
	glFlush();
}

int main (int argc, char** argv)
{
    printf("Enter the value of x1 & z1 for 1st Point: ");
    scanf("%d%d",&a1,&b1);
    printf("Enter the value of x2 & z2 for last Point : ");
    scanf("%d%d",&a2,&b2);
    printf("Enter the value of c1 & c2 for 1st Point: ");
    scanf("%d%d",&c1,&c2);

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	// giving window size in X- and Y- direction
	glutInitWindowSize(768, 430);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Bresenham Line Drawing");
	myInit();

	glutDisplayFunc(drawing);
	glutMainLoop();
}

