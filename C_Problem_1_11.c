#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter a two digit number x:");
    scanf("%d",&x);
    y=x/10;
    z=x%10;
    printf("The sum of two digits is %d",y+z);

    return 0;
}