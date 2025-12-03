#include<stdio.h>
void disp_2digit_even_sum6(int);
int main()
{
    disp_2digit_even_sum6(9);
    return 0;
}

void disp_2digit_even_sum6(int n)
{
    int count = 0, i, j, isPrime;

    i=1;
    while(i <= n) 
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

}