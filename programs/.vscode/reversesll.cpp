#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node * next;
};

struct node * head,*temp = NULL;

void addnode(int d)
{
       struct node * newnode = (struct node * )malloc(sizeof(struct node));
       newnode->data=d;
       newnode->next=NULL;
       if(head == NULL)
       {
         head= newnode;
         temp = newnode;
       }
       else{
            temp->next=newnode;
            temp=newnode;
       }
}


void printsll()
{
     struct node * temp = head;
     while(temp!=NULL)
     {
        cout<<temp->data<<"->";
        temp=temp->next;
     }
     cout<<endl;
}

void reversesll()
{
    struct node * pre=NULL,*cur=NULL;
    pre=head;
    cur=head->next;
    head=head->next;
    pre->next=NULL;
    while(head!=NULL)
    {
       head=head->next;
       cur->next=pre;
       pre=cur;
       cur=head;
    }
    head=pre;


}

int main()
{
    addnode(1);
    addnode(2);
    addnode(3);
    addnode(4);
    addnode(5);

    printsll();

    reversesll();

    printsll();

    return 0;
}