#include<stdio.h>
int main()
{
    struct node
    {
        int info;
        struct node*first;
    };
    struct node*first;
    void create()
    {
        struct node*ptr,*cpt,*first;
        char ch;
        first=(struct node*)malloc(size of(struct node));
        scanf("%d",&first->info);
        first->link=NULL;
        cpt=first;
        do
        {
          ptr=(struct node*)malloc(size of(struct node));
          scanf("%d",&ptr->info);
          cpt->link=ptr;
          ptr->link=NULL;
          cpt=ptr;
          printf("press y for more node and press n for no node:");
          ch=getch(); 
        } while (ch=='y');
        
    }
    
}