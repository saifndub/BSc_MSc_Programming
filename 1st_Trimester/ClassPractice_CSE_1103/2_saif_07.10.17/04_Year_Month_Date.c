#include <stdio.h>
int main()
{
    int Y, M, D, X;

    printf("Enter Days : ");
    scanf("%d", &X);

    Y = X / 365;
    D = X % 365;
    M = D / 30;
    D = D % 30;

    printf("Year = %d Month = %d  Day = %d \n\n", Y, M, D);
}
