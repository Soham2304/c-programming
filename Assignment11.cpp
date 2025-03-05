#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float p,r,t,n;
    float amt,CI;
    printf(" Enter the principal amount:");
    scanf("%f",&p);
    printf(" \nEnter the rate:");
    scanf("%f",&r);
    printf(" \nEnter the time period:");
    scanf("%f",&t);
    printf(" \nEnter n:");
    scanf("%f",&n);
    amt= p*pow((1+(r/n)),n*t);
    CI= amt-p;
    printf(" \nThe amount is:%f",amt);
    printf(" \nThe compound interest is:%f",CI);
    getchar();
    return 0;
}
