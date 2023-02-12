#include<stdio.h>
#include<math.h>
#define n 3
#define m 3
int a1[n][m];
int a2[n][m];
int sub,s1=0,s2=0,s3=0,s4=0;
int main()
{
  printf("Enter elements in matrix1:\n");
  for(int i=0;i<n;i++)
  {printf("Enter element in row %d:",i+1);
      for(int j=0;j<m;j++)
      {
         scanf("%d",&a1[i][j]);
      }
  }
  printf("Enter elements in matrix2:\n");
  for(int i=0;i<n;i++)
  {printf("Enter element in row %d:",i+1);
      for(int j=0;j<m;j++)
      {
         scanf("%d",&a2[i][j]);
      }
  }
  printf(" \nElements of matrix1 are:");
  for(int i=0;i<n;i++)
  {printf("\n");
      for(int j=0;j<m;j++)
      {
         printf(" %d",a1[i][j]);
      }
  }
  printf("\nElements of matrix2 are:");
  for(int i=0;i<n;i++)
  {printf("\n");
      for(int j=0;j<m;j++)
      {
         printf(" %d",a2[i][j]);
      }
  }
  printf("\nLeft Diagnol of matrix1:");
  for(int i=0;i<n;i++)
  { 
      for(int j=0;j<m;j++)
      {
          if(i==j)
          {
              printf(" %d",a1[i][j]);
          }
      }
  }
  printf("\nLeft Diagnol of matrix2:");
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          if(i==j)
          {
              printf(" %d",a2[i][j]);
          }
      }
  }
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          if(i==j)
          {
              s1=s1+a1[i][j];
          }
      }
  }
  printf("\nSum of left diagnol elements of matrix1 are:%d",s1);
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          if(i==j)
          {
            s2=s2+a2[i][j];
          }
      }
  }
  printf("\nSum of left diagnol elements of matrix2 are:%d",s2);
  printf("\n Right diagnol of matrix1 are:");
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
        if((i+j)==2)
           printf(" %d",a1[i][j]);
      }
  }
  printf("\n Right diagnol of matrix2 are:");
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
        if((i+j)==2)
           printf(" %d",a2[i][j]);
      }
  }
   for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
        if((i+j)==2)
           s3=s3+a1[i][j];
      }
  }
  printf("\nsum of right diagnol of matrix1 is:%d",s3);
   for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
        if((i+j)==2)
           s4=s4+a2[i][j];
      }
  }
  printf("\nsum of right diagnol of matrix2 is:%d",s4);
  if(s3>s4)
     sub=(s3-s4);
  else
     sub=(s4-s3);
  printf("\nDifference of right diagnol of two matrixes :%d",sub);
   
}