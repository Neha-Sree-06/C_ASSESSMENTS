#include <stdio.h>

int main() 
{
    int num, temp, sum, count = 0;
    int i;

    for (i = 1; i < 100000; i++) 
    {
        
        sum = 0;

        for (temp = i; temp > 0; temp /= 10) 
        {
            sum += temp % 10;
        }

        if (sum == 14) 
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
