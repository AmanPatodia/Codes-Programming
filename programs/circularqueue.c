#include<stdio.h>
#define SIZE 5
int front=-1,rear=-1,element,key;
int circularqueue[SIZE];

void insert(int ele)
{
    if((SIZE==rear+1)||(front==rear+1))
    {
        printf("Circular Queue is full");
    }
    else if(front==-1 && rear==-1)
    {
       front=rear=0;
       circularqueue[rear]=ele;
    }
    else if(rear==SIZE-1)
    {
      rear=0;
      circularqueue[rear]=ele;
    }
    else
    {
      rear++;
      circularqueue[rear]=ele;
    }
}

void delete()
{
    if(front==-1 & rear==-1)
    {
        printf("circular queue is empty");
    }
    else if(front==rear)
    {
       key=circularqueue[front];
       front=rear=-1;
    }
    else if(front==SIZE-1)
    {
       key=circularqueue[front];
       front=0;
    }
    else
    {
       key=circularqueue[front];
       front++;
    }
}

void display()
{
    int front_pos=front,rear_pos=rear;
    if(front_pos==-1){
        printf("circular queue is empty");
    }
    if(front_pos<=rear_pos){
        while(front_pos<=rear_pos){
            printf("%d",circularqueue[front_pos]);
            front_pos++;
        }
    }
    else{
          while(front_pos<=SIZE-1){
            printf("%d",circularqueue[front_pos]);
            front_pos++;   
            }
        }
    front_pos=0;
      while(front_pos<=rear_pos){
          printf("%d",circularqueue[front_pos]);
            front_pos++;
      }
    printf("n");
    
}
int main(){
    while(front<SIZE){
        printf("Enter element:");
        scanf("%d",&element);
        insert(element);
    }
    display();
   
}
