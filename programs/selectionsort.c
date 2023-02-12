#include<stdio.h>

void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}

int * selectionsort(int ar[],int n)
{
    int temp,i,j,min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=1;j<=n;j++)
            if(ar[j]<ar[min])
               min=j;
        swap(ar[min],ar[i]);
    }
   return ar;    
}

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
    int size,i,j,*p,*l,*h;
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
    l=selectionsort(arr,size);
    printf("\nAfter sorted array using selection sort is:");
    for(i=0;i<size;i++)
       printf("%d ",l[i]);
    h=selectionsort(arr,size);
    printf("\nAfter sorted array using insertion sort is:");
    for(i=0;i<size;i++)
       printf("%d ",h[i]);
    return 0;
    
}