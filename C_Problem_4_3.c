#include <stdio.h>

int main() 
{
    int i=1,sum=0;

start:
    sum+=i;
    i++;
    if (i <= 5)
        goto start;
    printf("Sum=%d",sum);
    return 0;
}