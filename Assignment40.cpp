#include<stdio.h>
int sum(int n);
int main()
{
	int x;
	printf("Enter the n no of terms that you need the sum of:");
	scanf("%d",&x);
	printf("%d",sum(x));
	return 0;
}
int sum(int y)
{
	if(y!=0)
	{
		return y+sum(y-1);
	}
	else
	{
		return y;
	}
}