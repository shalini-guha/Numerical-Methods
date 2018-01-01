#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,j;
    float det=0,a[3][3];
    printf("Enter the elements of the matrix: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%f",&a[i][j]);
    for(i=0;i<3;i++)
        det=det+a[0][i%3]*((a[1][(i+1)%3]*a[2][(i+2)%3])-(a[1][(i+2)%3]*a[2][(i+1)%3]));
        printf("THE det is %d\n",det);
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            a[i][j]=(a[(i+1)%3][(j+1)%3]*a[(i+2)%3][(j+2)%3])-(a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3])/det;
    printf("\n\nThe inverse of the matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%.2f    ",a[i][j]);
        printf("\n");
    }

}
