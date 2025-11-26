#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter a number x:");
    scanf("%d",&x);
    y=(x/10)%10;
    z=x-5*(y%2);
    printf("Output:%d",z);

    return 0;
}