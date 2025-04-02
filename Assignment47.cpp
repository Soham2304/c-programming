#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
	{
        scanf("%d", &a[i]);
    }
    int st = 0, end = n - 1;
    while (st < end)
	{
        int temp = a[st];
        a[st] = a[end];
        a[end] = temp;
        st++;
        end--;
    }
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", a[i]);
    }
    
    return 0;
}