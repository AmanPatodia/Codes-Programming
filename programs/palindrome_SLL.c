#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node * link;
};
struct node * root;

void createSLL()
{
    struct node * ptr,*cpt;
    int ch;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter node data:");
    scanf("%c",&ptr->data);
    root=ptr;
    do
    {
        cpt=(struct node*)malloc(sizeof(struct node));
        printf("\n Enter node data:");
        scanf(" %c",&cpt->data);
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
void palindrome_SLL(int len)
{
    struct node *p,*q;
    int i=0,j=len-1;
    p=q=root;
    while(i<j)
    {
        int k=0;
        while(k<j)
        {
            q=q->link;
            k++;
        }
        if(p->data==q->data)
        {
            p=p->link;
            q=root;
            i++;
            j--;
        }
        else
           break;
    }
    if(p==q)
      printf("\npalindrome");
    else 
       printf("\nnot palindrome");
}
void traverse()
{
    struct node * ptr;
    ptr=root;
    while(ptr!=NULL)
    {
        printf(" %c",ptr->data);
        ptr=ptr->link;
    }
}
int main()
{
    int len;
    createSLL();
    traverse();
    len=length();
    palindrome_SLL(len);
}