#include <stdio.h>

int main() 
{
    int x,y;
    printf("Enter a two digit number x:");
    scanf("%d",&x);
    y=x-5*(x%2);
    printf("Output=%d",y);

    return 0;
}