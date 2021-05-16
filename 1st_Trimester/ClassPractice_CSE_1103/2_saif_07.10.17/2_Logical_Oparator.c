#include<stdio.h>
int main()
{
    int num1 = 30;
    int num2 = 40;
    int x,y,z;

    x=(num1>=40 || num2<50);
    y=(num1>=20 && num2<=20);
    z=( !(num1>=40));

    printf("x=%d \t y=%d \t z=%d",x,y,z);

    return(0);
}
