#include <stdio.h>

int main() 
{
    int num, temp, sum, count = 0;
    int i=1;

    while(i < 100000) 
    {
        
        sum = 0;
        temp=i;
        while(temp!=0) 
        {
            sum += temp % 10;
            temp/=10;
        }

        if (sum == 14) 
        {
            count++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}
