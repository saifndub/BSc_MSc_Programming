#include<stdio.h>
#include<conio.h>
#include<math.h>
int a[30],count=0;
//row=index and column=value
int place(int pos)
{
    int i;
    for(i=1; i<pos; i++)
    {
        if((a[i]==a[pos])||((abs(a[i]-a[pos])==abs(i-pos))))
            return 1;
    }
    return 0;
}
void print_sol(int n)
{
    int i,j;
    count++;
    printf("\n\nSolution #%d:\n",count);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(a[i]==j)
                printf("Q ");
            else
                printf("* ");
        }
        printf("\n");
    }
    printf("Queen Position :{");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(a[i]==j)
                printf("(%d, %d)",i,j);
        }
    }
    printf("}\n");
}
void queen(int n)
{
    int k=1;
    a[k]=0;
    while(k!=0)
    {
        do
        {
            a[k]++;
        }
        while((a[k]<=n)&&place(k));
        if(a[k]<=n)
        {
            if(k==n)
                print_sol(n);
            else
            {
                k++;
                a[k]=0; //back track
                printf("Back Track : %d\n",k);
            }
        }
        else
            k--;
    }
}
void main()
{
    int i,n;
    printf("Enter the number of Queens : ");
    scanf("%d",&n);
    queen(n);
    printf("\nTotal solutions=%d \n\n",count);
}
