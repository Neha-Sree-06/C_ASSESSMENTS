#include <stdio.h>

int main() 
{
    int num, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i=num; i > 0; i = i/ 10) 
    {
        digit = i % 10;
        if (digit % 2 == 1)
            count++;
    }

    printf("%d", count);

    return 0;
}
