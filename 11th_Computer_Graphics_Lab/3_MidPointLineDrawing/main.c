// C program to demonstrate drawing a Line using MidPoint Line Drawing algorithm with OpenGL
#include<GL/glut.h>
#include<stdio.h>
#include<windows.h>
int x1,x2,z1,z2,dy,dx;
int point1,point2,k,d,d1;
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
    d=dy-(dx/2);
    for (k=1; k<=dx; k++){
        if(d<0){
            point1++;
            d1 = d + dy;
        }
        else{
            point1++;
            point2++;
            d1 = d+dy-dx;
        }
        printf("\n%3d | %d | %d", d, point1, point2);
        d = d1;
        glVertex2i(point1, point2);
    }
}
void greaterThanOne(int dx, int dy){
    d=dx-(dy/2);
    for (k=1; k<=dy; k++){
        if(d<0){
            point2++;
            d1 = d + dx;
        }
        else{
            point1++;
            point2++;
            d1 = d+dx-dy;
        }
        printf("\n%3d | %d | %d", d, point1, point2);
        d = d1;
        glVertex2i(point1, point2);
    }
}
void display (void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);

	point1 = x1;
    point2 = z1;

    dy=z2-z1;
    dx=x2-x1;
    float m= (float)dy/(float)dx;
    printf("Value of m is : %.2f (MidPoint Line)\n", m);
    if(m<1){
        LessThanOne(dx,dy);
    }
    else if(m>=1){
        greaterThanOne(dx,dy);
    }

	glEnd();
	glFlush();
}

int main (int argc, char** argv)
{
    printf("Enter the value of x1 & z1 for 1st Point: ");
    scanf("%d%d",&x1,&z1);
    printf("Enter the value of x2 & z2 for last Point : ");
    scanf("%d%d",&x2,&z2);

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	// giving window size in X- and Y- direction
	glutInitWindowSize(768, 430);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("MidPoint Line Drawing");
	myInit();

	glutDisplayFunc(display);
	glutMainLoop();
}

