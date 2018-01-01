#include<stdio.h>
#include<stdlib.h>

void main(){
float **a,p,x,y,z;
int m,n,i,j;
printf("Enter no of equations\n");
scanf("%d",&m);
n=m+1;
a=(float **)malloc(m*sizeof(float *));
for(i=0;i<m;i++)
    a[i]=(float *)malloc(n*sizeof(float ));
printf("Enter the values\n");
for(i=0;i<m;i++){
    for(j=0;j<n-1;j++)
        scanf("%f",&a[i][j]);

}
printf("Enter the results\n");
for(i=0;i<m;i++)
    scanf("%f",&a[i][n-1]);
p=a[0][0];
for(i=0;i<n;i++)
    a[0][i]=a[0][i]/p;
for(i=1;i<m;i++){
    p=a[i][0];
    for(j=0;j<n;j++)
        a[i][j]=a[i][j]-(p/a[0][0])*a[0][j];
}
p=a[1][1];
for(i=0;i<n;i++)
    a[1][i]=a[1][i]/p;
p=a[m-1][1];
for(i=0;i<n;i++){
    a[m-1][i]=a[m-1][i]-(p/a[1][1])*a[1][i];
    }
    printf("The matrix is \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%.2f\t",a[i][j]);
        printf("\n");
    }
    z=a[m-1][n-1]/a[m-1][m-1];
    y=(a[1][3]-z*a[1][2])/a[1][1];
    x=(a[0][3]-(a[0][2]*z+a[0][1]*y))/a[0][0];
    printf("x=%.2f\ty=%.2f\tz=%.2f\n",x,y,z);
}
