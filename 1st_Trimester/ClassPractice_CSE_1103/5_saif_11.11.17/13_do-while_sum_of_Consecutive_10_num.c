#include <stdio.h>
int main()
{
    int i, sum = 0;
    i = 0;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= 10);
    printf("sum is %d\n", sum);
}
