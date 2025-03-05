#include<stdio.h>
int main()
{
	int a=0,b=1,sum=0,i,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d \t",a);
		sum = a+b;
		a = b;
		b = sum;
	}
	return 0;
}