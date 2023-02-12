#include<stdio.h>
int main()
{   
    float c,fh;
    printf("Engter vale in fehreignit:");
    scanf("%f",&fh);
    c=(fh-32)*5/9;
    printf("In centegrade :%0.3f",c);
    return 0;
}