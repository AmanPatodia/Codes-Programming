#include<stdio.h>
#include<stdlib.h>

struct node 
{
    struct node * lpt;
    char info;
    struct node * rpt;
};
struct node * first;

void create_doubly_LL()
{
    struct node *ptr,*cpt;
    int ch;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter node data:");
    scanf(" %c",&ptr->info);
    first=ptr;
    ptr->lpt=ptr->rpt=first;
    do
    {
      cpt=(struct node *)malloc(sizeof(struct node));
      printf("\n Enter node data:");
      scanf(" %c",&cpt->info);
      cpt->rpt=first;
      cpt->lpt=ptr;
      ptr->rpt=cpt;
      first->lpt=cpt;
      ptr=cpt;
      printf("\nPress 1 for more node and 0 for exit:");
      scanf("%d",&ch);
    } while (ch==1);
    
}
void display()
{
  struct node * ptr;
  ptr=first;
  while(ptr->rpt!=first)
  {
      printf(" %c",ptr->info);
      ptr=ptr->rpt;
  }
  printf(" %c",ptr->info);
}
void display_rev()
{
    struct node * ptr;
    ptr=first;
    ptr=ptr->lpt;
    while(ptr!=first)
    {
        printf(" %c",ptr->info);
        ptr=ptr->lpt;
    }
    printf(" %c",ptr->info);
}
void insert_beg()
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("\n Enter data of new node which is inserted in first position:");
    scanf(" %c",&ptr->info);
    ptr->lpt=first->lpt;
    ptr->rpt=first;
    first->lpt->rpt=ptr;
    first->lpt=ptr;
    first=ptr;
}
void insert_end()
{
    struct node * ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter new node data that inserted in the end:");
    scanf(" %c",&ptr->info);
    ptr->lpt=first->lpt;
    ptr->rpt=first;
    first->lpt->rpt=ptr;
    first->lpt=ptr;
}
int main()
{
    create_doubly_LL();
    display();
    printf("\n");
    display_rev();
    insert_beg();
    display();
    insert_end();
    display();
}