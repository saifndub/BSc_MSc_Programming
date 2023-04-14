#include <stdio.h>
#include <stdlib.h>
#define SIZE 25
int que[SIZE],front = 0, rear = 0;

//array is starting from 0 index.

int a[10000][10000], dist[10000], prev[10000], s_dist[10000];
int vertex, edge, temp, visited[100];
int i,j,n;

void asc()
{
    for (i=front; i<rear; i++)      //////rare is used here for undefined number
        for(j=i+1; j<rear; j++)
            if(que[i]>que[j])
            {
                temp=que[j];
                que[j]=que[i];
                que[i]=temp;
            }
    /*for(i=0; i<rear; i++)
    printf("%d\t",que[i]);*/
}
void clr_q()
{
    for(i=0; i<vertex; i++)
        que[i]=0;
        rear = 0;
}

void h(int v)
{
    if(visited[v]==0)               //checked if visited
    {
        visited[v] = 1;             //marked as visited
        for(i=0; i<vertex; i++)
            if(a[v][i]!=0 && visited[i]==0)        //check adjacency matrix and visited node
            {
                if(s_dist[i]!=0)
                {
                    que[rear] = s_dist[i];
                    rear++;
                }
                else
                    break;
                //return;
            }
        asc();
        for(i=0; i<vertex; i++)
        {
            if(s_dist[i] == que[0] && s_dist[i]!=0)
            {
                n = i;
                printf("%d -> ",i);
            }
            else if(s_dist[i] == que[0])
            {
                printf("%d",i);
            }
        }
        clr_q();
        h(n);
    }
    //return 0;
}

int main()
{
    freopen("saif2.txt", "r", stdin);

    int m, n, i, j, k, w8, s;
    printf("Enter total vertex: \n");
    scanf("%d", &vertex);

    printf("Enter total edge: \n");
    scanf("%d", &edge);

    for(i=0; i<vertex; i++)
    {
        s_dist[i]=0;
        visited[i]=0;
    }

    for(i=0; i<vertex; i++)
    {
        for(j=0; j<vertex; j++)
        {
            a[i][j]=0;
        }
    }

    printf("Enter Straight distance : \n");
    for(int i = 0; i< vertex; i++)
    {
        scanf("%d", &s_dist[i]);
    }

    printf("Enter edges and weight: \n");
    for(int i = 0; i< edge; i++)
    {
        scanf("%d %d %d", &m, &n, &w8);
        a[m][n] = w8;
    }

    printf("Enter Source : \n\n");
    scanf("%d",&s);

    printf("%d -> ",s);
    h(s);

    /*dist[s] = 0;

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

    for(int i = 0; i< vertex; i++)
    {
        printf("Dist(%d) = %d\n", i, s_dist[i]);
    }*/
    return 0;
}
