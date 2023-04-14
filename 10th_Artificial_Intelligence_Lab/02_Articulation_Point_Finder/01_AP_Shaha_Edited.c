#include<stdio.h>

void DFS(int);
int G[10][10],visited[10],n,Temp[10];

void main()
{
    int i,j,k,count=0;

    scanf("%d",&n);
    printf("number of vertices: %d\n",n);



    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&G[i][j]);
    printf("\nadjecency matrix of the graph:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",G[i][j]);
        }
        printf("\n\n");
    }


    for(k=0; k<n; k++)
    {
        for(j=0; j<n; j++)
        {
            Temp[j]=G[k][j];
            G[k][j]=0;
            G[j][k]=0;
        }
        for(i=0; i<n; i++)
        {
            visited[i]=0;
        }
        for(i=0; i<n; i++)
        {
            if(i==k)
            {
                continue;
            }
            if(visited[i]==0)
            {
                DFS(i);
                count++;
            }
        }
        //printf("\n%d",count);
        if(count>1)
        {
            printf("\nPoint %d is a articulation point\n",k);
        }

        for(j=0; j<n; j++)
        {
            G[k][j]=Temp[j];
            G[j][k]=Temp[j];
        }
        count=0;
    }
    //fclose(fptrr);
}

void DFS(int i)
{
    int j;
    visited[i]=1;

    for(j=0; j<n; j++)
        if(!visited[j]&&G[i][j]==1)
        {
            DFS(j);
        }
}
