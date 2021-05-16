//Take an array of n number and print out the even values of the array
#include <stdio.h>
void main()
{
    int array[100], i, num;
    printf("Enter the size of an array :\n");

    scanf("%d", &num);
    printf("Enter the elements of the array :\n");

    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nEven numbers in the array are :- ");
    for (i = 0; i < num; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%d \t", array[i]);
        }
    }
}
