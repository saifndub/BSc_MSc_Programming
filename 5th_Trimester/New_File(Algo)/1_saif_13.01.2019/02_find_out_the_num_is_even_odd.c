//find out the number is even_odd
#include <stdio.h>
int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is even number.", num);
    else
        printf("%d is odd number.", num);

    return 0;
}
