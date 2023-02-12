#include<stdio.h>



int * bubblesort(int ar[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
       for(j=0;j<n-1-i;j++)
          if(ar[j]>ar[j+1]){
              temp=ar[j];
              ar[j]=ar[j+1];
              ar[j+1]=temp;
          }
    return ar;          
}

int main()
{
    int size,i,j,*p;
    printf("Enter size of array :\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements in array :\n");
    for(i=0;i<size;i++)
      scanf("%d",&arr[i]);
    printf("Elements of array are:\n");
    for(j=0;j<size;j++)
      printf("%d ",arr[j]);
    p=bubblesort(arr,size);
    printf("\nAfter sorted array using bubble sort is:");
    for(i=0;i<size;i++)
       printf("%d ",p[i]);
    return 0;
}