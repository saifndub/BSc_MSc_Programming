#include <stdio.h>
int main()
{
    int i, sum = 0;
    i = 0;
    do
    {
        sum = sum + i * i;
        i++;
    } while (i <= 5);
    printf("sum of squares is : %d\n", sum);
}
