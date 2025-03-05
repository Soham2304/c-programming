#include<stdio.h>
#include<conio.h>
int main()
{
    float c1,c2,f1,f2;
    printf(" Enter the Fahrenheit value:");
    scanf("%f",&f1);
    c1= (f1-32)*(5/9);
    printf(" \nThe equivalent celcius value is:%f",c1);
    printf(" \nEnter the Celcius value:");
    scanf("%f",&c2);
    f2= ((9/5)*c2)+32;
    printf(" \nThe equivalent Fahrenheit value is:%f",f2);
    getchar();
    return 0:
}
