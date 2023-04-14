// C program to demonstrate drawing a circle using MidPoint Circle Drawing Algorithm with OpenGL
#include<stdio.h>
#include<GL/glut.h>
#include<windows.h>
int r,x,y;
void myInit (void)
{
    glClearColor(0.0, 0.0, 0.0, 1.0);   // making background color black as first
    glColor3f(0.0, 1.0, 0.0);       	// making picture color green (in RGB mode), as middle argument is 1.0

    glPointSize(3);                   // breadth of picture boundary is 1 pixel
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-780, 780, -420, 420);   // setting window dimension in X- and Y- direction

}

void display (void)
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);

    int p,p1;
    p=(5/4)-r;
    //printf("\n%d | %d | %d", p, x+1, y);  //Comment
    do{
        if(p<0){
            p1=p+1+((2*x)+2);
            x++;
        }
        else{
            p1=p+((2*x)+2)+1-((2*y)-2);
            x++;
            y--;
        }
        printf("\n%3d | %d | %d", p, x, y);
        p = p1;

        glColor3f(0.0,153.0,0.0);
        glVertex2i(x, y);
        glColor3f(51.0,0.0,102.0);    //Pink
        glVertex2i(y, x);
        glColor3f(0.0,0.0,204.0);     //Blue
        glVertex2i(x, -y);
        glColor3f(255.0,128.0,0.0);   //Yellow
        glVertex2i(y, -x);

        glColor3f(0.0,0.0,204.0);     //Blue
        glVertex2i(-x, y);
        glColor3f(255.0,128.0,0.0);   //Yellow
        glVertex2i(-y, x);
        glColor3f(0.0,153.0,0.0);     //Green
        glVertex2i(-x, -y);
        glColor3f(255.0,0.0,102.0);    //Pink
        glVertex2i(-y, -x);
    }while(x<y);

    glEnd();
    glFlush();
}

int main (int argc, char** argv)
{
    printf("Enter the radius of circle : ");
    scanf("%d",&r);
    x=0;
    y=r;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(1366, 768);      // giving window size in X- and Y- direction
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Circle Drawing"); // Giving name to window
    myInit();

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
