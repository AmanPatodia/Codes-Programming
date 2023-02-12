#include<stdio.h>

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partation(int a[],int l,int h)
{
    int pivot=a[l];
    int i=l,j=h;
    do
    {
        do
        {
            i++;
        } while (a[i]<=pivot);
        do
        {
            j--;
        } while (a[i]>pivot);
        if(i<j)
          swap(&a[i],&a[j]); 
    }while(i<j);
    swap(&a[l],&a[j]);
    return j;
}

void Quicksort(int a[],int low,int high)
{ 
    int l;
    if(low<high)
    {
        l=partation(a,low,high);
        Quicksort(a,low,l);
        Quicksort(a,l+1,high);
    }
}

int main()
{
    int a[100],size,i,j;
    printf("Enter size of array :\n");
    scanf("%d",&size);
    printf("Enter elements in array :\n");
    for(i=0;i<size;i++)
      scanf("%d",&a[i]);
    printf("Elements of array are: ");
    for(j=0;j<size;j++)
      printf("%d ",a[j]);
    a[size]=65535;
    Quicksort(a,0,size);
    printf("After Sorting : ");
    for(j=0;j<size;j++)
      printf("%d ",a[j]);
   
}