#include<stdio.h>
#include<stdlib.h>
void main(){
float **a,*x,s;
int n,i,j,k;
printf("Enter no of equations\n");
scanf("%d",&n);
a=(float **)malloc(n*sizeof(float *));
x=(float*)malloc(n*sizeof(float));
for(i=0;i<n+1;i++)
    a[i]=(float *)malloc(n*sizeof(float ));
printf("Enter the values\n");
for(i=1;i<=n;i++){
    for(j=1;j<=n+1;j++)
        scanf("%f",&a[i][j]);

}
    printf("Enter the initial approximation\n");
    for(i=1;i<=n;i++)
        scanf("%f",&x[i]);
        for(k=1;k<=15;k++){
            for(i=1;i<=n;i++){
                s=a[i][n+1];
                for(j=1;j<=n;j++){
                    if(i!=j)
                        s=s-a[i][j]*x[j];
                }
                x[i]=s/a[i][i];
                }
            }
            printf("The required solution is: \n");
            for(i=1;i<=n;i++)
                printf("x[%d]=%0.4f\n",i,x[i]);
        }


