#include<stdio.h>
int rev=0,last,k;
int reverse(int a)
{
    int i;
    for(i=a;i!=0;i=i/10)
    {
        last=i%10;
        rev=rev*10+last;
    }
    return rev;
}
void palindrome(int k,int n)
{
    if(n==k)
      printf("\nits is a palindrome num");
    else
      printf("\nNot Palindrome");
}
void amstrom(int n)
{
    int i,re=0,l;
    for(i=n;i!=0;i=i/10)
    {
      l=i%10;
      re=re+l*l*l;
    }
    if(n==re)
       printf("\nits a amstrong number");
    else  
       printf("\nnot amstrong");
}
int main()
{
    int n,r;
    printf("Enter a number:");
    scanf("%d",&n);
    r=reverse(n);
    printf("\nreverse of a number is:%d",r);
    palindrome(r,n);
    amstrom(n);
}