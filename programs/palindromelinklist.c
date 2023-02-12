#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void createSLL();
void traverse();
void palindrome();

struct node
{
    int data;
    struct node *link;
};
struct node * root;

void createSLL()
{
    struct node* ptr,*cpt;
    int ch;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter node data:");
    scanf("%d",&ptr->data);
    ptr->link=NULL;
    root=ptr;
    do
    { 
      cpt=(struct node*)malloc(sizeof(struct node));
      printf("\nEnter node data:");
      scanf("%d",&cpt->data);
      ptr->link=cpt;
      cpt->link=NULL;
      ptr=cpt;
      printf("\nIf you want to create more node press 1 otherwise 0:");
      scanf("%d",&ch);
    } while(ch==1);
}

void traverse()
{
   struct node *ptr;
   ptr=root;
   while(ptr!=NULL)
   {
       printf(" %d",ptr->data);
       ptr=ptr->link;
   }
}
void palindrome()
{
   int key,num=0,p,count=0,rev=0,last;
   struct node *ptr;
   ptr=root;
   while(ptr!=NULL)
   {
       key=ptr->data;
       p=pow(10,count);
       num=num+key*p;
       count++;
       ptr=ptr->link;
   }
   for(int i=num;i!=0;i=i/10)
   {
     last=num%10;
     rev=rev*10+last;
   }
   if(num==rev)
     printf("\nINPUT LINKEDLIST IS PALINDROME");
   else
     printf("\nNOT PALINDROME..!!");
}

int main()
{
    createSLL();
    traverse();
    palindrome();
}