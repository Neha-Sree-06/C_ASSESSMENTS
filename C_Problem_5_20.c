#include <stdio.h>

int main() 
{
    int count = 0, i, j, isPrime;

    for (i = 1; i <= 9; i++) 
    {
        if (i <= 1) 
            continue;

        isPrime = 1;
        for (j = 2; j <= i / 2; j++) 
        {
            if (i % j == 0) 
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) 
            count++;
    }

    printf("%d", count);

    return 0;
}
