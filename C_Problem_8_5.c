#include<stdio.h>
int count_total_digits(int);
int main()
{
    int x,count;
    printf("Enter a number:");
    scanf("%d",&x);
    count=count_total_digits(x);
    printf("Number of digits:%d",count);
    return 0;
}

int count_total_digits(int x)
{
    int count=0;
    while(x!=0)
    {       
        count++;
        x=x/10;
    }
    return count;
    
}