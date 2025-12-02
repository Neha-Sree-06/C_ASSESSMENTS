#include <stdio.h>

int main() 
{
    int count = 0, i, j, isPrime;

    i=1;
    while(i <= 9) 
    {
        if (i <= 1) 
            continue;

        isPrime = 1;
        j=2;
        while(j <= i / 2) 
        {
            if (i % j == 0) 
            {
                isPrime = 0;
                break;
            }
            j++;
        }
        if (isPrime == 1) 
            count++;
        i++;
    }

    printf("%d", count);

    return 0;
}
