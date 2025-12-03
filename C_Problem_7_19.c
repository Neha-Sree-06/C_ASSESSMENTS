#include<stdio.h>
void middle_2digits_prime(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    middle_2digits_prime(x);
    return 0;
}

void middle_2digits_prime(int num)
{
    int mid, i, isPrime = 1;
    mid = (num / 10) % 100;

    if (mid <= 1) 
    {
        isPrime = 0;
    } 
    else 
    {
        i=2;
        while(i <= mid / 2) 
        {
            if (mid % i == 0) 
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