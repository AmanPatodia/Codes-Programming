#include <stdio.h>
#include <string.h>
 
union Data {
   int i;
   float f;
   char str[20];
};
enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main()
{
    
    enum week today;
    today = Wednesday;
    printf("\nName: Tamana Jangra \nRollNo: 21607 \n\n");
    printf("Using Enumerations: \n");
    printf("Day %d",today+1);

    union Data data;   
    printf("\n\nBelow output using  UNION: \n");     
    printf( "Memory size occupied by data : %d\n", sizeof(data));
    return 0;
}