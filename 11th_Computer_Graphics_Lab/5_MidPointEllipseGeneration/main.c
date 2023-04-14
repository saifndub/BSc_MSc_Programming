// C program to demonstrate drawing an Ellipse using MidPoint Ellipse Generation Algorithm with OpenGL
#include<stdio.h>
#include<GL/glut.h>
#include<windows.h>
int a,b,x1,z1,p,point1,point2,check1,check2;
void myInit (void)
{
    glClearColor(0.0, 0.0, 0.0, 1.0);   // making background color black as first
    glColor3f(0.0, 1.0, 0.0);       	// making picture color green (in RGB mode), as middle argument is 1.0

    glPointSize(3);                     // breadth of picture boundary is 1 pixel
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-220, 220, -120, 120);   // setting window dimension in X- and Y- direction

}

void display (void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);

    p=(b*b)+(0.25*a*a)-(a*a*b);
    printf("For region 1 :");
    do{
        if(p<0){
            point1 = x1 + 1;
            point2 = z1;
        }
        else{
            point1 = x1 + 1;
            point2 = z1 - 1;
        }
        check1 = (2*point1*b*b);
        check2 = (2*point2*a*a);
        printf("\n%5d | %d, %d |", p, point1, point2);
        p=p+(b*b)+(2*b*b*point1)+(a*a*(((point2*point2)-(z1*z1))-(point2-z1)));
        x1 = point1;
        z1 = point2;

        glColor3f(0.0,153.0,0.0);   //Green
        glVertex2i(point1, point2);
        glColor3f(0.0,0.0,204.0);     //Blue
        glVertex2i(point1, -point2);
        glColor3f(0.0,0.0,204.0);     //Blue
        glVertex2i(-point1, point2);
        glColor3f(0.0,153.0,0.0);   //Green
        glVertex2i(-point1, -point2);

    }while(check1 < check2);
                            //printf("\n%d %d %d %d", point1, point2, x1, z1);
    printf("\n\nFor region 2 :");
    p=(b*b*(x1+0.5)*(x1+0.5))+(a*a*(z1-1)*(z1-1))-(a*a*b*b);
    do{
        if(p<0){
            point1 = x1 + 1;
            point2 = z1 - 1 ;
        }
        else{
            point1 = x1;
            point2 = z1 - 1;
        }
        printf("\n%5d | %2d, %d |", p, point1, point2);
        p=p+(a*a)-(2*a*a*point2)+(b*b*(((point1*point1)-(x1*x1))+(point1-x1)));
        x1 = point1;
        z1 = point2;

        glColor3f(51.0,0.0,102.0);    //Pink
        glVertex2i(point1, point2);
        glColor3f(255.0,128.0,0.0);   //Yellow
        glVertex2i(point1, -point2);
        glColor3f(255.0,128.0,0.0);   //Yellow
        glVertex2i(-point1, point2);
        glColor3f(51.0,0.0,102.0);    //Pink
        glVertex2i(-point1, -point2);

    }while(z1 != 0);

    glEnd();
    glFlush();
}

int main (int argc, char** argv)
{
    printf("Enter the radius(a) in X-axis : ");
    scanf("%d",&a);
    printf("Enter the radius(b) in Y-axis : ");
    scanf("%d",&b);

    x1=0;
    z1=b;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(768, 430);      // giving window size in X- and Y- direction
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Midpoint Ellipse Generation"); // Giving name to window
    myInit();

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
