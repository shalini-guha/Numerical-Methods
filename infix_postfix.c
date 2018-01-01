#include<stdio.h>
#include<stdlib.h>

typedef struct node{
char data;
struct node* link;
}ndptr;


ndptr *top=NULL;
void push(char n){
   // char n;
   // printf("Enter a data\n");
   // scanf(" %c",&n);
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
temp=top;
while(temp!=NULL){
        printf("%c ",temp->data);
    temp=temp->link;
}
}
 char pop(){
     char t='0';
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
 int pre(char t){
 switch(t){
 case '+':
     return 1;
 case '-':
    return 1;
 case '*':
    return 2;
 case '/':
    return 2;
 case '%':
    return 2;
    }
 }
void main(){
    int n,i=1,j=0,k=0;
    char *ch,*ch1,t;
    ndptr *temp;

    printf("enter the size\n");
    scanf("%d",&n);
    ch=(char*)malloc(100*sizeof(char));
    ch1=(char*)malloc(100*sizeof(char));
    printf("Enter string\n");
    while(i!=n+1){
        scanf(" %c",&ch[i]);
    i++;
    }
        ch[0]='(';
    ch[i++]=')';
    ch[i]='\0';
    i=0,j=0;
    while(ch[i]!='\0'){
     if(ch[i]=='(')
            push(ch[i]);
     else if(ch[i]==')'){
            while(1){
        t=pop();
        if(t=='(')
            break;
        else if(t=='0')
            break;
        else
            ch1[j++]=t;
     }
     }
     else if(ch[i]>=65 && ch[i]<=90)
        ch1[j++]=ch[i];
     else{
            if(top->data=='(')
               push(ch[i]);
     else{
        if(pre(top->data)>=pre(ch[i])){
            ch1[j++]=pop();
            push(ch[i]);
        }
        else
            push(ch[i]);
     }
     }
     i++;

    }
    ch1[j]='\0';
    i=0;
    while(ch1[i]!='\0'){
        printf("%c",ch1[i]);
        i++;
    }

//int ch;
//char t;
//while(1){
//    printf("Enter choice\n");
//    scanf("%d",&ch);
//    switch(ch){
//case 1:
//    push();
//    break;
//case 2:
//    display();
//    printf("\n");
//    break;
//case 3:
//   t= pop();
//    break;
//case 4:
//    exit(0);
//    break;
//    }
//
//}
}
