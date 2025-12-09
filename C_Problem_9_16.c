#include <stdio.h>

int main() {
    int a[50], b[50], sum[51];
    int i, carry = 0;

    for(i = 0; i < 51; i++) 
        sum[i] = 0;

    printf("Enter 50 digits for first number :\n");
    for(i = 0; i < 50; i++) 
        scanf("%d", &a[i]);

    printf("Enter 50 digits for second number:\n");
    for(i = 0; i < 50; i++)     
        scanf("%d", &b[i]);

    for(i = 0; i < 50; i++) 
    {
        sum[i] = a[i] + b[i] + carry;
        carry = sum[i] / 10;
        sum[i] %= 10;
    }
    sum[50] = carry;

    printf("Sum: ");
    int started = 0;
    for(i = 50; i >= 0; i--) 
    {
        if(sum[i] != 0) started = 1;
        if(started) printf("%d", sum[i]);
    }
    if(!started) 
    printf("0");

    return 0;
}
