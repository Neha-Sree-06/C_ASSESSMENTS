#include<stdio.h>
int main() 
{
    int x,sum=0;
    printf("Enter a number:");
    scanf("%d",&x);

    while(x!=0)
    {
        sum+=x%10;
        x=x/10;
    }

    printf("Sum of digits:%d",sum);
    return 0;
}