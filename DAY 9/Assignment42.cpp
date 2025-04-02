#include<stdio.h>
int gcd(int x,int y);
int main()
{
	int p, r;
	printf("Enter two numbers:");
	scanf("%d %d",&p,&r);
	printf("%d",gcd(p,r));
	return 0;
}
int gcd(int m,int n)
{
	if(n!=0)
	{
		return gcd(n,m%n);
	}
	else
	{
		return m;
	}
}
