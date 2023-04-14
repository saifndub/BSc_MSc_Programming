#include <stdio.h>
int array[25], start, end;
int partition(int start, int end)
{
    int pivot, i, pi, temp;
    pivot = array[end];
    pi = start;

    for (i = start; i <= end - 1; i++)
    {
        if (array[i] <= pivot)
        {
            temp = array[i];
            array[i] = array[pi];
            array[pi] = temp;
            pi = pi + 1;
        }
    }
    temp = array[end];
    array[end] = array[pi];
    array[pi] = temp;
    return pi;
}
void quicksort(int start, int end)
{
    int pi;
    if (start < end)
    {
        pi = partition(start, end);

        quicksort(start, pi - 1);
        quicksort(pi + 1, end);
    }
}
int main()
{
    int i, count;

    printf("How many elements are u going to enter : ");
    scanf("%d", &count);

    printf("Enter %d elements: \n", count);
    for (i = 0; i < count; i++)
        scanf("%d", &array[i]);
    start = 0;
    end = count - 1;
    quicksort(start, end);

    printf("Order of Sorted elements: \n");
    for (i = 0; i < count; i++)
        printf(" %d", array[i]);

    return 0;
}
