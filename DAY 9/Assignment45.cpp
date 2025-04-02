#include<stdio.h>
int main()
{
	int a[5];
	printf("Enter the array elements:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array in reverse order is:");
	for(int i=4;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
