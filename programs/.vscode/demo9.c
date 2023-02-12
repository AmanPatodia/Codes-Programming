#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\nName: Tamana Jangra \nRollNo: 21607 \n\n");
    char *pcData = NULL;
    float *pfData = NULL; 
    printf(" Address of character pointer before incrementation = %d\n\n", pcData);
    printf(" Address of float pointer before incrementation = %d\n\n", pfData);
    pcData++;  
    pfData++; 
    printf(" Address of character pointer After incrementation = %d\n\n", pcData);
    printf(" Address of float pointer After incrementation = %d\n\n", pfData);
    return 0;
}