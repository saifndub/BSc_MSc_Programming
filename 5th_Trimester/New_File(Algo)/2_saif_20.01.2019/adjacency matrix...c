#include<stdio.h>
//#include<iostream>
int adj[100][100];
int main()
{
    int node,edge;
    int n1,n2,i,j;
    printf("Enter the number of node: ");
    scanf("%d",&node);
    printf("Enter the number of edge: ");
    scanf("%d",&edge);
    for( i=1; i<=edge; i++)
    {
        scanf("%d %d",&n1,&n2);
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    printf("Adjacency Matrix: \n\n");
    for(i=1; i<=node; i++)
    {
        printf("|");
        for(j=1; j<=node; j++)
        {
            printf("%d\t",adj[i][j]);
        }
        printf("|\n");
    }
    return 0;
}
