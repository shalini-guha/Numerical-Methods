#include<stdio.h>
#include<stdlib.h>

int **a;
int r1,c1;

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
int i,j,sum=0;
    printf("Enter the dimensions of the matrix\n");
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
printf("Matrix:\n");

display(r1,c1,a);
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        if(a[i][j]==0)
            sum++;
    }
}
printf("The number of 0 in the matrix are %d\n",sum);
if(sum>=2*r1*c1/3)
    printf("The matrix is a sparse matrix\n");
else
    printf("The matrix is not a sparse matrix\n");
}
