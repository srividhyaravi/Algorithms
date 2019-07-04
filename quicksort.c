#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void quicksort(char a[],int low,int high)
{
    if(low<=high)
       {
        int pos=partition(a,low,high);
        quicksort(a,low,pos-1);
        quicksort(a,pos+1,high);
       }
}

int partition(char a[],int low,int high)
{
    char key=a[low];
   int i=low+1;
    int j=high;
    while(i<=j)
    {
        while(a[i]<=key)
        {
            i=i+1;
        }

        while(a[j]>key)
        {
            j=j-1;
        }
        if(i<j)
        {
            char temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    char temp=a[low];
            a[low]=a[j];
            a[j]=temp;

    return j;

}


void main()
{
   int i,n;
 /*  printf("enter the no of elements\n");
   scanf("%d",&n);*/
   char a[30];
   printf("enter the string\n");
   scanf("%s",a);
   n=strlen(a);

   clock_t start,end;
    double cputime;
    start=clock();

    quicksort(a,0,n-1);

    end=clock();
    printf("\n string is %s",a);

        cputime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("\ntime is %lf",cputime);
}














