#include<stdio.h>

int main()
{
    int x,z,r;
    printf("Enter a two digit number x:");
    scanf("%d",&x);
    z=x%10;
    r=10+z;
    printf("Output:%d",r);

    return 0;
}