#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements of the array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max,min;
	max = min = a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
		if(a[i]<min)
		{
			min = a[i];
		}
	}
	printf("Max value is:%d",max);
	printf("\nMin value is:%d",min);
	return 0;
}