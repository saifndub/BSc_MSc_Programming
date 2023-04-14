#include<stdio.h>
int a[20][20],d[20], q[20], visited[20], n, i, j, f = 1, r = 0,v;

void bfs(int v) {
	for(i = 1; i <= n; i++)
		{
		    if(a[v][i]==1 && !visited[i])
			{
			     d[i] = d[v] + 1; printf(" %d= %d ",i,d[i]);
			    q[++r] = i;

			}
		}

	if(f <= r) {
		visited[q[f]] = 1;
		bfs(q[f++]);
	}

}

void main() {

	printf("\n Enter the number of vertices:");
	scanf("%d", &n);

	for(i=1; i <= n; i++) {
		q[i] = 0;
		visited[i] = 0;
	}

	printf("\n Enter graph data in matrix form:\n");
	for(i=1; i<=n; i++) {
		for(j=1;j<=n;j++) {
			scanf("%d", &a[i][j]);
		}
	}

	printf("\n Enter the starting vertex:");
	scanf("%d", &v);

	visited[v] = 1;
	bfs(v);
	printf("\n The node which are reachable are:\n");

	for(i=1; i <= n; i++) {
		if(visited[i])
			printf("%d\t", i);
		else {
			printf("\n Bfs is not possible. Not all nodes are reachable");
			break;
		}
	}
	for(i=1;i<=n ; i++)
        printf(" v%d= %d ",i,d[i]);
}
