#include<stdio.h>
#include<stdlib.h>

int **a,**b;
int r1,c1,r2,c2;

void addition(){
    if(r1==r2&&c1==c2){
int i,j,**c;
c=(int **)malloc(r1*sizeof(int *));
for(i=0;i<r1;i++){
    c[i]=(int *)malloc(c1*sizeof(int));
}
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++)
        c[i][j]=a[i][j]+b[i][j];
}
display(r1,c1,c);
}
else
    printf("Addition not possible\n");
}
void subtraction(){
    if(r1==r2&&c1==c2){
int i,j,**c;
c=(int **)malloc(r1*sizeof(int *));
for(i=0;i<r1;i++){
    c[i]=(int *)malloc(c1*sizeof(int));
}
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++)
        c[i][j]=a[i][j]-b[i][j];
}
display(r1,c1,c);
}
else
     printf("Subtraction not possible\n");
}
void multiplication(){
int i,j,k,**c,s=0;
if(c1==r2){
c=(int **)malloc(r1*sizeof(int *));
for(i=0;i<r1;i++){
    c[i]=(int *)malloc(c2*sizeof(int));
}
for(i=0;i<r1;i++){
    for(j=0;j<c2;j++)
    {
        s=0;
        for(k=0;k<c1;k++){
                s=s+a[i][k]*b[k][j];
    }
       c[i][j]=s;
}
}
display(r1,c2,c);

}
else
printf("Matrix Multiplication cannot be performed\n");
}

void transpose(){
    int **c,i,j;
c=(int **)malloc(c1*sizeof(int *));
for(i=0;i<c1;i++){
    c[i]=(int *)malloc(r1*sizeof(int));
}
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
       c[j][i]=a[i][j];
    }
}
printf("Transpose of 1st Matrix\n");
display(c1,r1,c);
c=(int **)malloc(c2*sizeof(int *));
for(i=0;i<c2;i++){
    c[i]=(int *)malloc(r2*sizeof(int));
}
for(i=0;i<r2;i++){
    for(j=0;j<c2;j++){
        c[j][i]=b[i][j];
    }
}
printf("Transpose of 2nd Matrix\n");
display(c2,r2,c);
}
void display(int m,int n,int **c){
    int i,j;
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d",c[i][j]);
        printf("  ");
    }
        printf("\n");
}
}
void main(){
    int i,j,ch;
    printf("Enter the dimensions of the first matrix\n");
    scanf("%d%d",&r1,&c1);
a=(int **)malloc(r1*sizeof(int *));
for(i=0;i<r1;i++){
    a[i]=(int *)malloc(c1*sizeof(int));
}
printf("Enter %d elements\n",(r1*c1));
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("First Matrix\n");

display(r1,c1,a);
    printf("Enter the dimensions of the second matrix\n");
    scanf("%d%d",&r2,&c2);
b=(int **)malloc(r2*sizeof(int *));
for(i=0;i<r2;i++){
    b[i]=(int *)malloc(c2*sizeof(int));
}
printf("Enter %d elements\n",(r2*c2));
for(i=0;i<r2;i++){
    for(j=0;j<c2;j++)
        scanf("%d",&b[i][j]);
}
printf("Second Matrix\n");
display(r2,c2,b);
while(1){
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\n5.Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch){
case 1:
    addition();
    break;
case 2:
    subtraction();
    break;
case 3:
    multiplication();
    break;
case 4:
    transpose();
    break;
case 5:
    exit(0);
    default:
    printf("Wrong choice\n");
    }
}


}
