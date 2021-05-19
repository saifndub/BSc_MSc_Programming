#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 2; i <= 10; i = i + 2)
    {
        sum = sum + i;
    }
    printf("The sum of even number is: %d\n", sum);
}
