#include <stdio.h>

int main() 
{
    int num, temp, last, secondLast, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    for (int i=temp; i >= 10; i = i / 10)     
    {
        last = i % 10;
        secondLast = (i/ 10) % 10;

        int twoDigit = secondLast * 10 + last;

        if (twoDigit % 2 == 1) 
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
