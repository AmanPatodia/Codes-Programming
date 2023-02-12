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
void reverse_SLL(int len)
{
    int i=0,j=len-1,temp;
    struct node* p,*q;
    p=q=root;
    while(i<j)
    {
        int k=0;
        while(k<j)
        {
            q=q->link;
            k++;
        }
       temp=p->data;
       p->data=q->data;
       q->data=temp;
       i++;
       j--;
       p=p->link;
       q=root;
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
    int len;
    createSLL();
    traverse();
    len=length();
    reverse_SLL(len);
    printf("\nAfter reverse the linked list:");
    traverse();
}