#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
void conversion(char s[])
{
  int hh,mm,ss;
    hh = (s[0] - '0') * 10 + (s[1] - '0');
    mm = (s[3] - '0') * 10 + (s[4] - '0');
    ss = (s[6] - '0') * 10 + (s[7] - '0');

    if (hh < 12 && s[8] == 'P') hh += 12;
    if (hh == 12 && s[8] == 'A') hh = 0;

    printf("\n%02d:%02d:%02d\n", hh, mm, ss);
 
}

int main()
{ 
    char st[10];
    printf("Enter time if format hh:min:sec(AM/PM):");
    scanf("%s",st);
    printf("%s",st);
    conversion(st);
}