#include<stdio.h>
#include<stdlib.h>
int a,b;
int leftdiagnol(int a,int b,int arr1[a][b])
{
    int sum1=0;
    for(int i=0;i<a;i++)
      for(int j=0;j<b;j++)
         if(i==j)
           sum1=sum1+arr1[i][j];
    return sum1;
}
int rightdiagnol(int a,int b,int arr1[a][b])
{
    int sum2=0;
    for(int i=0;i<a;i++)
      for(int j=0;j<b;j++)
         if((i+j)==a-1)
           sum2=sum2+arr1[i][j];
    return sum2;
}

int main()
{
  int n,m,sub1,s1,s2;
  printf("Enter value of n:");
  scanf("%d",&n);
  m=n;
  int arr1[n][m];
  for(int i=0;i<n;i++){
      printf("\nEnter elements row wise %d:",i+1);
      for(int j=0;j<m;j++)
       scanf("%d",&arr1[i][j]);
  }
  //printf("%d",abs(leftdiagnol(arr1)-rightdiagnol(arr1)));
  s1=leftdiagnol(n,m,arr1);
  s2=rightdiagnol(n,m,arr1);
  sub1=abs(s1-s2);
  printf("difference is :%d",sub1);
  return 0;
}