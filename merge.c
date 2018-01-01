#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node* link;
}ndptr;

ndptr* head1=NULL;
ndptr* head2=NULL;
ndptr* head3=NULL;

ndptr* create(ndptr* head,int n){

    ndptr *node,*temp;
    node=(ndptr*)malloc(sizeof(ndptr));

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
return head;
}
void display(ndptr *head){
ndptr *temp;
temp=head;
while(temp!=NULL){
printf("%d ",temp->data);
    temp=temp->link;
}
}
void merge(){
    int n;
ndptr *temp,*temp1,*temp2,*temp3;
temp1=head1;
temp2=head2;
while(temp1!=NULL&&temp2!=NULL){
        //if(head3==NULL)
    if(temp1->data<=temp2->data){
    n=temp1->data;
    temp1=temp1->link;
    }
    else{
       n=temp2->data;
        temp2=temp2->link;}

head3=create(head3,n);
}
if(temp1!=NULL){
        while(temp1!=NULL){
    n=temp1->data;
    temp1=temp1->link;
     head3=create(head3,n);
        }

}
else if(temp2!=NULL){
        while(temp2!=NULL){
    n=temp2->data;
    temp2=temp2->link;

       head3=create(head3,n);
    }
        }

}



void main(){
    int ch,n;
    printf("1st linkedlist:-\n");
    while(1){
    printf("Enter a new node\n");
    scanf("%d",&n);
        head1=create(head1,n);
        printf("Enter 0 to continue\n");
        scanf("%d",&ch);
        if(ch!=0)
            break;
    }
    printf("2nd linkedlist:-\n");
    while(1){
         printf("Enter a new node\n");
    scanf("%d",&n);
       head2= create(head2,n);
        printf("Enter 0 to continue\n");
        scanf("%d",&ch);
        if(ch!=0)
            break;
    }
    printf("1st linkedlist:-\n");
    display(head1);
       printf("\n2nd linkedlist:-\n");
    display(head2);
    merge();
printf("\nMerged linkedlist:-\n");
    display(head3);
}


