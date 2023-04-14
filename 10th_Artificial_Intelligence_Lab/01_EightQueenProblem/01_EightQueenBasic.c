#include<stdio.h>
#include<conio.h>
#include<math.h>
int a[30],count=0;
//row=index and column=value  i.e i=row and a[i]=column
int place(int pos)
{
    int i;
    for(i=1; i<pos; i++)    //from 1st row to the (current row-1) to check with all prev. queens
    {
        if((a[i]==a[pos])||((abs(a[i]-a[pos])==abs(i-pos)))) //first we check columnwise and then diagonally
            return 1;       //if a queen exists in some column or diagonally then return 1
    }
    return 0;
}
void print_sol(int n)
{
    int i,j;
    printf("\n\nSolution :\n\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(a[i]==j)
                printf("Q  ");
            else
                printf("*  ");
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
    int k=1;            //k = Number of Queen
    a[k]=0;
    while(k!=0)
    {
        //printf("Back : %d\n",a[k]);
        do
        {
            a[k]++;
        }
        while((a[k]<=n)&&place(k));     //while columns are left and k cant be place
        //printf("Track : %d\n",a[k]);
        if(a[k]<=n)
        {
          //printf("Back Track :(%d, %d) \n", k, a[k]);
          count++;
            if(k==n)
                {
                    print_sol(n);
                    break;
                }
            else
            {
                k++;
                a[k]=0; //initialise of position for each queen
                //printf("Queen Number : %d\n",k);
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
    printf("\nTotal Moves=%d \n\n",count);
}
