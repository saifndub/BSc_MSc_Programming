#include <stdio.h>
int main()
{
    float marks[11];
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d. student get marks= ", i);
        scanf("%f", &marks[i]);
    }
    for (i = 1; i <= 10; i++)
    {
        printf("marks[%d]=%f\n", i, marks[i]);
    }
}
