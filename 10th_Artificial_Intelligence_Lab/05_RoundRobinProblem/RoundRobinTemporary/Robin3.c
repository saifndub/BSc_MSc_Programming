#include<stdio.h>
#include<conio.h>
//#include<iostream.h>
int t,n,s,bt[10],ct[10],ta[10],w[10],lat[10],wav,taav;
int allover()
 {
   for(int i=0;i<n;i++)
   if(ct[i]>0)
   return 0;
   return 1;
 }
void select(int p)
 {
   w[p]+=t-lat[p];
   if(ct[p]>=s)
   {
     ct[p]-=s;
     t+=s;
   }
 else
  {
    t+=ct[p];
    ct[p]=0;
  }
   if(ct[p]==0)
    ta[p]=t;
   lat[p]=t;
 }
void main()
 {
   int p=0;t=0;taav=0;wav=0;
   //clrscr();
   printf("Enter the number of process : ");
   scanf("%d",&n);
   printf("\n Enter the time slice : ");
   scanf("%d",&s);
   printf("\nEnter the required time of processes \n ");
   for(int i=0;i<n;i++)
   {
     printf("\n process %d : ",i+1);
     scanf("%d",&bt[i]);
     ct[i]=bt[i];
     lat[i]=0;
   }
 while(!allover())
  {
    if(ct[p]!=0)
   select(p);
   p=(p+1)%n;
  }
 printf("\n\n Process    Burst time   Wait time    Turn around \n\n");
 for(int i=0;i<n;i++)
  {
    printf("\n %d\t\t%d\t\t%d\t\t%d",i+1,bt[i],w[i],ta[i]);
    wav+=w[i];
    taav+=ta[i];
  }
 wav/=n;
 taav/=n;
 printf("\n\nAverage waiting time : %d ",wav);
 printf("\n\nAverage turn around time : %d ",taav);
 getch();
}
