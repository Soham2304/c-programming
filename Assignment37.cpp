#include<stdio.h>
int main()
{
	int i,j,count=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d",count);
		}
		count++;
		printf("\n");
	}
	return 0;
}