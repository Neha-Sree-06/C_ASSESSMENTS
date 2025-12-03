#include<stdio.h>
int main()

{
    int n,r=0,rem;
    printf("Enter a number:");
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%10;
        r=r*10+rem; 
        n=n/10;      
    }

    printf("Reversed number:%d",r);
}
