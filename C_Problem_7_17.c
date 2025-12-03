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
    int i, isPrime = 1, sum = 0, temp;
    
    if (num <= 1) 
    {
        isPrime = 0;
    } 
    else 
    {
        int i=2;
        while(i <= num/2) 
        {
            if (num % i == 0) 
            {
                isPrime = 0;
                break;
            }
            i++;
        }
    }

    int j=num;
    while(j!=0)
    {
        sum += j% 10;
        j/=10;
    }

    if (isPrime == 1 && sum == 14)
        printf("Prime & Sum of digits is 14\n");
    else if (isPrime == 1 && sum != 14)
        printf("Prime & Sum of digits is not 14\n");
    else if (isPrime == 0 && sum == 14)
        printf("Not Prime but Sum of digits is 14\n");
    else
        printf("Not Prime & Sum of digits is not 14\n");
}