#include<stdio.h>
#include<conio.h>
void main()
{
    int reqtime[100],waitingtime[100],turnaroundtime[100],b[100];
    int i,n,time,count=0;

    float totalwt=0,totalTT=0;
//clrscr();
    printf("Enter total number of process : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter the burst time of %d process : ",i+1);
        scanf("%d",&reqtime[i]);
        b[i] = reqtime[i];
    }
    //i=0;
    for(time=20; count!=n; time++)
    {
        while(reqtime[i] == 0)
        {
            i=(i+1)%n;
        }
        reqtime[i]--;
        if(reqtime[i]==0)
        {
            turnaroundtime[i] = time+1;
            count++;
        }
        i = (i+1)%n;
    }
    printf("\nprocess   burst   waitng   turnaround   ");
    for(i=0; i<n; i++)
    {
        waitingtime[i] = turnaroundtime[i] - b[i];
        printf("\n   %d \t    %d \t     %d \t    %d",i+1,b[i],waitingtime[i],turnaroundtime[i]);
        totalwt = totalwt + waitingtime[i];
        totalTT = totalTT + turnaroundtime[i];
    }

    printf("\n  %d  %f  %f",n,totalwt,totalTT);
    getch();
}
