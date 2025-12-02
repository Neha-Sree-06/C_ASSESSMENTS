#include <stdio.h>

int main() 
{
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) 
    {
        isPrime = 0;
    } 
    else 
    {
        int i=2;
        while(i <= num / 2) 
        {
            if (num % i == 0) 
            {
                isPrime = 0;
                break;
            }
            i++;
        }
    }

    if (isPrime == 1)
        printf("%d is prime\n", num);
    else
        printf("%d is not prime\n", num);

    return 0;
}
