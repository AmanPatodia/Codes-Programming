#include<stdio.h>

int * insertionsort(int ar[],int n)
{
    int temp,i,j;
    for(i=1;i<n;i++)
    {
        temp=ar[i];
        j=i-1;
        while(j>=0 && ar[j]>temp)
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=temp;
    }
    return ar;
}

int main()
{
    int size;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements of array:\n",size);
    for(int i=0;i<size;i++)
      scanf("%d",&arr[i]);
    printf("Elements of array are:\n");
    for(int i=0;i<size;i++)
       printf("%d ",arr[i]);
    int *p=insertionsort(arr,size);
    printf("\nAfter sorting array using insertion sort :\n");
    for(int i=0;i<size;i++)
       printf("%d ",p[i]);
    return 0;
}