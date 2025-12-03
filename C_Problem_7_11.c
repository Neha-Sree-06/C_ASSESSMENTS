#include<stdio.h>
void count_total_digits(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    count_total_digits(x);
    return 0;
}

void count_total_digits(int x)
{
    int count=0;
    while(x!=0)
    {       
        count++;
        x=x/10;
    }

    printf("Number of digits:%d",count);
}