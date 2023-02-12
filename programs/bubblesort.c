#include<stdio.h>
void bubblesort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nAfter sorting array :");
    for(int k=0;k<n;k++)
       printf("%d ",arr[k]);
}
int main()
{
  int size,i,j;
  printf("Enter size of array :");
  scanf("%d",&size);
  int arr[size];
  printf("\nEnter %d Elements of Array :",size);
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
   for(j=0;j<size;j++)
  {
    printf("%d ",arr[j]);
  }
  bubblesort(arr,size);

}