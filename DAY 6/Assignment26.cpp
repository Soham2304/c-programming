#include<stdio.h>
int main()
{
	int i,n,pdt=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		pdt = pdt*i;
	}
	printf("The factorial of the number %d is: %d",n,pdt);
	return 0;
}
