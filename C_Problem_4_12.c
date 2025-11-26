#include<stdio.h>
int main() 
{
    int x,count=0,sum=0;
    printf("Enter a number:");
    scanf("%d",&x);

start:
    sum+=x%10;
    x=x/10;
    if(x!=0)      
        goto start;

    printf("Sum of digits:%d",sum);
    return 0;
}