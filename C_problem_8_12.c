#include<stdio.h>
int disp_total_2digit_odd(int);
int main()
{
    
    int num,count;
    printf("Enter a number: ");
    scanf("%d", &num);
    count=disp_total_2digit_odd(num);
    printf("%d\n", count);
    return 0;
}

int disp_total_2digit_odd(int num)
{
    int temp, last, secondLast, count = 0;
    temp= num;

    while(temp>=10)     
    {
        last=temp%10;
        secondLast=(temp/10)%10;

        int twoDigit=secondLast*10+last;

        if (twoDigit%2==1) 
        {
            count++;
        }
        temp/=10;
    }
    return count;
}