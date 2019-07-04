#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void mergeSort(char a[],int s,int e,char temp[])
{
    if(s>=e)
       return;

     int mid=(s+e)/2;
     mergeSort(a,s,mid,temp);
     mergeSort(a,mid+1,e,temp);

     simpleMerge(a,mid,s,e,temp);

}

 void simpleMerge(char a[],int mid,int s,int e,char temp[])
{
    int i=s;
    int j=mid+1;
    int k=s;

    while(i<=mid&&j<=e)
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=mid)
        temp[k++]=a[i++];
    while(j<=e)
        temp[k++]=a[j++];

    for(i=s;i<=e;i++)
    {
        a[i]=temp[i];
    }

}

void main()
{
    int n,i;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[30];
    int temp[30];
    for(i=0;i<n;i++)
    {
        a[i]=rand();
    }




    clock_t start,end;
    double cputime;
    start=clock();

    mergeSort(a,0,n-1,temp);



    end=clock();
   for(i=0;i<n;i++)

    cputime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("\ntime is %lf",cputime);


}



