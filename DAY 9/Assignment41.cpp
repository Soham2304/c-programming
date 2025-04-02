#include<stdio.h>
int fact(int n);
int main()
{
	int x;
	printf("Enter the n no of terms that you need the factorial of:");
	scanf("%d",&x);
	printf("%d",fact(x));
	return 0;
}
int fact(int y)
{
	if(y!=0)
	{
		return y*fact(y-1);
	}
	else
	{
		return 1;
	}
}
