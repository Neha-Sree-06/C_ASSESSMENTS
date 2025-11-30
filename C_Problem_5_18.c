#include <stdio.h>

int main() {
    int num, lastTwo, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastTwo = num % 100; 

    if (lastTwo <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= lastTwo / 2; i++) {
            if (lastTwo % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
