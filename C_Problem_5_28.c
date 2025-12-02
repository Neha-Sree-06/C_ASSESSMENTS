#include <stdio.h>

int main() {
    int num1, num2, max, lcm, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
        max = num1;
    else
        max = num2;

    for (i = max; ; i++) {
        if (i % num1 == 0 && i % num2 == 0) {
            lcm = i;
            break;
        }
    }

    printf("%d", lcm);

    return 0;
}
