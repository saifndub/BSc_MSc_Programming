#include<stdio.h>
int f_c()
{
    float C,F;
    printf("Enter the temperature in Fahrenheit :");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("\n%.2f fahreneit = %.2f celscius\n",F,C);
}
int c_f()
{
    float C,F;
    printf("Enter the temperature in celscius :");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("\n%.2f celscius = %.2f fahreneit\n",F,C);
}
int main()
{
    int choice;
    printf("Enter 1 or 2 :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1 :
        f_c();break;
    case 2 :
        c_f();break;
    }
}
