#include <stdio.h>
#include <ctype.h>
int main()
{
    char saif;
    printf("Enter an alphabet : ");
    putchar('\n');
    saif = getchar();
    if (islower(saif))
        putchar(toupper(saif));
    else
        putchar(tolower(saif));
}
