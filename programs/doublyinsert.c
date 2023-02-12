#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node * lpt;
    char info;
    struct node * rpt;
};
struct node * first;

void create_doublyLL()
{
    struct node *ptr,*cpt;
    int ch;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter node data:");
    scanf(" %c",&ptr->info);
    first=ptr;
    ptr->lpt=ptr->rpt=NULL;
    do
    {
     cpt=(struct node*)malloc(sizeof(struct node));
     printf("\nEnter node data:");
     scanf(" %c",&cpt->info);
     cpt->lpt=ptr;
     cpt->rpt=NULL;
     ptr->rpt=cpt;
     ptr=cpt;
     printf(" Press 1 for more node and 0 for exit:");
     scanf("%d",&ch);
    } while (ch==1); 
}
void display()
{
    struct node* ptr;
    ptr=first;
    while(ptr!=NULL)
    {
        printf(" %c",ptr->info);
        ptr=ptr->rpt;
    }
}
void insert_beg()
{
  struct node * ptr;
  ptr=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter new node data which has been inserted in first position:");
  scanf(" %c",&ptr->info);
  ptr->lpt=NULL;
  ptr->rpt=first;
  first->lpt=ptr;
  first=ptr;
}
void insert_end()
{
    struct node * ptr,*cpt;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter new node data which wants to insert at the end position:");
    scanf(" %c",&ptr->info);
    ptr->rpt=NULL;
    cpt=first;
    while(cpt->rpt!=NULL)
        cpt=cpt->rpt;
    ptr->lpt=cpt;
    cpt->rpt=ptr;
}
void insert_after()
{
    struct node *ptr,*cpt;
    int data;
    printf("\nEnter data after you want to insert a new node : ");
    scanf(" %c",&data);
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter new node data:");
    scanf(" %c",&ptr->info);
    cpt=first;
    while(cpt->info!=data)
       cpt=cpt->rpt;
    ptr->rpt=cpt->rpt;
    ptr->lpt=cpt;
    cpt->rpt->lpt=ptr;
    cpt->rpt=ptr;
}
void delete_beg()
{
    struct node * ptr;
    ptr=first;
    first=ptr->rpt;
    free(ptr);
    first->lpt=NULL;
}
void delete_end()
{
    struct node * ptr;
    ptr=first;
    while(ptr->rpt!=NULL)
       ptr=ptr->rpt;
    ptr->lpt->rpt=NULL;
    free(ptr);
}
void delete_after()
{
   struct node * ptr;
   char data;
   ptr=first;
   printf("\n Enter data of node which you want to delete:");
   scanf(" %c",&data);
   while(ptr->info!=data)
     ptr=ptr->rpt;
   ptr->lpt->rpt=ptr->rpt;
   ptr->rpt->lpt=ptr->lpt;
   free(ptr);
}
int main()
{
    create_doublyLL();
    display();
    insert_beg();
    display();
    insert_end();
    display();
    insert_after();
    display();
    printf("\n Deletion of first node:\n");
    delete_beg();
    display();
    printf("\nDeletion of last node :\n");
    delete_end();
    display();
    delete_after();
    display();
}