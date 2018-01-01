#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node* link;
}ndptr;
ndptr *rear=NULL;
ndptr *front=NULL;

void push(){
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

void del(){
    ndptr *temp=rear;
if(rear==NULL){
        printf("\nQueue is empty\n");

}
else{
     rear=rear->link;
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
        printf("\n1.Input\n2.Delete\n3.Display\n4.Exit\n");
printf("Enter choice");
scanf("%d",&ch);
switch(ch){
case 1:
    push();
    break;
case 2:
    del();
    break;
case 3:
    display();
    break;
case 4:
    exit(0);
default:
    printf("\nWrong choice\n");
    }
}

}
