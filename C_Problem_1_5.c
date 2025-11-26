#include <stdio.h>

int main() 
{
    int x,y;
    printf("Enter a number x:");
    scanf("%d",&x);
    y=x%8;
    printf("%d%8=%d",x,y);

    return 0;
}