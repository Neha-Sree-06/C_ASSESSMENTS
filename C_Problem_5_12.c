#include<stdio.h>
int main() 
{
    int x,sum=0;
    printf("Enter a number:");
    scanf("%d",&x);

    for(int i=x;i!=0;i=i/10)
    {
        sum+=i%10;
    }

    printf("Sum of digits:%d",sum);
    return 0;
}