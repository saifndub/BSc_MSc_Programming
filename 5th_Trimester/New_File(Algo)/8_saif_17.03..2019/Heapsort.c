//Heap sort :
#include<stdio.h>;
int a[20], i, n, heap_size;
void max_heap()
{
    heap_size=n; //a.length=n
    for(i=n/2; i>=1; i--)
    {
        max_heapify(i);
    }
}
void max_heapify(int j)
{
    int l=2*j;
    int r=2*j+1;
    int largest=j;
    int e;
    if(l<=heap_size&&a[l]>a[largest])
    {
        largest=l;
    }
    if(r<=heap_size&&a[r]>a[largest])
    {
        largest=r;
    }
    if(largest!=j)
    {
        e=a[j];
        a[j]=a[largest];
        a[largest]=e;
        max_heapify(largest);
    }

}
void heapsort()
{
    int c;
    heap_size=n;
    max_heap();


    for(i=n; i>=2; i--)
    {
        c=a[i];
        a[i]=a[1];
        a[1]=c;
        heap_size=heap_size-1;
        max_heapify(1);
    }
}
int main()
{
    int p, q;
    printf("array size:");
    scanf("%d",&n);
    printf("Insert values: ");
    printf("\n");
    for(p=1; p<=n; p++)
    {
        scanf("%d",&a[p]);
    }
    printf("\n");
    heapsort();
    for(q=1; q<=n; q++)
    {
        printf("a[%d]=%d\n",q,a[q]);
    }
    printf("\n");
}
