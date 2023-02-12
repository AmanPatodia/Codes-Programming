#include<stdio.h>
int main()
{
    int ar[5]={2,5,4,7,10},i=0;
    printf("addresses :    ");
    for( ;i<5;i++)
    {
        printf("%u \n",&ar[i]);
    }
    return 0;
}