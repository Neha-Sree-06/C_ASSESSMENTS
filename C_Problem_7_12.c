#include<stdio.h>
void disp_sum_all_digits(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    disp_sum_all_digits(x);
    return 0;
}

void disp_sum_all_digits(int x)
{
    int sum=0;
    while(x!=0)
    {
        sum+=x%10;
        x=x/10;
    }

    printf("Sum of digits:%d",sum);
}