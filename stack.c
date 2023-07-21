#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max];
int top=-1;
void push();
void pop();
void display();

int main(){
int opt;
while(1){
    printf("\n\n1.push\n2.pop\n3.display\nEnter the option:");
    scanf("%d",&opt);
    switch(opt){
    case 1:
     push();
     break;
    case 2:
     pop();
     break;
    case 3:
     display();
     break;
    default:
        printf("\nEnter valid option!");
        break;

    }
}
}
void push(){
int ele;
if(top==max-1){
    printf("\nStack is overflow");
}
else{
    printf("\nEnter the element:");
    scanf("%d",&ele);
    top++;
    stack[top]=ele;
}
}

void pop(){
 int del;
if(top==-1){
    printf("\nStack is underflow");
}
else{

    del=stack[top--];
    printf("\nDeleted element is:%d",del);

}
}
void display(){
    if(top==-1){
    printf("\nStack is empty");
}
else{
    while(top!=-1){
           printf("\nElement is: %d",stack[top]);
        top--;
    }
}
}
