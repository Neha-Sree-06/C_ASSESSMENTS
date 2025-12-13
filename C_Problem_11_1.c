#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number x:");
    scanf("%d",&x);
    printf("Number:%d",x);
    int *p;
    p=&x;
    *p=20;
    printf("\nNumber after change:%d",x);
    return 0;
}