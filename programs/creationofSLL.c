
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node *root;

void CreationSLL()
{
    struct node *ptr;
    int ch;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter node data:");
    scanf("%d",&ptr->data);
    ptr->link=NULL;
    root=ptr;
     do
     {
        struct node *cpt;
        cpt=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter node data:");
        scanf("%d",&cpt->data);
        ptr->link=cpt;
        cpt->link=NULL;
        ptr=cpt;
         printf("\nPress 1 for more node and 0 for no node:");
         scanf("%d",&ch);
     }while(ch==1);
    
    
}
void InsertBeg()
{
    struct node *spt;
    spt=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter node data you want to insert at the begning :");
    scanf("%d",&spt->data);
    spt->link=root;
    root=spt;
}
void InsertEnd()
{
   struct node *qpt,*wpt;
   wpt=root;
   qpt=(struct node*)malloc(sizeof(struct node));
   printf("\nEnter node data you want to insert at the end :");
   scanf("%d",&qpt->data);
   while(wpt->link!=NULL)
       wpt=wpt->link;
   wpt->link=qpt;
   qpt->link=NULL;
}
void InsertAfter()
{
    struct node *spt,*ppt;
    int key;
    spt=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter node data you want to insert after a node :");
    scanf("%d",&spt->data);
    spt->link=NULL;
    printf("\nEnter value of key(data of node) after you want to insert the new node:");
    scanf("%d",&key);
    ppt=root;
    while(ppt->data!=key)
       ppt=ppt->link;
    spt->link=ppt->link;
    ppt->link=spt;
}
void deletenode()
{
    struct node * ptr,*cpt;
    int key;
    printf("\nEnter a node data which you want to delete :");
    scanf("%d",&key);
    ptr=root;
    while(ptr->data!=key)
       ptr=ptr->link;
    cpt=root;
    while(cpt->link!=ptr)
      cpt=cpt->link;
    cpt->link=ptr->link;
    free(ptr);
}
void traverse()
{
    struct node *ppt;
    ppt=root;
    while(ppt!=NULL)
    {
        printf(" %d",ppt->data);
        ppt=ppt->link;
    }
}
int main() {
    CreationSLL();
    traverse();
    InsertBeg();
    traverse();
    InsertEnd();
    traverse();
    InsertAfter();
    traverse();
    deletenode();
    traverse();
    
}