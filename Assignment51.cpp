#include<stdio.h>
int main()
{
	int i,j,a[3][3],t_a[3][3];
	printf("Enter the elements of the matrix: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements of the matrix:\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			t_a[i][j] = a[j][i];
		}
	}
	printf("\nThe elements of the transposed matrix is:\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf(" %d",t_a[i][j]);
		}
	}
	return 0;
}