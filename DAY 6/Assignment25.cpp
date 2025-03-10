#include<stdio.h>
int main()
{
	int i,n,pdt;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("The multiplication table for %d is:",n);
	for(i=1;i<=10;i++)
	{
		pdt = n*i;
		printf("\n%d * %d = %d",n,i,pdt);
	}
	return 0;
}
