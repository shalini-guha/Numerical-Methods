#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node* link;
}ndptr;

ndptr *head=NULL;
ndptr *top=NULL;
void push(int n){
ndptr *temp,*node;
node=(ndptr *)malloc(sizeof(ndptr));
node->data=n;
node->link=NULL;
if(top==NULL){
    top=node;
}
else{
    node->link=top;
    top=node;

}
}
void display(){
ndptr *temp;
temp=head;
while(temp!=NULL){
        printf("%d ",temp->data);
    temp=temp->link;
}
}
int pop(){
     int t=0;
     ndptr *temp;
     temp=top;
     if(top==NULL)
        printf("Stack empty\n");
     else{
        top=top->link;
        t=temp->data;
     free(temp);
}
return t;
 }
 void reverse(){
     int y;
 ndptr *temp;
 temp=head;
 while(temp!=NULL){
        push(temp->data);
  temp=temp->link;
 }
 head=NULL;
 while(y=pop()!=0){
    if(head==NULL){
    head=y;
    temp=head;
    }
    else
    temp->link=pop();
 }
 }
void main(){
int ch;
while(1){
printf("\n1.Input\n2.Reverse\n3.Exit\n4.Display\n");
scanf("%d",&ch);
switch(ch){
case 1:
    create();
    break;
case 2:
    reverse();
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
