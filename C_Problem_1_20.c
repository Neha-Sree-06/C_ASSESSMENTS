#include<stdio.h>

int main()
{
    int x,a,c,r;
    printf("Enter a three digit number x:");
    scanf("%d",&x);
    a=x/100;
    c=x%10;
    r=(a*100)+c;
    printf("Output:%d",r);

    return 0;
}