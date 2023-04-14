//#include<math.h>
#include<stdio.h>
#include<stdlib.h>     //For supporting absolute function
int x1,x2,y1,y2,dx,dy,step;
void display()
{
    //printf("%d %d %d %d", x1, x2, y1, y2);
    float x,y,Xinc,Yinc;
    dx=x2-x1;   //(float)
    dy=y2-y1;

    if(abs(dx) > abs(dy))
        step = abs(dx);
    else
        step = abs(dy);
    //printf("Steps :%d\n",step);

    Xinc = (float)dx/(float)step;
    Yinc = (float)dy/(float)step;

    Xinc = roundf(Xinc*10)/10;  //assign one number after decimal point
    Yinc = roundf(Yinc*10)/10;
    //printf("Saif : %f and %f \n",Xinc,Yinc);

    x = x1;
    y = y1;

    for (int k=1 ; k<=step; k++)
    {
        x = x + Xinc;
        y = y + Yinc;
        printf("%.1f | %.1f \n", round(x), round(y));
    }
}
int main()
{
    printf("Enter the value of x1 and y1: ");
    scanf("%d%d",&x1,&y1);
    printf("Enter the value of x2 and y2 :");
    scanf("%d%d",&x2,&y2);
    display();
}
