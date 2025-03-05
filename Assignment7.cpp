#include<stdio.h>
#include<conio.h>
int main()
{
    float area,r;
    printf(" Enter the radius:");
    scanf("%f",&r);
    area= 3.14*r*r;
    printf(" \nThe area of the circle is:%f",area);
    getchar();
    return 0;
}
