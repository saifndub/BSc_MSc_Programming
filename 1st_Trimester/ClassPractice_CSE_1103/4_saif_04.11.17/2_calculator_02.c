// A fault Program
#include <stdio.h>
int main()
{
    char op;
    int x, y, z;

    printf("Enter two values : ");
    scanf("%d %d", &x, &y);

    printf("Enter an operator z=%c", &op);
    scanf("%c", &op);

    if (op == '+')
        printf("x+y= %d", x + y);
    else if (op == '-')
        printf("x-y=%d", x - y);
    else
        printf("invalid operator");
}
