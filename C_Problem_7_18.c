#include<stdio.h>
void check_first_2digits_prime(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    check_first_2digits_prime(x);
    return 0;
}

void check_first_2digits_prime(int num)
{
    int lastTwo, isPrime = 1;

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
}