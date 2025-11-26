#include<stdio.h>

int main()
{
    int x,a,b,c;
    printf("Enter a three digit number x:");
    scanf("%d",&x);
    a=x/100;
    b=(x/10)%10;
    c=x%10;
    printf("The sum of three digits is %d",a+b+c);

    return 0;
}