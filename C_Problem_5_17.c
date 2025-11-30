#include <stdio.h>

int main() {
    int num, i, isPrime = 1, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (isPrime == 1 && sum == 14)
        printf("Prime & Sum of digits is 14\n");
    else if (isPrime == 1 && sum != 14)
        printf("Prime & Sum of digits is not 14\n");
    else if (isPrime == 0 && sum == 14)
        printf("Not Prime but Sum of digits is 14\n");
    else
        printf("Not Prime & Sum of digits is not 14\n");

    return 0;
}
