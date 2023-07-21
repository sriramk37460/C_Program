#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
int main(){
    int opt;
while(1){
    printf("\n\n1.enqueue\n2.dequeue\n3.display\nEnter the option:");
    scanf("%d",&opt);
    switch(opt){
    case 1:
     enqueue();
     break;
    case 2:
     dequeue();
     break;
    case 3:
     display();
     break;
    default:
        printf("\nEnter valid option!");
        break;

    }}
}
void enqueue(){
    int element;

    if(rear==max-1 ){
        printf("\nQueue is full");

    }
    else{
    printf("\nEnter the element:");
    scanf("%d",&element);
        rear++;
        front=0;
        queue[rear]=element;
    }
}
void dequeue(){
    int deleted;
    if(front==-1 && rear==-1 || front>rear){
        printf("\nQueue is empty");

    }
    else{
        deleted=queue[front];
        printf("\nDeleted element is: %d",deleted);
        front++;
        if(front==rear+1){
            rear=-1;
            front=-1;
        }
    }
}
void display(){
    int temp;
     temp=front;
    if(front==-1 || front>rear){
        printf("\nQueue is empty");
    }
    else{

        while(front!=(rear+1)){
            printf("\nElement is: %d",queue[front]);
            front++;
        }//printf("\nElement is: %d",queue[front]);
    }front=temp;
}
