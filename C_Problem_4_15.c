#include <stdio.h>

int main() {
    int num, temp, power = 1, last, first, middle, result;
    printf("Enter a number:");
    scanf("%d", &num);

    temp = num;

start:          
    if (temp >= 10) {
        temp = temp / 10;
        power = power * 10;
        goto start;
    }

    first = temp;         
    last = num % 10;  
    middle = num % power; 

    first = first - (last % 2); 

    result = first * power + middle;

    printf("%d", result);

    return 0;
}
