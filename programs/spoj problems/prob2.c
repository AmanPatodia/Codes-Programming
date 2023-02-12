#include<stdio.h>
void pprint(int l,int c)
{
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0||i==l-1||j==0||j==c-1)
                printf("*");
            else
                printf(".");
        }
        printf("\n");
    }
}
int main()
{
    int l,c,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
      scanf("%d %d",&l,&c);
      pprint(l,c);
    }
   return 0;
}
