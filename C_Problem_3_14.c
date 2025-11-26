#include<stdio.h>

int main()
{
    int x,a,b,c,d,y,z,out;
    printf("Enter a four digit number x:");
    scanf("%d",&x);
    a=x/1000;
    b=(x/100)%10;
    c=(x/10)%10;
    d=x%10;
    y=(a*10)+b;
    z=(c*10)+d;
    if(y==z)
        printf("Success");
    else
        printf("Failure");

    return 0;
}