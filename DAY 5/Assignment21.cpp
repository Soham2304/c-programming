#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
		    printf("The first number is the greatest among the three");
        } 
        else
        {
        	printf("The third number is the greatest among the three");
		}
	}
	else
	{
		if(b>c)
		{
			printf("The second number is the greatest among the three");
		}
		else
		{
			printf("The third number is the greatest among the three");
		}
	}
	return 0;
}
