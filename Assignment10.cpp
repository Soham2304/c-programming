#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf(" Enter the value of a:");
    scanf("%d",a);
    printf(" \nEnter the value of b:");
    scanf("%d",b);
    a= a+b;
    b= a-b;
    printf(" \nThe new value of b:%d",b);
    a= a-b;
    printf(" \nThe new value of a:%d",a);
    getchar();
    return 0;
}
