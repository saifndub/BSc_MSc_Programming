#include<stdio.h>
int number[25],start,end;
int partition(int start,int end)
{
    int pivot,i,pi,temp;
    pivot = number[end];
    pi = start;

    for(i=start; i<=end-1 ; i++)
    {
        if(number[i]<=pivot)
        {
            temp=number[i];
            number[i]=number[pi];
            number[pi]=temp;
            pi = pi+1;
        }
    }
    temp=number[end];
    number[end]=number[pi];
    number[pi]=temp;
    return pi;
}
void quicksort(int start,int end)
{
    int pi;
    if(start<end)
    {
        pi = partition(start,end);

        quicksort(start,pi-1);
        quicksort(pi+1,end);
    }


}
int main()
{
    int i, count;

    printf("How many elements are u going to enter?: ");
    scanf("%d",&count);

    printf("Enter %d elements: ", count);
    for(i=0; i<count; i++)
        scanf("%d",&number[i]);
    start = 0;
    end = count-1;
    quicksort(start,end);

    printf("Order of Sorted elements: ");
    for(i=0; i<count; i++)
        printf(" %d",number[i]);

    return 0;
}
