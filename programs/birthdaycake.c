#include<stdio.h>

int  birthdaycake(long ar[],long n)
{
   long max=ar[0];
   int c=0;
   for(int i=1;i<n;i++)
   {
       if(ar[i]>max)
       {
           max=ar[i];
       }
   }
   for(int i=0;i<n;i++)
   {
       if(max==ar[i])
       {
           c++;
       }
   }
   return c;

}

int main()
{
    long n,p;
    printf("Enter value of n:\n");
    scanf("%ld",&n);
    long arr[n];
    printf("\nenter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%ld ",&arr[i]);
    }
    printf("%d",birthdaycake(arr,n));
}