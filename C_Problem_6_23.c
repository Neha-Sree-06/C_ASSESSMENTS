#include <stdio.h>

int main() 
{
    int num, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num>0) 
    {
        digit=num%10;

        if (digit == 1 || digit == 4 || digit == 9)
            count++;
        
        num/=10;
    }

    printf("%d\n", count);

    return 0;
}
