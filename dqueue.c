
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node* link;
}ndptr;
ndptr *rear=NULL;
ndptr *front=NULL;

void push_front(){
int n;
ndptr *node;
printf("Enter a number\n");
scanf("%d",&n);
node=(ndptr*)malloc(sizeof(ndptr));
node->data=n;
node->link=NULL;
if(front==NULL){
    front=node;
    front->link=NULL;
    rear=front;
}
else{
    front->link=node;
    front=node;
}
}
void push_rear(){
    int n;
ndptr *node;
printf("Enter a number\n");
scanf("%d",&n);
node=(ndptr*)malloc(sizeof(ndptr));
node->data=n;
node->link=NULL;
if(rear==NULL){
    rear=node;
    front=rear;
}
else{
   node->link=rear;
   rear=node;
}
}
void del_rear(){
    ndptr *temp=rear;
if(rear==NULL){
        printf("\nQueue is empty\n");

}
else{
     rear=rear->link;
    free(temp);
}
}
void del_front(){
       ndptr *temp=front,*temp1,*prev;
if(rear==NULL){
        printf("\nQueue is empty\n");

}
else{
        temp1=rear;
     while(temp1->link!=NULL){
            prev=temp1;
    temp1=temp1->link;
     }
prev->link=NULL;
front=prev;
    free(temp);
}
}
void display(){

        ndptr *temp;
    if(rear==NULL){
        printf("\nQueue is empty\n");

}
else{
temp=rear;
while(temp!=NULL){
        printf("%d",temp->data);
    temp=temp->link;
}
}
}

void main(){
int ch;
while(1){
        printf("\n1.Input from front\n2.Input from rear\n3.Delete from front\n4.Delete from rear\n5.Display\n6.Exit");
printf("Enter choice");
scanf("%d",&ch);
switch(ch){
case 1:
    push_front();
    break;
case 2:
    push_rear();
    break;
case 3:
    del_front();
    break;
case 4:
    del_rear();
    break;
case 5:
    display();
    break;
case 6:
    exit(0);
default:
    printf("\nWrong choice\n");
    }
}

}
