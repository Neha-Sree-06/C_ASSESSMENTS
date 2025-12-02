#include <stdio.h>

int main() 
{
    int num, last, secondLast, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

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

    return 0;
}
