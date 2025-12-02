#include <stdio.h>

int main() 
{
    int num, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num>0) 
    {
        digit=num%10;
        if (digit%2==1)
            count++;
        num=num/10;
    }
    printf("%d", count);

    return 0;
}
