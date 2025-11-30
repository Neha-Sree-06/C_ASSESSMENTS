#include <stdio.h>

int main() {
    int num, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i=num; i> 0; i /= 10) {
        digit = i % 10;

        if (digit == 1 || digit == 4 || digit == 9)
            count++;
    }

    printf("%d\n", count);

    return 0;
}
