#include<stdio.h>
int main()
{
	int n,num,rev=0;
	printf("Enter a number:");
	scanf("%d",&n);
	num = n;
	while(n!=0)
	{
		rev = rev*10+(n%10);
		n = n/10;
	}
	if(num==rev)
	{
		printf("The number is a palindromic number");
	}
	else
	{
		printf("The number is not a palindromic number");
	}
	return 0;
}
