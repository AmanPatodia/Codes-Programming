#include<stdio.h>
void plusminus(int ar[],int);
int main()
{
    int i,j,size;
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("\n Enter elements :");
    for(i=0;i<size;i++){
       scanf("%d",&arr[i]);}
    printf("\nElements of array is:");
    for(j=0;j<size;j++){
       printf("%d",arr[j]);}
    plusminus(arr,size);
    return 0;
}

void plusminus(int ar[],int n)
{
   int i;
   float x,y,z,c1=0,c2=0,c3=0;
   for(i=0;i<n;i++)
   {
       if(ar[i]>0)
           c1++;
       else if(ar[i]==0)
           c2++;
       else
          c3++;
   }
   float m=(float) n;
   x=c1/m;
   y=c2/m;
   z=c3/m;
   printf("\nRatio of positive numbers in array is:%.6f",x);
   printf("\nRatio of negative numbers in array is:%.6f",y);
   printf("\nRatio of zero numbers in array is:%.6f",z);
}