#include<stdio.h>
#include<stdlib.h>
int **a,r,c,**b;
void main()
{	int i,j,k=1;
	printf("\n Enter the dimensions of the matrix:\n");
	scanf("%d %d",&r,&c);
	a=(int**)calloc(r,sizeof(int*));
	for(i=0;i<r;i++)
	{	a[i]=(int*)calloc(c,sizeof(int));
	}
	printf("\n Enter the elements of the matrix:\n");
	for(i=0;i<r;i++)	
	{	for(j=0;j<c;j++)
		{	scanf("%d",&a[i][j]);
		}
	} 
	b=(int**)calloc(r,sizeof(int*));
        for(i=0;i<r;i++)
        {       b[i]=(int*)calloc(c,sizeof(int));
        }

	printf("\n The upper triangular matrix is:\n");
	for(i=0;i<r;i++)
	{	for(j=0;j<c;j++)
		{	if(i<=j)
			b[i][j]=a[i][j];
			else
			b[i][j]=0;
		}
	}
	 for(i=0;i<r;i++)
        {       for(j=0;j<c;j++)
                {      
                        printf("\t %d",b[i][j]);
                }
                printf("\n");
        }
	for(i=0;i<r;i++)
	{	for(j=0;j<c;j++)
		{	if(i==j)
			{ k=k*b[i][j];
			}
		}
	}
	printf("\n The determinant is: %d",k);
}


