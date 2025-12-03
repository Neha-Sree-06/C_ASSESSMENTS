#include<stdio.h>
void check_prime(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    check_prime(x);
    return 0;
}

void check_prime(int num)
{
    int i, isPrime = 1;

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
}