#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * link;
};
struct node * root;

void createSLL()
{
    struct node * ptr,*cpt;
    int ch;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter node data:");
    scanf("%d",&ptr->data);
    root=ptr;
    do
    {
        cpt=(struct node*)malloc(sizeof(struct node));
        printf("\n Enter node data:");
        scanf("%d",&cpt->data);
        ptr->link=cpt;
        cpt->link=NULL;
        ptr=cpt;
        printf("\nPress 1 for more node and 0 for no node :");
        scanf("%d",&ch);
    } while(ch==1);
    
}
void traverse()
{
    struct node * ptr;
    ptr=root;
    while(ptr!=NULL)
    {
        printf(" %d",ptr->data);
        ptr=ptr->link;
    }
}
void swap(int loc)
{
   struct node *ptr1,*ptr2,*ptr3;
   int i=1;
   ptr1=root;
   while(i<loc-1)
      {ptr1=ptr1->link;
      i++;}
   ptr2=ptr1->link;
   ptr3=ptr2->link;
   ptr2->link=ptr3->link;
   ptr3->link=ptr2;
   ptr1->link=ptr3;
}
int main()
{
    int loc;
    createSLL();
    traverse();
    printf("\n Enter location of node :");
    scanf("%d",&loc);
    swap(loc);
    printf("\nAfter swaping the nodes:");
    traverse();
}