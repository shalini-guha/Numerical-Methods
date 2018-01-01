#include<stdio.h>
#include<stdlib.h>

void main(){
int **a,i,j,k,r1,c1,p=0,q=0,det=0;
printf("Enter the values\n");
scanf("%d%d",&r1,&c1);
a=(int**)(malloc(r1*sizeof(int*)));
for(i=0;i<r1;i++){
  a[i]=(int*)(malloc(c1*sizeof(int)));
}
printf("Enter the data\n");
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
}
}
i=0;
for(j=0;j<3;j++){
    p=p+(a[i][j%3]*a[i+1][(j+1)%3]*a[i+2][(j+2)%3]);
}
i=2;
for(j=0;j<3;j++){
    q=q+(a[i][j%3]*a[i-1][(j+1)%3]*a[i-2][(j+2)%3]);
}
det=p-q;
printf("%d",det);
for(i=0;i<3;i++){
for(j=0;j<3;j++){
    printf("%.2f ",((a[(i+1)%3][(j+1)%3]*a[(i+2)%3][(j+2)%3])-(a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3]))/det);

}
printf("\n");
}
}

