#include <stdio.h>
int main()
{
   int arr[100], k, j, n, item;

   printf("Enter number of elements in array :\n");
   scanf("%d", &n);

   printf("Enter %d elements to insert :\n", n);

   for (j = 0; j < n; j++)
      scanf("%d", &arr[j]);
while (1)
{
   printf("Enter the location where you want to insert an element :\n");
   scanf("%d", &k);

   printf("Enter the value to insert\n");
   scanf("%d", &item);

   for (j = n - 1; j >= k - 1; j--)
      arr[j+1] = arr[j];

   arr[k-1] = item;

   printf("Resultant array is :\n");

   for (j = 0; j <= n; j++)
      printf("%d\n", arr[j]);
      n= n+1;
}
   return 0;
}
