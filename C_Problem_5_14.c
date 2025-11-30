#include <stdio.h>

int main() {
    int num, temp, first, last, pow = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;  

    for(int i=temp;i>=10;i=i/10)
    {
        pow = pow * 10;
    }

    first = temp/pow;               
    middle = (num % pow) / 10;   
    result = last * pow +middle * 10 + first;
    printf("%d\n", result);
    return 0;
}

