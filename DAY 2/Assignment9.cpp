#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,b=15,c=0;    
    printf(" The initial value of a is:%d",a);
    printf(" The initial value of b is:%d",b);
    c=a;
    a=b;
    b=c;
    printf(" The new value of a is:%d",a);
    printf(" The new value of b is:%d",b);
    getchar();
    return 0;
}
