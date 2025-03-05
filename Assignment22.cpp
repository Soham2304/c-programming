#include<stdio.h>
int main()
{
	char n;
	printf("Enter H for heads or any other key for tails:");
	scanf("%c",&n);
	if(n==72)
	{
		printf("Result : Heads");
	}
	else
	{
		printf("Result : Tails");
	}
	return 0;
}