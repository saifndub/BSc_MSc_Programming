#include<stdio.h>
int N,Q,B[10][10],P[100][100],n,F[100];
float Fit[100];
main()
{
    int i,j,sum=0;

    printf("Total Population =");
    scanf("%d",&N);

    printf("Total Queens = ");
    scanf("%d",&Q);

    for(i=1;i<=N;i++)
    {
        for(j=1;j<=Q;j++)
        {
            n=random();
            B[j][n]=1;
            P[i][j]=n;
            printf("%d",P[i][j]);
        }
        printf("\n\n");
        Board();
        F[i] = 28 - fit();
        sum = sum + F[i];
        initial();
        printf("F[%d]=%d\n",i,F[i]);
    }
    printf("Sum = %d\n",sum);
    for(i = 1;i <= N;i++)
    {
        printf("%d  %d\n",F[i],sum);
        Fit[i] = F[i] / sum * 100;
        printf("Fit[%d] = %.2f\n",i,Fit[i]);
    }
}

initial()
{
    int i,j;
    for(i = 1;i <= 8; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            B[i][j]=0;
        }
    }
}

int random()
{
    int random = rand() % Q + 1;
    return random;
}

Board()
{
    int i,j;
    for(i=1;i<=Q;i++)
    {
        for(j=1;j<=Q;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n\n");
    }
}

fit()
{
    int count=0;
    int i,j;
    for(i = 1;i <= Q; i++)
    {
        for (j = 1; j <= Q; j++)
        {
            if((B[i][j]==1) && (attack(i,j)==1))
            {
                count++;
            }

        }
    }
    return count;

}

attack(int i,int j,int count)
{
    int k,l;
    for(k=i+1;k<=Q;k++)
    {
        if(B[k][j] == 1)
        {
            printf("[%d,%d],[%d,%d]  Attack side\n",i,j,k,j);
            return 1;
        }

    }
    for(k=i+1;k<=Q;k++)
    {
        for(l=1;l<=Q;l++)
        {
            if(((k+l) == (i+j)) || ((k-l) == (i-j)))
            {
                if(B[k][l] == 1)
                {
                    printf("[%d,%d],[%d,%d] Attack diagonal\n",i,j,k,j);
                    return 1;
                }
            }
        }
    }
    return 0;
}
