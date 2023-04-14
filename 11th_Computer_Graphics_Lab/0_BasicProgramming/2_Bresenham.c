#include<stdio.h>
int x1,x2,z1,z2,dy,dx;
int point1,point2,k,p;
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
    }
}

int main(){
    //printf("Saif");

    printf("Enter the value of x1 & z1 for 1st Point: ");
    scanf("%d",&x1);
    scanf("%d",&z1);
    printf("Enter the value of x2 & z2 for last Point : ");
    scanf("%d",&x2);
    scanf("%d",&z2);

    dy=z2-z1;
    dx=x2-x1;
    float m= (float)dy/(float)dx;
    printf("Value of m is : %.2f\n", m);
    if(m<1){
        LessThanOne(dx,dy);
    }
    else if(m>=1){
        greaterThanOne(dx,dy);
    }
}
