#include<stdio.h>
int main()

{
    int n,r=0,rem;
    printf("Enter a number:");
    scanf("%d",&n);

    for(int i=n;i!=0;i=i/10)
    {
        rem=i%10;
        r=r*10+rem;       
    }

    printf("Reversed number:%d",r);
}