 #include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements:");
    scanf("%d",&n);
    int ar[n];
    long  sum=1000000000;
    for(int i=0;i<n;i++)
    {
     scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
     sum=sum+ar[i];
    }
    printf("%ld",sum);
    
}
