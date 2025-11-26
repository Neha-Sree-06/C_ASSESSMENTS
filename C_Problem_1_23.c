#include<stdio.h>

int main()
{
    int x,a,b,s,y;
    printf("Enter a two digit number x:");
    scanf("%d",&x);
    a=x/10;
    b=x%10;
    s=a+b;
    y=x-5*(s%2);
    printf("Output:%d",y);

    return 0;
}