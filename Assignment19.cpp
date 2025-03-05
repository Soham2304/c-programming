#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("The first number is the greatest between two numbers");
	}
	else
	{
		printf("The second number is the greatest between two numbers");
	}
	return 0;
}