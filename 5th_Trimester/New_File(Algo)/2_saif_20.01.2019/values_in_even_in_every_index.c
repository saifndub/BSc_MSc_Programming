#include <stdio.h>
void main()
{
    int array[100], i, num;
    printf("Enter the size of an array :\n");

    scanf("%d", &num);
    printf("Enter the elements of the array :\n");

    for (i = 1; i <= num; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nValues in even in every index of the array are :- \n");
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d \t", array[i]);
        }
    }
}
