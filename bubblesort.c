#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
    int i,j,temp;
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=rand();
    }

    clock_t start,end;
    double cputime;
    start=clock();

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    end=clock();
    printf("sorted:\n");
    for(i=0;i<n;i++)
        printf("%d",i);
    cputime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("time is %lf",cputime);
}
