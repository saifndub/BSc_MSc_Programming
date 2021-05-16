#include<stdio.h>
int main()
{
        int x;
        printf("Enter a mark : ");
        scanf ("%d",&x);

        if(x>=80 && x<=100)
        printf("A+");
                else if(x>=75 && x<=79)
                printf("A");
                        else if(x>=70 && x<=74)
                        printf("A-");
                                else if(x>=65 && x<=69)
                                printf("B+");
                                        else if(x>=60 && x<=64)
                                        printf("B");
                                                else if(x>=55 && x<=59)
                                                printf("B-");
                                                                else if(x>=50 && x<=54)
                                                                printf("C+");
                                                                        else if(x>=45 && x<=49)
                                                                        printf("C");
                                                                                else if(x>=40 && x<=44)
                                                                                printf("C-");
        else
        printf("F");

}
