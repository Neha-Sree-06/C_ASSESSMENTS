#include <stdio.h>

int main() 
{
    int num, temp, last, secondLast, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp= num;

    while(temp>=10)     
    {
        last=temp%10;
        secondLast=(temp/10)%10;

        int twoDigit=secondLast*10+last;

        if (twoDigit%2==1) 
        {
            count++;
        }
        temp/=10;
    }

    printf("%d\n", count);

    return 0;
}
