# include<stdio.h>
int a[20][20],q[20]={0},visited[20],dist[20],n,e,i,n1,n2,v,f=0,r=-1;
void bfs(v)
{
    if(visited[v]==0)
    {
        visited[v] = 1;
        for(i=1; i<=n; i++)
            if(a[v][i]==1 && visited[i]==0)
            {
                if(dist[i]>=dist[v]+1)
                {
                    dist[i] = dist[v] + 1;
                }
                else
                    dist[i]=dist[i];
                printf(" %d=%d ;",i,dist[i]);
                q[++r]=i;
            }
    }
    if( f<=r )
    {
        bfs(q[f++]);

    }
}
main()
{
    //freopen("Saif.txt","r",stdin);

    printf("Enter the number of vertex :");
    scanf("%d",&n);

    printf("\nEnter the number of edge :\n");
    scanf("%d",&e);
    printf("\n");
    for(i=1; i<=e; i++)
    {
        printf("enter row :");
        scanf("%d",&n1);

        printf("enter colomn :");
        scanf("%d",&n2);

        a[n1][n2]=1;
        a[n2][n1]=1;
    }

    for(i=1; i<=n; i++)
    {
        visited[i]=0;
        dist[i]=999999;
    }

    printf("\n Enter the starting node :");
    scanf("%d", &v);

    dist[v]=0;
    bfs(v);


    for(i=1; i<=n ; i++)
        printf("\n distance(%d)= %d ",i,dist[i]);

}
