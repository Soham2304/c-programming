#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a>=0)
	{
		printf("The entered number is positive");
	}
	else
	{
		printf("The entered number is negative");
	}
	return 0;
}
