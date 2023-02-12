#include<stdio.h>

int check(int x,int y)
{
    if(x==y || x>y)
        return 1;
    else 
       return 0;
}

int main()
{
    int x,y,z;
    scanf("%d %d",&x,&y);
    z=check(x,y);
    if(z==1)
      printf("YES");
    else 
      printf("NO");
    return 0;
}