#include<stdio.h>
int main()

{
    int n,r=0,rem;
    printf("Enter a number:");
    scanf("%d",&n);

    start:
        rem=n%10;
        r=r*10+rem;
        n=n/10;

        if(n!=0)
            goto start;

    printf("Reversed number:%d",r);
}