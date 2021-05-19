#include <stdio.h>
int main()
{
    int a[3];
    int i, x, j = 0;
    printf("Enter three number : ");
    for (i = 0; i <= 2; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nU want to search : ");
    scanf("%d", &x);
    for (i = 0; i <= 2; i++)
    {
        if (a[i] == x)
            j++;
    }
    printf("\nValue has ocured %d times\n\n", j);
}
