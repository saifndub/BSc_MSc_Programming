//swap two value using user
#include <stdio.h>
int main()
{
    int i, j, swap;
    printf("Enter two value :");
    scanf("%d %d", &i, &j);
    printf("\nBefore swap : I=%d ,J=%d", i, j);
    swap = i;
    i = j;
    j = swap;

    printf("\n\nAfter swap :I=%d ,J=%d\n\n", i, j);
}
