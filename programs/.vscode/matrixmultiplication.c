#include<stdio.h>
int main()
{
    int n,m,p,q;
    printf("Enter order or matrix 1 means value of n and m:");
    scanf("%d %d",&n,&m);
    printf("Enter order or matrix 2 means value of p and q:");
    scanf("%d %d",&p,&q);
    int m1[n][m],m2[p][q],m3[n][q];
    printf("Enter values of matrix 1: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&m1[i][j]);
        }
        
    }

    printf("Enter values of matrix 2: \n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&m2[i][j]);   
        }
    }
    if(n==q)
    {
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<q;j++)
           {
            int s=0;
            for(int k=0;k<n;k++)
            {
              s=s+m1[i][k]*m2[k][j];
            }
             m3[i][j]=s;
           }   
        }
       printf("Matrix 3 after multiplication are: \n");
       for(int i=0;i<n;i++)
      {
          for(int j=0;j<p;j++)
          {
            printf("%d ",m3[i][j]);
          }
        printf("\n");
      }
    }
    else
       printf("Multiplication of matrix is not possible.");
    return 0;
}