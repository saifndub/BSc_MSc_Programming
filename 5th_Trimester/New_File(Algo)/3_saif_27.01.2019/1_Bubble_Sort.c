#include <stdio.h>
//Bubble sort in c p;rogram
int main()
{
    int array[100], n, k, ptr, swap;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter %d integers :\n", n);

    for (k = 0; k < n; k++)
        scanf("%d", &array[k]);

    for (k = 0 ; k < n - 1; k++)
    {
        for (ptr = 0 ; ptr < n - k - 1; ptr++)
        {
            if (array[ptr] > array[ptr+1])
            {
                swap         = array[ptr];
                array[ptr]   = array[ptr+1];
                array[ptr+1] = swap;
            }
        }
    }

    printf("Sorted list in ascending order:\n");

    for (k = 0; k < n; k++)
        printf("%d\n", array[k]);

    return 0;
}
