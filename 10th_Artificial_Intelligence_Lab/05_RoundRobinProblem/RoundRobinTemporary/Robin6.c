#include<stdio.h>
#include<conio.h>
//#include<iostream.h>
int t = 0,n,s,bt[10],ct[10],wttime[10],late[10];
int allover()
{
    for(int i=0; i<n; i++)
        if(ct[i]>0)
            return 1;
    return 0;
}
void select(int j)
{
    wttime[j]+=t-late[j];     //wttime[j] = wttime[j] + t - late[j]
    if(ct[j]>=s)
    {
        ct[j]-=s;            //ct[j] = ct[j] - s
        t+=s;                //t = t + s
    }
    else
    {
        t+=ct[j];            //t = t + ct[]
        ct[j]=0;
    }
    if(ct[j]==0)
        late[j]=t;

}
void main()
{
    int j=0;
    //t=0;
    //clrscr();
    printf("Enter the number of task : ");
    scanf("%d",&n);

    printf("\nEnter the required time of tasks \n ");
    for(int i=0; i<n; i++)
    {
        printf("\nTask %d : ",i+1);
        scanf("%d",&bt[i]);
        ct[i]=bt[i];        //copy from bt[] to ct[] for later use and calculate by ct[]
        late[i]=0;
    }

    printf("\nEnter the time slice : ");
    scanf("%d",&s);

    while(allover())
    {
        if(ct[j]!=0)
            select(j);
        j = (j+1)%n;
    }

    printf("\n\n Task    Required time   Wait time \n");
    for(int i=0; i<n; i++)
    {
        printf("\n %d\t\t%d\t\t%d",i+1,bt[i],wttime[i]);
    }
    getch();
}
