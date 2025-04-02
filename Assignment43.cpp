#include<stdio.h>
int fib(int x);
int main()
{
	int n,i=0,res;
	printf("Enter the no of terms:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		res = fib(i);
		printf("%d\t",res);
	}
	return 0;
}
int fib(int y)
{
	if(y==0)
	{
		return 0;
	}
	else if(y==1)
	{
		return 1;
	}
	else
	{
		return (fib(y-1)+fib(y-2));
	}
}