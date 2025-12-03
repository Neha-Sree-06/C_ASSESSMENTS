#include<stdio.h>
void check_last_digit_odd(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    check_last_digit_odd(x);
    return 0;
}

void check_last_digit_odd(int num)
{
    int temp, pow= 1, last, first, middle, result;
    temp = num;

    while(temp>=10)
    {
        pow=pow*10;
        temp/=10;
    }

    first = num/pow;         
    last = num % 10;  
    middle = num % pow; 

    first = first - (last % 2); 
    result = first * pow + middle;
    
    printf("%d", result);
}