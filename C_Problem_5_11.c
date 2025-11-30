#include<stdio.h>
int main() 
{
    int x,count=0;
    printf("Enter a number:");
    scanf("%d",&x);

    for(int i=x;i!=0;i=i/10)
    {       
        count++;
    }

    printf("Number of digits:%d",count);
    return 0;
}