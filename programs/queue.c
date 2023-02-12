#include<stdio.h>
#define CAPACITY 5
int queue[CAPACITY];
int front=0,rear=0,key;
void display(int);

void insert(int element){
    if(CAPACITY==rear){
       printf("Queue is full \n");
    }
    else{
        queue[rear]=element;
        rear++;
    }
}

void delete(){
    if(front==rear){
        printf("\nQueue is empty\n");
    }
    else{
        key=queue[front];
        printf("\nDeleted element is:%d ",key);
        for(int j=1;j<rear;j++){
            queue[j-1]=queue[j];
        }
        rear--;
        display(rear);
    }
}
void display(int r){
    printf("\nElements of queue after deletion:");
    for(int i=front;i<r;i++){
        printf("%d ",queue[i]);
    }
}
void traverse(){
    printf("Elements of queue is:");
    for(int i=front;i<rear;i++){
        printf("%d ",queue[i]);
    }
}

int main(){
    int ele;
    for(int i=front;i<CAPACITY;i++){
        printf("Enter element to be inserted in queue:");
        scanf("%d",&ele);
        insert(ele);
    }
    traverse();
    for(int i=front;i<=CAPACITY;i++){
        delete();
    }
    
    return 0;
}