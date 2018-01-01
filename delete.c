#include<stdio.h>
#include<conio.h>

void main(){
int n,i,*a,j,k;
printf("Enter no of elements\n");
scanf("%d",&n);

a=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
                printf("position %d,number %d",j,a[i]);
            for(k=j;k<n-1;k++){
                a[k]=a[k+1];
                }
                n--;
        j--;

        }
    }
}
printf("The eleemnts are\n");
for(i=0;i<n;i++){
    printf("%d",a[i]);
}
}
