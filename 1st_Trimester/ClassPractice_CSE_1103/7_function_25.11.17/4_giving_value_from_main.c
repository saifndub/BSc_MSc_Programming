#include<stdio.h>
int sum(int n1, int n2)
{
    return (n1 + n2);
}
int main()
{
    int x, y;
    int z;
    printf("Enter two number : ");
    scanf("%d %d", &x, &y);
    z = sum(x, y);
    printf("\nResult is : %d\n\n", z);
    return (0);
}
