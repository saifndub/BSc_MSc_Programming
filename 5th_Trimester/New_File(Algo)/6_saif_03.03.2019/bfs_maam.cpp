# include<stdio.h>
int a[20][20],q[20]={0},visited[20],count[20],v,n,i,j,f=0,r=-1;
void bfs(v){
     visited[v] = 1;
for(i=0;i<n;i++)
    if(a[v][i]==1 && visited[i]==0)
        {
            if(count[i]>=count[v]+1)
            {count[i] = count[v] + 1;
            }
            else
                count[i]=count[i];
     printf(" %d=%d ;",i,count[i]);
     q[++r]=i;
       }
    if( f<=r )
    {
     bfs(q[f++]);

    }
}
main(){
printf("\n\n Enter the number of nodes:");
scanf("%d",&n);
printf("\n Enter graph data in matrix form:\n");
  for(i=0;i<n;i++){
        visited[i]=0;
  count[i]=999999;
    for(j=0;j<n;j++){
    scanf("%d", &a[i][j]);
    }
  }
  printf("\n Enter the starting node :");
  scanf("%d", &v);
  count[v]=0;
  bfs(v);
  printf("\nThe node which are reachable are:\n");
  for(i=0; i<n; i++){
     if(visited[i]==1)
        printf("%d\t", i);
     else{
       printf("\n Bfs is not possible. Not all nodes are reachable");
       break;
        }
  }
  for(i=0;i<n ; i++)
        printf("\n distance(%d)= %d ",i,count[i]);

}
