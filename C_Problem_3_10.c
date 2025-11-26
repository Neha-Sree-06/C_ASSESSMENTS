#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a two digit number:");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    if(c>b)
        printf("Success");
    else
        printf("Failure");

    return 0;
}