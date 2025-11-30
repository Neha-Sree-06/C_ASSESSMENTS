#include <stdio.h>

int main() {
    int num, temp, pow= 1, last, first, middle, result;
    printf("Enter a number:");
    scanf("%d", &num);

    temp = num;

    for(int i=temp;i>=10;i=i/10)
    {
        pow=pow*10;
    }

    first = temp/pow;         
    last = num % 10;  
    middle = num % pow; 

    first = first - (last % 2); 

    result = first * pow + middle;

    printf("%d", result);

    return 0;
}
