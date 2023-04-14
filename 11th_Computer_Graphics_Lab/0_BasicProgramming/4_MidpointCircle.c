#include<stdlib.h>
#include<stdio.h>
int r,x,y;

void display()
{
    int p,p1;
    p=(5/4)-r;
    //printf("\n%d | %d | %d", p, x+1, y);

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
    }while(x<y);

}

int main(){

    printf("Enter the radius of circle : ");
    scanf("%d",&r);

    x=0;
    y=r;
    display(x,y);

}
