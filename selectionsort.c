#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
    int i,j,temp,min;
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }
     clock_t start,end;
    double cputime;
    start=clock();

    for(i=0;i<n-1;i++)
    {
        min=i;
         for(j=i+1;j<n;j++)
          {
              if(a[j]<a[min])
               min=j;
          }

         temp=a[i];
         a[i]=a[min];
         a[min]=temp;
    }
     end=clock();
    for(i=0;i<n;i++)
    {
        printf("\n%d\n",a[i]);
    }

    cputime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("time is %lf",cputime);
}

