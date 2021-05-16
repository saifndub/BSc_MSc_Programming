#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int sum;
    int min;
    int mul;
    int div;
    int mod;

    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    sum = num1 + num2;
    min = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    mod = num1 % num2;

    printf("Summation is : %d\n", sum);
    printf("Subtraction is : %d\n", min);
    printf("Multiplication is : %d\n", mul);
    printf("Division is : %d\n", div);
    printf("Modulo division is : %d\n", mod);

    return 0;
}
