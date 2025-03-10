#include<stdio.h>
#include<conio.h>
int main()
{
    int l,b;
    float area,peri;
    printf(" Enter the length of the rectangle:");
    scanf("%d",&l);
    printf(" \nEnter the breadth of the rectangle:");
    scanf("%d",&b);
    area= l*b;
    peri= 2*(l+b);
    printf(" \nThe area of the rectangle is:%f",area);
    printf(" \nThe perimeter of the rectangle is:%f",peri);
    getchar();
    return 0:
}
