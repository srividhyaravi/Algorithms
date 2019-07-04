#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
    int i,j,key;
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

     for (i=1;i<n;i++)
   {
       key=a[i];
       j=i-1;

       while(j>=0 && a[j]>key)
       {
           a[j+1]=a[j];
           j=j-1;
       }
       a[j+1]=key;
   }


   end=clock();
    cputime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("time is %lf",cputime);

}
