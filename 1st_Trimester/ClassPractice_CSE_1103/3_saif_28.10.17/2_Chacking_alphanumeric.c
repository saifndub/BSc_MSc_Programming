#include <stdio.h>
#include <ctype.h>
int main()
{
    char X;
    printf("Press any Key : ");
    X = getchar();

    if (isalpha(X) > 0)
        printf("\nThe character is a lattar.\n");
    else if (isdigit(X) > 0)
        printf("\nThe character is a digit.\n");
    else
        printf("\nThe character is not alphanumeric.\n");
}
