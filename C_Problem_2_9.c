#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter a two digit number:");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    d=(c<b);
    printf("Output: %d",d);

    return 0;
}