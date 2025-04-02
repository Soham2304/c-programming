#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],sum[5][5];
	int rows_a,rows_b,cols_a,cols_b,rows_sum,cols_sum;
	printf("Enter the number of rows in the first matrix:");
	scanf("%d",&rows_a);
	printf("\nEnter the number of columns in the first matrix:");
	scanf("%d",&cols_a);
	printf("\nEnter the number of rows in the second matrix:");
	scanf("%d",&rows_b);
	printf("\nEnter the number of columns in the second matrix:");
	scanf("%d",&cols_b);
	if(rows_a != rows_b||cols_a != cols_b)
	{
		printf("\nThe number of rows and columns of both the matrices should be equal");
	}
	printf("\nEnter the elements of the first matrix:");
	for(int i=0;i<rows_a;i++)
	{
		for(int j=0;j<cols_a;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the elements of the second matrix:");
	for(int i=0;i<rows_b;i++)
	{
		for(int j=0;j<cols_b;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	rows_sum = rows_a;
	cols_sum = cols_a;
	for(int k=0;k<rows_sum;k++)
	{
		for(int l=0;l<cols_sum;l++)
		{
			sum[k][l] = a[k][l] + b[k][l];
		}
	}
	printf("\nThe elements of the resultant matrix are:\n");
	for(int k=0;k<rows_sum;k++)
	{
		for(int l=0;l<cols_sum;l++)
		{
			printf(" %d",sum[k][l]);
		}
		printf("\n");
	}
	return 0;
}
