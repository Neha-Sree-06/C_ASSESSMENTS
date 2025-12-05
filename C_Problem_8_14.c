#include<stdio.h>
int disp_two_digit_square(int);
int main()
{ 
    int num,count;
    printf("Enter a number: ");
    scanf("%d", &num);
    count=disp_two_digit_square(num);
    printf("%d\n", count);
    return 0;
}

int disp_two_digit_square(int num)
{
    int last, secondLast, count = 0;

    while(num>= 10) 
    {
        last = num % 10;
        secondLast=(num/10)%10;

        int twoDigit=secondLast*10+last;

        if (twoDigit == 16 || twoDigit == 25 || twoDigit == 36 ||
            twoDigit == 49 || twoDigit == 64 || twoDigit == 81) {
            count++;
        }
        num/=10;
    }
    return count;
}