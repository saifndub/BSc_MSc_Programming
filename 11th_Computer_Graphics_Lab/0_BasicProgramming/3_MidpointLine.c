#include<stdio.h>
int x1,x2,z1,z2,dy,dx;
int point1,point2,k,d,d1;
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

    point1 = x1;
    point2 = z1;

    dy=z2-z1;
    dx=x2-x1;
    float m= (float)dy/(float)dx;
    printf("%.2f", m);
    if(m<1){
        LessThanOne(dx,dy);
    }
    else if(m>=1){
        greaterThanOne(dx,dy);
    }
}
