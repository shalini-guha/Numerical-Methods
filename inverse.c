#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,j,r1,c1,det=0;
    float **a;
    printf("Enter the dimensions of the matrix\n");
    scanf("%d%d",&r1,&c1);
a=(float **)malloc(r1*sizeof(float *));
for(i=0;i<r1;i++){
    a[i]=(float *)malloc(c1*sizeof(float));
}
printf("Enter %d elements\n",(r1*c1));
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        scanf("%f",&a[i][j]);
    }
}
i=0;
for(j=0;j<3;j++){
        det=det+a[i][j]*(((a[(i+1)%3][(j+1)%3])*(a[(i+2)%3][(j+2)%3]))-(a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3]));
}
printf("The determinant is %d\n",det);
for(i=0;i<r1;i++){
      for(j=0;j<c1;j++)
        printf("%.2f\t",((a[(i+1)%3][(j+1)%3] * a[(i+2)%3][(j+2)%3]) - (a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3]))/det);
       printf("\n");
   }
}
