#include<stdio.h>
#include<stdlib.h>

void main(){
int **a,p=0,q=0,i=0,n=3,j,k,d;
 printf("Enter 9 elements\n");
 a=(int**)malloc(n*sizeof(int*));
for(j=0;j<3;j++)
{
   a[j]=(int*)malloc(n*sizeof(int));
}
for(j=0;j<3;j++)
{
    for(k=0;k<3;k++){
        scanf("%d",&a[j][k]);
    }
}
for(j=0;j<3;j++){
    p=p+(a[i][j%3]*a[i+1][(j+1)%3]*a[i+2][(j+2)%3]);
}
i=2;
for(j=0;j<3;j++){
    q=q+(a[i][j%3]*a[i-1][(j+1)%3]*a[i-2][(j+2)%3]);
}
d=p-q;
//printf("p= %d q= %d\n",p,q);
printf("The determinant is %d",d);
}
