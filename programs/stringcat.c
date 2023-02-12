#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50], str2[50], str3[50],i, j;
   printf("\nEnter first string: ");
   scanf("%s",str1);
   printf("\nEnter second string: ");
   scanf("%s",str2);
   for(i=0; str1[i]!='\0'; i++); 

   for(j=0; str2[j]!='\0'; j++, i++)
   {
      str1[i]=str2[j];
   }
   str1[i]='\0';
    int l=strlen(str1);
    for(int i=0;i<=l;i++)
    {
        str3[i]=str1[i];
    }
    printf("%s",str3);
    return 0;
}