#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,j,r1,c1,**a,det=1;
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
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        if(i>j)
            a[i][j]=0;
    }
}
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
for(i=0;i<r1;i++){
        det=det*a[i][i];
}
printf("The determinant is %d",det);
}
