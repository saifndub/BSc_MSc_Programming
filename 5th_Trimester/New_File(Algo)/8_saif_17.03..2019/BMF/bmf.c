#include <stdio.h>
#include <stdlib.h>


int a[10000][10000], w[10000][10000], dist[10000], prev[10000];
int vertex, edge;

int min(int i, int j)
{
    if(i<j)
        return i;
    else
        return j;
}

void update(int i, int j)
{
    dist[j] = min(dist[j], dist[i]+a[i][j]);

}

int main()
{
    freopen("bmf.txt", "r", stdin);

    int m, i, j, k, n, w8;
    printf("Enter total vertex: \n");
    scanf("%d", &vertex);

    printf("Enter total edge: \n");
    scanf("%d", &edge);
    for(i=0; i<vertex; i++)
    {
        dist[i]=999999;
    }

    for(i=0; i<vertex; i++)
    {
        for(j=0; j<vertex; j++)
        {
            a[i][j]=0;
        }
    }

    printf("Enter edges and weight: \n");
    for(int i = 1; i<= edge; i++)
    {
        scanf("%d %d %d", &m, &n, &w8);

        a[m][n] = w8;
    }

    dist[0] = 0;

    for(int i = 1; i<vertex; i++)
    {
        for(int j = 0; j<vertex; j++)
        {
            for(int k = 0; k< vertex; k++)
            {
                if(a[j][k]!=0)
                update(j, k);
            }
        }
    }

    for(int i = 1; i<= vertex; i++)
    {
        printf("Dist(%d) = %d\n", i, dist[i]);
    }
    return 0;
}
