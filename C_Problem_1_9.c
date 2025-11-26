#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter a three digit number x:");
    scanf("%d",&x);
    y=x/100;
    printf("Hundred's digit is %d",y);

    return 0;
}