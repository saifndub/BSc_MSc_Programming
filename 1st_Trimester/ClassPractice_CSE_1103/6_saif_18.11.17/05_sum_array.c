#include <stdio.h>
int main()
{
    int num[50];
    int i;
    int sum = 0;
    for (i = 0; i <= 4; i++)
    {
        printf("Enter number : ");
        scanf("%d", &num[i]);
        sum = num[50] + num[i];
        printf("sum is %d\n", sum);
    }
}
