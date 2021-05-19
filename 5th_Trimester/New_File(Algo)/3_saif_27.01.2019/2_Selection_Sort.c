#include <stdio.h>
//Selection sort in c p;rogram
int main()
{
    int array[100], n, j, k, min, LOC, temp;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter %d integers :\n", n);

    for (k = 0; k < n; k++)
        scanf("%d", &array[k]);

    for (k = 0 ; k < n - 1; k++)
    {
        min = array[k];
        LOC = k;
        for (j = k+1 ; j < n; j++)
        {
            if (min > array[j])
            {
                min = array[j];
                LOC = j;
            }
        }
        temp       = array[k];
        array[k]   = array[LOC];
        array[LOC] = temp;
    }

    printf("Sorted list in ascending order:\n");

    for (k = 0; k < n; k++)
        printf("%d\n", array[k]);

    return 0;
}
