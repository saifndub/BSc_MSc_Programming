#include<stdio.h>
#include<conio.h>
main()
{
    int i,num,a[150],b[150],c[150];
    printf("Enter the size of an array :\n");
    scanf("%d", &num);

    printf("Reading the 1st array A :\n");
    for (i=0; i<num; i++)
    {
        printf("Enter the value of A[%d] =",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nReading the 2nd array B :\n");
    for (i=0; i<num; i++)
    {
        printf("Enter the value of B[%d] =",i+1);
        scanf("%d",&b[i]);
    }
    printf("\nThe output of addition of 2 array is :\n");
    for(i=0; i<num; i++)
    {
        c[i]=a[i]+b[i];
        printf("-----     -----     -----\n|%3d|  +  |%3d|  =  |%3d|\n",a[i],b[i],c[i]);
        //printf("|~~~|     |~~~|     |~~~|\n");
    }
    printf("-----     -----     -----\n");
    /*for(i=0; i<num; i++)
    {
        c[i]=a[i]+b[i];
        printf("\n\n[%2d] + [%2d] = [%2d]\n",a[i],b[i],c[i]);
    }*/
}
