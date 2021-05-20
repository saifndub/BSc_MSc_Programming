//Declare an array of n number and find the average
#include <stdio.h>
main()
{
    int i, n;
    float avg, sum = 0, num[100];
    printf("Enter the size of array :");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum = sum + num[i];
    }
    avg = sum / n;
    printf("Average = %f", avg);
}
