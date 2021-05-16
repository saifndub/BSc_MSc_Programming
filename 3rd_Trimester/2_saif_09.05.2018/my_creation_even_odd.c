#include <stdio.h>
main()
{
    int array[100], i, num;
    printf("Enter the size of an array :");
    scanf("%d", &num);

    printf("\nEnter the elements of the array \n");

    for (i = 0; i < num; i++)
    {
        printf("\nEnter %dth element :",i+1);
        scanf("%d", &array[i]);
        printf(".......... %d is  ", array[i]);
        array[i]%2 == 0 ? printf("Even number") : printf("Odd number");
    }
}
/*if (array[i] % 2 == 0)
        {printf("even %d", array[i] );}
        else if (array[i] % 2 != 0)
        {printf("odd");}*/
