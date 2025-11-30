#include <stdio.h>

int main() 
{
    int num, last, secondLast, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);



    for (int i=num; i>= 10; i = i/ 10) 
    {
        last = i % 10;
        secondLast = (i / 10) % 10;

        int twoDigit = secondLast * 10 + last;

        if (twoDigit == 16 || twoDigit == 25 || twoDigit == 36 ||
            twoDigit == 49 || twoDigit == 64 || twoDigit == 81) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
