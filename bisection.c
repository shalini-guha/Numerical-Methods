#include<stdio.h>
#include<stdlib.h>

void main(){
float x,a,b,f;
int i,j;

printf("Enter the initial approximation\n");
scanf("%f%f",&a,&b);
for(i=0;i<15;i++){
    x=(a+b)/2;
    f=(x*x*x)+(3*x)-(5);
    if(f>0)
        b=x;
        else
        a=x;

}
printf("The value is %f",x);
}
