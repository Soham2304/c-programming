#include<stdio.h>
#include<conio.h>
int main()
{
    float p,r,t,SI;
    printf(" Enter the principal amount:");
    scanf("%f",&p);
    printf(" Enter the rate:\n");
    scanf("%f",&r);
    printf(" Enter the time:\n");
    scanf("%f",&t);
    SI= (p*r*t)/100;
    printf(" \nThe simple interest is= %f",SI);
    getchar();
    return o;
}
