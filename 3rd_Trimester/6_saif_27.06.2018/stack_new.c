/*Implementation of stack using array - STACK.C */
#include <stdio.h>
#include <conio.h>
#define SIZE 10
int arr[SIZE],i,top = -1;
void push();
void pop();
void display();
void main()
{
    int ch;
    //clrscr();
    do
    {
        printf("[1].PUSH [2].POP [3].Display [4].Exit") ;
        printf("\nEnter your choice [1-4] :") ;
        scanf("%d", &ch) ;
        switch(ch)
        {
        case 1 :
            push();
            break;
        case 2 :
            pop();
            break;
        case 3 :
            display();
            break;
        case 4 :
            break;
        default :
            printf("Invalid Option .");
            getch() ;
        }
    }
    while(ch != 4) ;
        getch();
}
void push()
{
    if(top == SIZE - 1)
    {
        printf("\nStack is Full (overflow) .");
        getch();
        return ;
    }
    top++ ;
    printf("\nEnter the element to PUSH :");
    scanf ("%d",&arr[top]);
    printf("\n");
}

void pop()
{
    if(top == -1)
    {
        printf("\nStack is empty (underflow) .\n");
        getch() ;
        return;
    }
    printf("\nThe POP element is : %d ",arr[top]);
    getch() ;
    top-- ;
    printf("\n\n");
}
display()
{
    if(top == -1)
    {
        printf("\nStack is empty (underflow) .\n");
        getch();
        return;
    }
    printf("\nThe element in stack are : TOP");
    for(i = top ; i >= 0 ; i--)
        printf(" -> %d",arr[i]);
    printf(" -> BOTTOM");
    printf("\n\n");
    getch();
}
