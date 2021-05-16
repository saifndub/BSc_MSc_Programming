#include<stdio.h>
int Conjunction();
int main()
{
    int a;
    char i, j;
    printf("Please choose the option for truth table for two propotion : \n");
    printf("1. Conjunction\n2. Disjunction\n3. Implication\n4. Exclusive OR\n5. Biconditional\n\n");
    printf("Enter number of proposition name : ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        scanf("%c %c", &i, &j);
        printf(" %c %c\n", i, j);
        Conjunction(); //printf("You chose One");
        break;

    case 2:
        printf("You chose Two");
        break;

    case 3:
        printf("You chose Three");
        break;

    case 4:
        printf("You chose Four");
        break;

    case 5:
        printf("You chose Five.");
        break;

    default:
        printf("Invalid Choice. Enter a no between 1 and 5");
        break;
    }
}

int Conjunction()
{
    char i, j;
    // scanf("%c",&x,&y );
    // printf ("| %c ",x);printf("| %c ",y);printf("| %c |\n",y);
    printf("_____________\n");
    printf("| F | T | F |\n");
    printf("| F | F | F |\n");
    printf("| T | T | T |\n");
    printf("| T | F | F |\n");
}
