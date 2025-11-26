#include<stdio.h>

int main()
{
    int x,y,z,r;
    printf("Enter a two digit number x:");
    scanf("%d",&x);
    y=x/10;
    z=x%10;
    r=(z*10)+(y*1);
    printf("The reversed number is %d",r);

    return 0;
}