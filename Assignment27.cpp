#include<stdio.h>
#include<math.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=10;i++)
	{
		sum =sum+pow(i,2);
	}
	printf("The sum of square of the first 10 natural numbers is: %d",sum);
	return 0;
}