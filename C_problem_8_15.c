#include<stdio.h>
int disp_single_digit_prime(int);
int main()
{   
    int num,count;
    printf("Enter a number: ");
    scanf("%d", &num);
    count=disp_single_digit_prime(num);
    printf("%d\n", count);
    return 0;
}

int disp_single_digit_prime(int num)
{
    int digit, count = 0;

    while(num>0) 
    {
        digit = num% 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
            count++;
        num/=10;
    }
    return count;
}