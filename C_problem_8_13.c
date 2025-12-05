#include<stdio.h>
int disp_single_digit_square(int);
int main()
{   
    int num,count;
    printf("Enter a number: ");
    scanf("%d", &num);
    count=disp_single_digit_square(num);
    printf("%d\n", count);
    return 0;
}

int disp_single_digit_square(int num)
{
    int digit, count = 0;

    while(num>0) 
    {
        digit=num%10;

        if (digit == 1 || digit == 4 || digit == 9)
            count++;
        
        num/=10;
    }
    return count;
}