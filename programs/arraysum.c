#include<stdio.h>
#define n 10
int main()
{
    int arr[n]={1,2,3,4,5},ele,pos,i;
    printf("\n Elements of array are:");
    for(i=0;i<n-1;i++)
    {
       printf("%d ",arr[i]);
    }
    printf("Enter position of element:\n");
    scanf("%d",&pos);
    printf("Enter element:\n");
    scanf("%d",&ele);
    for(int i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
    for(i=0;i<n-1;i++)
    {
       printf("%d ",arr[i]);
    }
}