#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	a = a-(a/10)*10;
	printf("The last digit of the entered number is: %d",a);
	return 0;
}