#include<stdio.h>

int main()
{
    int x,a,b,c,d,r;
    printf("Enter a four digit number x:");
    scanf("%d",&x);
    a=x/1000;
    b=(x/100)%10;
    c=(x/10)%10;
    d=x%10;
    r=(a*1000)+(b*100)+(d*10)+(c*1);
    printf("The reversed number is %d",r);

    return 0;
}