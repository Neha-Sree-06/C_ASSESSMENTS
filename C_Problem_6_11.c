#include<stdio.h>
int main() 
{
    int x,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x!=0)
    {       
        count++;
        x=x/10;
    }

    printf("Number of digits:%d",count);
    return 0;
}