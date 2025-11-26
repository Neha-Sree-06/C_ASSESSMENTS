#include<stdio.h>

int main()
{
    int x,a,b,c,y;
    printf("Enter a three digit number x:");
    scanf("%d",&x);
    a=x/100;
    b=(x/10)%10;
    c=x%10;
    y=x-5*(c%2)*(b%2);
    printf("Output:%d",y);

    return 0;
}