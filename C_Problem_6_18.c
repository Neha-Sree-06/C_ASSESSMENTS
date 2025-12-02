#include <stdio.h>

int main() 
{
    int num, lastTwo, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastTwo = num % 100; 

    if (lastTwo <= 1) 
    {
        isPrime = 0;
    } 
    else 
    {
        int i=2;
        while(i <= lastTwo / 2) 
        {
            if (lastTwo % i == 0) 
            {
                isPrime = 0;
                break;
            }
            i++;
        }
    }

    if (isPrime == 1)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
