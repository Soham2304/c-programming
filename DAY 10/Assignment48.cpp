#include<stdio.h>
int main()
{
	int a[5],num,i,f=0;
	printf("Enter the 5 elements of the array: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be searched: ");
	scanf("%d",&num);
	for(i=0;i<5;i++)
	{
		if(a[i]==num)
		{
			f=1;
			printf("%d is found in the array at position = %d",num,i);
			break;
		}
	}
	if(f==0)
	{
		printf("%d does not exist in the array",num);
	}
	return 0;
}
