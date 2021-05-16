#include <stdio.h>
int main()
{
    int array[100], n, i, j, swap, first, last, mid, search;

    printf("Enter number of elements :\n");
    scanf("%d", &n);

    printf("Enter %d integers :\n", n);

    for (i = 1; i <= n; i++)        //set the value in array
        scanf("%d", &array[i]);

    for (i = 1 ; i <= n - 1; i++)       //starting bubble_sort program
    {
        for (j = 1 ; j <= n - i; j++)
        {
            if (array[j] > array[j+1])      // For decreasing order use <
            {
                swap       = array[j];
                array[j]   = array[j+1];
                array[j+1] = swap;
            }
        }
    }

    printf("Sorted list in ascending order:\n");

    for (i = 1; i <= n; i++)
        printf("%d\n", array[i]);

    printf("Enter value to search :\n");        //starting binary_search program
    scanf("%d", &search);
    first = 1;
    last = n ;
    mid = (first + last)/2;

    while (first <= last && search != array[mid])
    {
        if (search < array[mid])
            last = mid - 1;

        else if (search > array[mid])
            first = mid + 1;

        mid = (first + last)/2;
    }

    if (array[mid] == search)
    {
        printf("%d found at location %d.\n", search, mid);
        //break;
    }
    else //if (first > last)
        printf("Not found! %d isn't present in the list.\n", search);

    return 0;
}
