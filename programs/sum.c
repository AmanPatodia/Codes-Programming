#include<stdio.h>
int sum();
int main()
{
    int s;
    printf("\n Going to calculate sum of two numbers");
    s = sum();
    printf("The sum is %d",s);
}
int sum()
{
    int a,b,sum;
    printf("\nEnter two Numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    return sum;
}