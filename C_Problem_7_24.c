#include<stdio.h>
void disp_two_digit_square(int);
int main()
{
    
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    disp_two_digit_square(num);
    return 0;
}

void disp_two_digit_square(int num)
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

    printf("%d\n", count);


}