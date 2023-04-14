//It is a best example for understanding while loop and do-while loop
#include<stdlib.h>
#include<stdio.h>
int a,b,x1,z1,p,point1,point2,check1,check2;

void display(){
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
        printf("\n%5d | %d, %d | %4d+%d+%d+%5d | %4d | %4d", p, point1, point2, p, b*b, 2*b*b*point1, a*a*(((point2*point2)-(z1*z1))-(point2-z1)), check1, check2);
        p=p+(b*b)+(2*b*b*point1)+(a*a*(((point2*point2)-(z1*z1))-(point2-z1)));
        x1 = point1;
        z1 = point2;
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
        printf("\n%5d | %2d, %d | %4d+%d-%d+%4d", p, point1, point2,p, a*a, 2*a*a*point2, b*b*(((point1*point1)-(x1*x1))+(point1-x1)));
        p=p+(a*a)-(2*a*a*point2)+(b*b*(((point1*point1)-(x1*x1))+(point1-x1)));
        x1 = point1;
        z1 = point2;
    }while(z1 != 0);
}

int main(){

    printf("Enter the radius(a) in X-axis : ");
    scanf("%d",&a);
    printf("Enter the radius(b) in Y-axis : ");
    scanf("%d",&b);

    x1=0;
    z1=b;
    display();

}
