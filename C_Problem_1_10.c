#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter a three digit number x:");
    scanf("%d",&x);
    y=(x/10)%10;
    printf("Ten's digit is %d",y);

    return 0;
}