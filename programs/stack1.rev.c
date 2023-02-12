#include<stdio.h>
#include<stdlib.h>
#define SIZE 9
#define SIZE1 6
char STACK[SIZE],STACK1[SIZE1];
int top=-1,top1=-1;
void insertion_stack()
{
    int ele;
  if(top==SIZE-1)
     printf("\n Stack is full:");
  else{
      top++;
      printf("\nEnter element:");
      scanf(" %c",&ele);
      STACK[top]=ele;
  }
}
void check()
{
    char key;
    for(int i=top;i>=0;i--)
    {
       if(STACK[i]>=65 && STACK[i]<=90||STACK[i]>=97 && STACK[i]<=122)
       {
           top1++;
           STACK1[top1]=STACK[i];
       }
       else{
           key=STACK[i];
       }
    }
}
void display()
{
    for(int i=0;i<=top;i++)
       printf(" %c",STACK[i]);
}
void display1()
{
  for(int i=0;i<=top1;i++)
       printf(" %c",STACK1[i]);   
}
int main()
{
    for(int i=0;i<SIZE;i++)
       insertion_stack();
    display();
    check();
    printf("\n");
    display1();

}