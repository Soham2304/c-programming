#include<stdio.h>
int main()
{
	int count,n;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("The number of digits in the given number is:%d",count);
	return 0;
}