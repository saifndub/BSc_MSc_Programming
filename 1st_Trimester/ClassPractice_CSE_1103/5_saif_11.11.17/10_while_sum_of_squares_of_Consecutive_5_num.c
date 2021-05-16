#include <stdio.h>
int main()
{
    int i, sum = 0;
    i = 1;
    while (i <= 5)
    {
        sum = sum + i * i;
        i++;
    }
    printf("sum of squares is : %d\n", sum);
}
