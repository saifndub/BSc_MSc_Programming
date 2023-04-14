#include <stdio.h>
#include <stdlib.h>
int adj[50][50], visit[50];
int edge, node;
int i, j, n1, n2, s;

dfs(int i)
{
    //int i;
    //printf("%d->  ",i);
    visit[i] = 1;

    for (j = 1; j <= node; j++)
        if (adj[i][j] == 1 && visit[j] == 0)
        {
            printf("%d->%d , ", i, j);
            dfs(j);
        }
    /*else
        {
            while(visit[i]==0)
            {
                dfs(i);
                //i++;
            }
        }*/
}

/*void DFS(int i)
{
    int j;
	printf("%d -> ",i);
    visit[i]=1;

	for(j=1;j<=node;j++)
       if(!visit[j]&&adj[i][j]==1)
            DFS(j);
}*/

int main()
{
    freopen("bfs.txt", "r", stdin);

    printf("enter the number of nodes:");
    scanf("%d", &node);

    printf("enter the number of edges:");
    scanf("%d", &edge);

    for (i = 1; i <= edge; i++)
    {
        printf("enter row :");
        scanf("%d", &n1);

        printf("enter colomn :");
        scanf("%d", &n2);

        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    for (i = 1; i <= node; i++)
    {
        for (j = 1; j <= node; j++)
        {
            printf("%d\t", adj[i][j]);
        }
        printf("\n");
    }
    for (i = 1; i <= node; i++)
    {
        visit[i] = 0;
    }

    printf("\nEnter the starting node :");
    scanf("%d", &s);

    printf("T = {");
    i = s;

    dfs(i);
    i = 1;

    while (visit[i] == 0)
    {
        dfs(i);
        i++;
    }

    printf(" }\n\n");

    // return 0;
}
