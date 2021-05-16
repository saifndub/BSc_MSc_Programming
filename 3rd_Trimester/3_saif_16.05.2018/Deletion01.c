#include <stdio.h>
int main()
{
    int array[100], k, i, n;

    printf("Enter number of elements in array :\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for ( i = 0 ; i < n ; i++ )
        scanf("%d", &array[i]);
    while (1)
    {
        printf("Enter the location where you want to delete element :\n");
        scanf("%d", &k);

        if ( k >= n+1 )
            printf("Deletion is not possible.\n");

        else
        {
            for ( i = k - 1 ; i < n - 1 ; i++ )
                array[i] = array[i+1];

            printf("Resultant array is :\n");

            for( i = 0 ; i < n - 1 ; i++ )
                printf("%d\n", array[i]);
            n = n - 1;
        }
    }
    return 0;
}
