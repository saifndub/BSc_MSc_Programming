#include <stdio.h>
//Insertion sort in c program
int main()
{
    int array[100], n, j, k, ptr, temp;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter %d integers :\n", n);

    for (k = 1; k <= n; k++)
        scanf("%d", &array[k]);

        array[0] = -99999999;

    for (k = 2 ; k <= n ; k++)
    {
        temp = array[k];


        for (  ptr = k-1; temp < array[ptr]; ptr = ptr-1)
        {
          array[ptr+1] = array[ptr];
        }
        array[ptr+1] = temp;
    }

    printf("Sorted list in ascending order:\n");

    for (k = 1; k <= n; k++)
        printf("%d\n", array[k]);

    return 0;
}
