#include<stdio.h>
int add();  //You need to declare your function before main, like this, either directly or in a header

int main()
{
    add();
}
int add()
{
    int x,y,z;
    printf ("Enter two number : " );
    scanf ("%d %d", &x,&y);
    z=x+y;
    printf ("sum is %d :", z  );
}
