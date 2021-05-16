#include<stdio.h>
#include<math.h>
int square(int n1)
{
    int x = n1 * n1;
    return x;
}
int main()
{
    int num, y;
    printf("Enter a value : ");
    scanf("%d", &y);

    num = square(4);
    printf("%d", num);
}

