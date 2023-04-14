#include <stdio.h>
#include <stdlib.h>

int v,a[20][20],visit[20],e,f=1,r=0,d[25],q[25];
void bfs(int u)
{
    int i;

    for(i=1; i<=v; i++)
    {
        if((a[u][i]==1)&&(visit[i]==0))
        {
            q[++r]=i;
            d[i]=d[u]+1;
        }
    }

    if(f<=r)
    {
        visit[q[f]]=1;
        bfs(q[f++]);
    }
}


int main()
{
    int i,j,m,n,p,s,k;

    printf("Enter vertex Number :");
    scanf("%d",&v);

    for(i=1;i<=v;i++)
    {
        for(j=1;j<=v;j++)
        {

            a[i][j]=0;
        }
    }
    printf("Enter edges number :");
    scanf("%d",&e);
    for(p=1; p<=e; p++)
    {
        printf("enter row :");
        scanf("%d",&m);

        printf("enter colomn :");
        scanf("%d",&n);

        a[m][n]=1;
        a[n][m]=1;
    }
    printf("result: \n");
    for(i=1; i<=v; i++)
    {
        for(j=1; j<=v; j++)
        {

            printf(" %d   ",a[i][j]);
        }
        printf("\n");
    }


    for(i=1; i<=v; i++)
    {
        visit[i]=0;
        d[i]=0;
    }

    printf("Enter the source :");
    scanf("%d",&s);

    k=s;

    while(visit[k]==0)
    {
        bfs(k);
        d[1]=0;
    }
    k++;

    int y;

    for(y=1; y<=v; y++)
    {
        printf("\n Distance d[%d]=%d \n\n",y,d[y]);
    }

    return 0;

}

