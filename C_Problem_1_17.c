#include<stdio.h>

int main()
{
    int x,y,r;
    printf("Enter a two digit number x:");
    scanf("%d",&x);
    y=x/10;
    
    r=(y*10);
    printf("Output:%d",r);

    return 0;
}