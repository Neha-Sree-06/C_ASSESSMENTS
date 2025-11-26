#include<stdio.h>
int main() 
{
    int x,count=0;
    printf("Enter a number:");
    scanf("%d",&x);

start:
    x=x/10;
    count+=1;
    if(x!=0)      
        goto start;

    printf("Number of digits:%d",count);
    return 0;
}