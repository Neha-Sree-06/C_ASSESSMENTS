#include<stdio.h>
int disp_total_odd_digits(int);
int main()
{   
    int num,count;
    printf("Enter a number: ");
    scanf("%d", &num);
    count=disp_total_odd_digits(num);
    printf("%d", count);
    return 0;
}

int disp_total_odd_digits(int num)
{
    int digit, count = 0;
    while(num>0) 
    {
        digit=num%10;
        if (digit%2==1)
            count++;
        num=num/10;
    }
    return count;
}