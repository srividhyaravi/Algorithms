#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,src,n;
    printf("\nenter no of vertices :");
    scanf("%d",&n);
    int a[n][n],s[n],q[n];
    printf("\nenter the adjacency matrix:");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
           scanf("%d",&a[i][j]);

     printf("\nenter the source vertex:");
     scanf("%d",&src);
        for(i=0;i<n;i++)
            s[i]=0;

        int f=0,r=0;
        q[r]=src;
        s[src]=1;

        while(f<=r)
        {

            int u=q[f];
            f=f+1;

            for(i=u;i<n;i++)
            {
                int v=i;
                if(a[u][v]==1 && s[v]==0)
                {
                    s[v]=1;
                    q[r]=v;
                    r=r+1;
                    printf("\n %d is reachable from %d",(v+1),(u+1));
                }

                else if(u==v)
                {
                    printf("\n %d s reachable from %d",(v+1),(u+1));
                    if(u==n-1)
                    {
                        printf("\n");
                        exit(0);
                    }
                }
                else
                    printf("\n %d is not reachable from %d",(v+1),(u+1));
            }
        }







}
