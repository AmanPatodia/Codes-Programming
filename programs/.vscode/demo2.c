#include <stdio.h>
int main() 
{
  printf("\nName: Tamana Jangra \nRollNo: 21607 \n\n");
  char s1[100] = "programming ", s2[] = "is awesome";
  int length, j;

  
  printf("Before concatenation: \n");
  printf("s1 string is: ");
  puts(s1);
  printf("S2 string is: ");
  puts(s2);
  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }

  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }

  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}