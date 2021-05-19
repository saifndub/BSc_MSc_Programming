#include <stdio.h>
int main()
{
    char op;
    int x = 3, y = 2;

    printf("Enter an operator ('+' or '-') : ");
    scanf("%c", &op);

    if (op == '+')
        printf("x+y = %d", x + y);
    else if (op == '-')
        printf("x-y = %d", x - y);
    else
        printf("Invalid Operator.");

    printf("\n\n");
}
