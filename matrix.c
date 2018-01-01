#include <stdio.h>
#include <conio.h>

int a[10][10],b[10][10],r1,c1,r2,c2;
void display(int m[10][10],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
                    for(j=0;j<c;j++)
                                    printf("%d  ",m[i][j]);
                    printf("\n");
    }

}

void add()
{
     int i,j;
     if(r1!=r2 && c1!=c2)
               printf("\nAddition is not possible!\n");
     else
     {
               for(i=0;i<r1;i++)
               {
                                for(j=0;j<c1;j++)
                                                 printf("%d  ",a[i][j]+b[i][j]);
                                printf("\n");
               }
     }
}
void sub()
{
     int i,j;
     if(r1!=r2 && c1!=c2)
               printf("\nSubtraction is not possible!\n");
     else
     {
               for(i=0;i<r1;i++)
               {
                                for(j=0;j<c1;j++)
                                                 printf("%d  ",a[i][j]-b[i][j]);
                                printf("\n");
               }
     }
}
void multi(){
int i,j,k,**c,s=0;
if(c1==r2){
for(i=0;i<r1;i++){
    for(j=0;j<c2;j++)
    {
        s=0;
        for(k=0;k<c1;k++){
                s=s+a[i][k]*b[k][j];
    }
       printf("%d  ",s);
}
printf("\n");
}

}
else
printf("Matrix Multiplication cannot be performed\n");
}
void trans()
{
     int i,j;
     printf("Transpose of the 1st matrix is:\n");
     for(i=0;i<c1;i++)
     {
                      for(j=0;j<r1;j++)
                                       printf("%d  ",a[i][j]);
                      printf("\n");
     }
     printf("\nTranspose of the 2nd matrix is:\n");
     for(i=0;i<c2;i++)
     {
                      for(j=0;j<r2;j++)
                                       printf("%d  ",b[i][j]);
                      printf("\n");
     }
}
int main()
{
    int i,j,ch;
    printf("Enter the row & column of the first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the elements of the 1st matrix:\n");
    for(i=0;i<r1;i++)
    {
                     for(j=0;j<c1;j++)
                                       scanf("%d",&a[i][j]);
    }

    printf("Enter the row & column of the second matrix: ");
    scanf("%d%d",&r2,&c2);
    printf("Enter the elements of the 2nd matrix:\n");
    for(i=0;i<r2;i++)
    {
                     for(j=0;j<c2;j++)
                                       scanf("%d",&b[i][j]);
    }
    while(1)
    {
            printf("1. Display\n2. Add\n3. Subtract\n4. Multiply\n5. Transpose\n6. Exit\nEnter your choice: ");
            scanf("%d",&ch);
            switch(ch)
            {
                      case 1:printf("First Matrix\n");
                             display(a,r1,c1);
                             printf("Second Matrix\n");
                             display(b,r2,c2);
                              break;
                      case 2: add();
                              break;
                      case 3: sub();
                              break;
                      case 4: multi();
                              break;
                      case 5: trans();
                              break;
                      case 6: exit(1);
                      default: printf("Invalid choice!");
            }
    }
    getch();
}

