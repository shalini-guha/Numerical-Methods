#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
float x0,y0,h,xn,x,y,i;
printf("Enter the initial value of x\n");
scanf("%f",&x0);
printf("Enter the initial value of y\n");
scanf("%f",&y0);
printf("Enter the value of h\n");
scanf("%f",&h);
printf("Enter the value of x whose y is to be found out\n");
scanf("%f",&xn);
for(i=x0+h;i<=xn;i=i+h){
    y=y0+h*((y0-i)/(y0+i));
    y0=y;
}
printf("The value is %f",y);
}
