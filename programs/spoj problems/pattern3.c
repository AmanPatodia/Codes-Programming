#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
      for(int j=0;j<n;j++){
          if(j<n-1-i)
              printf(" ");
          else 
             printf("*");
          }
      printf("\n");
      }
}