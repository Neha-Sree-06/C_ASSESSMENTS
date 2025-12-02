#include <stdio.h>

int main() {
    int num1, num2, i, hcf = 1, min;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2)
        min = num1;
    else
        min = num2;

    i=1;
    while(i <= min) 
    {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
        i++;
    }

    printf("%d", hcf);

    return 0;
}
