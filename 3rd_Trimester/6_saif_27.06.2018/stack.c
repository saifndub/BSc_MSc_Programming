/*Implementation of stack using array - STACK.C */
#include <stdio.h>
#include <conio.h>
#define SIZE 10
int arr[SIZE],top = -1,i;
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
        printf("Stack is Full (overflow)");
        getch();
        return ;
    }
    top++ ;
    printf("Enter the element to PUSH :");
    scanf ("%d",&arr[top]);
}

void pop()
{
    if(top == -1)
    {
        printf("Stack is empty (overflow)");
        getch ;
        return;
    }
    printf("The POP element is : %d ",arr[top]);
    getch ;
    top-- ;
}
display()
{
    if(top == -1)
    {
        printf("Stack is empty (undreflow)");
        getch();
        return;
    }
    printf("The element in stack are : TOP");
    for(i = top ; i >= 0 ; i--)
        printf(" -> %d",arr[i]);
    printf(" ");
    getch();
}
