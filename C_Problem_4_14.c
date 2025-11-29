#include <stdio.h>

int main() {
    int num, temp, first, last, pow = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;  

    start:
        pow = pow * 10;
        temp = temp / 10;

        if (temp >= 10)
            goto start;

    first = temp;               
    middle = (num % pow) / 10;   
    result = last * pow +middle * 10 + first;
    printf("%d\n", result);
    return 0;
}

