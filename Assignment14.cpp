#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf(" Enter three numbers:");
    scanf("%f %f %f",&a,&b,&c);
    printf(" \nNumber\t Floor\t Ceiling");
    printf(" \n%f\t %f\t %f",a,floor(a),ceil(a));
    printf(" \n%f\t %f\t %f",b,floor(b),ceil(b));
    printf(" \n%f\t %f\t %f",c,floor(c),ceil(c));
    getchar();
    return 0;
}
