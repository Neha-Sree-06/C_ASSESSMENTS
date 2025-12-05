#include<stdio.h>
int disp_sum_all_digits(int);
int main()
{
    int x,sum;
    printf("Enter a number:");
    scanf("%d",&x);
    sum=disp_sum_all_digits(x);
    printf("Sum of digits:%d",sum);
    return 0;
}

int disp_sum_all_digits(int x)
{
    int sum=0;
    while(x!=0)
    {
        sum+=x%10;
        x=x/10;
    }
    return sum;
    
}