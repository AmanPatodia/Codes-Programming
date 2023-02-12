#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *top=NULL;

void insert()
{
  struct node*temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter node data:");
  scanf("%d",&temp->data);
  temp->link=top;
  top=temp;
}

void pop()
{
   struct node *temp;
   if(top==NULL)
     printf("Empty ");
   else{
       temp=top;
       printf("\ndeleted element :%d",temp->data);
       top=top->link;
       temp->link=NULL;
    }
}

void traverse()
{
    struct node *temp;
    if(top==NULL)
      printf("No Elements");
    else
    {
        temp=top;
        while(temp!=NULL)
        {
          printf(" \n%d",temp->data);
          temp=temp->link;
        }
    }
}
int main()
{
  int n,m;
  printf("\nEnter how many nodes you want to insert in stack:");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
     insert();
  traverse();
  printf("\nEnter how many nodes you want to delete in stack:");
  scanf("%d",&m);
  for(int i=0;i<m;i++)
     pop();
  traverse();
}