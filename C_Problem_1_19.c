#include<stdio.h>

int main()
{
    int x,a,b,c,r;
    printf("Enter a three digit number x:");
    scanf("%d",&x);
    a=x/100;
    b=(x/10)%10;
    c=x%10;
    r=(a*100)+(b*10)+2;
    printf("Output: %d",r);

    return 0;
}