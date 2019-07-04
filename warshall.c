#include<stdio.h>
void warshall(int r[10][10],int n)
{
    int i,j,k;
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
           for(j=1;j<=n;j++)
           r[i][j]=(r[i][j]||(r[i][k]&&r[k][j]));
}

void main()
{
    int r[10][10],i,j,n;
    printf("enter the no of vertices\n");
    scanf("%d",&n);
    printf("enter the adjacency matrix\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
          scanf("%d",&r[i][j]);

    warshall(r,n);

    printf("transitive closure is\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%d\t",r[i][j]);
        printf("\n");
    }

}
