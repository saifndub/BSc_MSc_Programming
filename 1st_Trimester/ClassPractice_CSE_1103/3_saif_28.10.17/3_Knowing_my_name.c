#include <stdio.h>
int main()
{
    char ans;
    printf("Would you like to know my name???\n\n");
    printf("Type 'Y' for Yes and 'N' for No : ");
    ans = getchar(); //reading a character
    if (ans == 'y' || ans == 'Y')
        printf("\nMy name is Busy BEE .\n");
    else
        printf("\nYou are good for nothing .\n");
}
