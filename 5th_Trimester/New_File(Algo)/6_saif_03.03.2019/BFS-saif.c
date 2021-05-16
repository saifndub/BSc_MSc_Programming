#include <stdio.h>
#include <stdlib.h>

int a[20][20],visit[20],q[25],d[25],v,e,f=1,r=0;
int i,j,m,n,s,k,b[20];
void bfs(int u)
{
    //int i;
    for(i=1; i<=v; i++)
    {
        if((a[u][i]==1)&&(visit[i]==0))
        {
            q[++r]=i;
            b[i] = d[u]+1;
            if((b[i]==1)||(d[i]>b[i]))
            {
                d[i]=d[u]+1;
            }
            printf(" %d= %d ",i,d[i]);
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
    printf("Enter vertex Number :");
    scanf("%d",&v);

    printf("Enter edges number :");
    scanf("%d",&e);
    for(i=1; i<=e; i++)
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
        d[i] = 0;
        q[i] = 0;
    }

    printf("Enter the source :");
    scanf("%d",&s);

    visit[s] = 1;
    k=s;
    bfs(k);
    /*while(visit[k]==0)
    {
        bfs(k);
        d[1]=0;
    }
    k++;*/

    int y;

    for(y=1; y<=v; y++)
    {
        printf("\n Distance d[%d]=%d \n\n",y,d[y]);
    }

    /*for(i=1;i<=n ; i++)
        printf(" v%d= %d ",i,d[i]);*/

    return 0;
}

