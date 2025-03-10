#include<stdio.h>
int main()
{
	int i,j,k,rows=3;
	for(i=1;i<=rows;i++)
	{
		for(j=i;j<=rows;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(int l=rows-1;l>=1;l--)
	{
		for(int m=rows-1;m>=l;m--)
		{
			printf(" ");
		}
		for(int n=1;n<=l;n++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
