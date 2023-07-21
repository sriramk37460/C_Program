#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}*head,*temp,*temp1,*newnode;
void create(){
    int ele;
newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the element:");
    scanf("%d",&ele);
    newnode->data=ele;
    newnode->next=NULL;
    if(head==NULL){

        head=newnode;
        temp=newnode;
        temp1=newnode;
        newnode->next=head;
    }
    else{
        temp->next=newnode;
        temp=newnode;
        temp1=newnode;
        newnode->next=head;
    }
}
void display(){
    temp=head;
    while(temp->next!=head){

            printf("%d->",temp->data);
            temp=temp->next;
    }
   printf("%d",temp->data);

}
int main(){
   int n;
   while(1){
   printf("\n1.creation\n2.display\nenter the option:");

   scanf("%d",&n);
   switch(n){
   case 1:
       create();
       break;
   case 2:
       display();
    break;
   default:
    printf("\nenter the valid option");
    break;
   }}


}
