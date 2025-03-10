#include<stdio.h>
#include<math.h>
int main()
{
	int n,num,sum=0,rem;
	printf("Enter a number:");
	scanf("%d",&n);
	num = n;
	while(n!=0)
	{
		rem = n%10;
		sum = sum+pow(rem,3);
		n = n/10;
	}
	if(num==sum)
	{
		printf("The number is an armstrong number");
	}
	else
	{
		printf("The number is not an armstrong number");
	}
	return 0;
}
