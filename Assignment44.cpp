#include<stdio.h>
#include<math.h>
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
	int s=0;
	for(int i=1;i<=y;i++)
	{
		s=s+pow(i,2);
	}
	return s;
}