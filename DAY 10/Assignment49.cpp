#include<stdio.h>
void swap (int m,int n)
{
	int c=m;
	m = n;
	n = c;
	printf("\nInside call by value: %d %d",m,n);
}
void swap (int *p,int *q)
{
	int c=*p;
	*p = *q;
	*q = c;
	printf("\nInside call by reference: %d %d",*p,*q);
}
int main()
{
	int a=5,b=10;
	printf("\n%d %d",a,b);
	swap (a,b);
	printf("\nAfter call by value: %d %d",a,b);
	swap (&a,&b);
	printf("\nAfter call by reference: %d %d",a,b);
	return 0;
}
