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
int length()
{
    int count=0;
    struct node* ptr;
    ptr=root;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    return count;
}
int mid_node(int c)
{
    struct node *ptr;
    ptr=root;
    int i=1;
    if(c%2==0)
    {
        c=c/2;
        while(i<=c)
        {
            ptr=ptr->link;
            i++;
        }
     return (ptr->data);
    }
    else
    {
        c=c/2;
        while(i<=c)
        {
          ptr=ptr->link;
          i++;
        }
     return (ptr->data);
    }

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
int main()
{
    int ct,mid;
    createSLL();
    traverse();
    ct=length();
    printf("\nlength of node is %d",ct);
    mid=mid_node(ct);
    printf("\nmid node data is %d",mid);
}