#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20]="TAMANA";
    char str2[20]="JANGRA";
    char str3[20];
    unsigned char str;
    char str4[20]="Riya iS a good girl";
    printf("\nString1 is :%s",str1);
    printf("\nString2 is :%s",str2);
    printf("\nlength of string1 : %d ",strlen(str1));
    strcpy(str3,str2);
    printf("\n copy of string2 to string3 is: %s",str3);
    strcat(str1,str2);
    printf("\nconcatination of string1 and string 2  is : %s",str1);
    if(strcmp(str1,str2)==0)
        printf("\nStrings are equal ");
    else 
      printf("\nString1 and String 2 is not equal");
    printf("\nReverse of string1 : %s",strrev(str1));
    str=strstr(str4,"good");
    printf("\nSubstring is: %c",str); 
    return 0;

}