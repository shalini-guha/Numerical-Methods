#include<stdio.h>
#include<stdlib.h>

void main(){
    float a,b,n,h,i,sum;
    int count=1;
    printf("Enter the upper limit\n");
    scanf("%f",&b);
    printf("Enter the lower limit\n");
    scanf("%f",&a);
    printf("Enter the no of iterations\n");
    scanf("%f",&n);
    h=(b-a)/n;
    sum=2*b;
    for(i=h;i<b;i=i+h){
        if(count%2==0)
            sum=sum+2*2*i;
        else
            sum=sum+4*2*i;
            count++;
    }
    sum=sum+2*a;
    sum=h*sum/3;
    printf("The value is %f",sum);
}
