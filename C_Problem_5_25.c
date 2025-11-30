#include <stdio.h>

int main() 
{
    int num, digit, count = 0, i;

    printf("Enter a number: ");
    scanf("%d", &num);


    for (int i=num; i > 0; i=i/10) 
    {
        digit = i % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
            count++;
    }

    printf("%d\n", count);

    return 0;
}