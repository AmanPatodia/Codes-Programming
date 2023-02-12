#include<stdio.h>

int  topper_marks(int arr[],int n)
{
    int i,max=arr[0];
    for(i=1;i<n;i++)
    {
       if(arr[i]>max)
          max=arr[i];
    }
    return max;
}

int main()
{
    int size;
    printf("Enter no of student in class:");
    scanf("%d",&size);
    int ar[size];
    printf("Enter %d students marks :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    int p=topper_marks(ar,size);
    printf("Highest marks in class is %d",p);
    return 0;
}