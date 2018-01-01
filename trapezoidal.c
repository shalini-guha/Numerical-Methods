#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
float a,b,n,h,sum,i;
printf("Enter the upper limit\n");
scanf("%f",&b);
printf("Enter the lower limit\n");
scanf("%f",&a);
printf("Enter the no of iterations\n");
scanf("%f",&n);
h=(b-a)/n;
sum=sqrt(1+pow(a,2));
for(i=a+h;i<b;i=i+h){
  sum=sum+2*sqrt(1+pow(i,2));
}
sum=sum+sqrt(1+pow(b,2));
sum=sum*h/2;
printf("The value is %f",sum);
}
