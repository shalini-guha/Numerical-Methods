#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node* link;
}ndptr;

struct node* head=NULL;

void create(){
    int n;
    struct node *node,*temp;
    node=(ndptr*)malloc(sizeof(ndptr));
    printf("Enter a new node\n");
    scanf("%d",&n);
    node->data=n;
    node->link=NULL;
    if(head==NULL)
        head=node;
    else
    {
        temp=head;
        while(temp->link!=NULL){
            temp=temp->link;
        }
        temp->link=node;
    }

}
void display(){
ndptr *temp;
temp=head;
while(temp!=NULL){
printf("%d",temp->data);
    temp=temp->link;
}
}
void swap(){
    int n,m;
    ndptr *temp,*temp1,*prev=NULL,*prev1=NULL,*swap,*swap1;
    printf("enter data");
    scanf("%d%d",&n,&m);

    temp=head;
    while(temp!=NULL){

            if(n==temp->data)
            break;
    prev=temp;
        temp=temp->link;

    }
    temp1=head;
    while(temp1!=NULL){

        if(m==temp1->data)
            break;
            prev1=temp1;
        temp1=temp1->link;

    }
if(temp==head){
    swap=prev1->link;
    prev1->link=head;
head=swap;
}
else if(temp1==head){
    swap=prev->link;
    prev->link=head;
    head=swap;
}
else{
swap=prev->link;
    prev->link=prev1->link;
   prev1->link=swap;


}


 swap1=temp->link;
   temp->link=temp1->link;
   temp1->link=swap1;



}

void main(){
    int ch;
    while(1){
        printf("\n1.Create\n2.Display\n3.Swap\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch){
    case 1:
        create();
        break;
    case 2:
        display();
        break;
    case 3:
        swap();
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("Wrong choice\n");}
    }
}

