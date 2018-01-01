#include<stdio.h>
#include<stdlib.h>

void main(){
float x1,x[10],y[10],f[10][10],min,h,u,p=1.0,s=0.0;
int i,j;
int n;
printf("Enter the value to be found\n");
scanf("%f",&x1);
printf("Enter the number of terms\n");
scanf("%d",&n);

printf("enter the values of x");
for(i=0;i<n;i++){
    scanf("%f",&x[i]);
}
printf("enter the values of y");
for(i=0;i<n;i++){
    scanf("%f",&y[i]);
}
min=abs(x1-x[0]);
h=x[1]-x[0];
for(i=1;i<n;i++){
    if(abs(x1-x[0])<min)
        min=abs(x1-x[0]);
}
u=(min-x1)/h;
for(i=0;i<n;i++)
    f[0][i]=y[i];
for(i=1;i<n;i++){
for(j=0;j<n-i;j++){
    f[i][j]=f[i-1][j+1]-f[i-1][j];
}
}
    s=f[0][1];

for(i=1;i<n;i++){
    p=p*(u-i+1)/i;
    s=s+p*f[i][1];
}
printf("%f",s);
}
