#include <stdio.h>

int main() 
{
    int num, mid, i, isPrime = 1;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    mid = (num / 10) % 100;

    if (mid <= 1) 
    {
        isPrime = 0;
    } 
    else 
    {
        for (i = 2; i <= mid / 2; i++) 
        {
            if (mid % i == 0) 
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
