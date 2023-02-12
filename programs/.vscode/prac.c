#include<stdio.h>
#include<conio.h>
#define N 50
int main()
{
    int a[N][N],b[N][N],c[N][N],i,j,k,sum,m,n,p,q;

    printf("enter rows and columns for 1 matrix:");
    scanf("%d %d",&m,&n);

    printf("reading ist array:");
    for(i=0;i<m;i++)
    {
       
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     printf("enter rows and columns for 2 matrix:");
     scanf("%d %d",&p,&q);

    printf("reading second array:");
    for(i=0;i<p;i++)
    {
       
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     
     if(m!=q)
     {
        printf("cant be multiply");
     }

     else{
        printf("calculating product");
    
          for(i=0;i<m;i++)
            {
              for(j=0;j<q;j++)
                {
                  sum=0;
                  for(k=0;k<m;k++)
                    {
                       sum=sum+(a[i][k]*b[k][j]);
                    }
                       c[i][j]=sum;
                    
                }
            }
         }
     printf("array after multiplication:");
     for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("prodauct is :%d\t\t",c[i][j]);
        }
    }
    return 0;
}