#include <stdio.h>
int main()
{
    int num[6];
    int i;
    int sum = 0;
    printf("Enter five number : ");
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }
    printf("sum of five number is %d\n", sum);
}
