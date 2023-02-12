#include<stdio.h>
#define n 5
int minisum(int ar[],int);
int maxsum(int ar[],int);
int * bubblesort(int ar[],int m)
{
    int temp;
    for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
               temp=ar[j];
               ar[j]=ar[j+1];
               ar[j+1]=temp;
            }
        }
    }
    return ar;
}

int minisum(int ar[],int k)
{
    int sum=0;
    for(int i=0;i<k-1;i++)
    {
        sum=sum+ar[i];
    }
    return sum;
}

int maxsum(int ar[],int l)
{
    int sum=0;
    for(int i=l;i>0;i--)
    {
        sum=sum+ar[i];
    }
    return sum;
}
int main()
{
   int arr[n];
   printf("\nEnter elements of array:");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("\nElements of array are:");
   for(int i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }
    int *arrr= bubblesort(arr,n);
    printf("\nArray after sorted:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arrr[i]);
    }
    int min =minisum(arrr,n);
    printf("\nMinimum sum is :%d",min);
    int max=maxsum(arrr,n);
    printf("\nMaximum sum is :%d",max);
    return 0;
}