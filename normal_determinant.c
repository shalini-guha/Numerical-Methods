#include<stdio.h>
#include<stdlib.h>

void main(){
int **a,p=0,q=0,i=0,n=3,j,k,det;
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
i=0;
for(j=0;j<3;j++){
        det=det+a[i][j]*(((a[(i+1)%3][(j+1)%3])*(a[(i+2)%3][(j+2)%3]))-(a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3]));
        printf("%d\n",det);
}
printf("The determinant is %d",det);
}

