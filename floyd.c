#include<stdio.h>
void flyod(int r[10][10],int n)
{
    int i,j,k;
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
           for(j=1;j<=n;j++)
              r[i][j]=min(r[i][j],r[i][k]+r[k][j]);
}

int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;

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

    flyod(r,n);

     printf("the final obtained matrix is\n");
      for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%d\t",r[i][j]);
        printf("\n");
    }

}










