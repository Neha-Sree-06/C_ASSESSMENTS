#include <stdio.h>

int main() 
{
    int i = 6,sum=0;

start:
    sum+=i;
    i--;

    if (i>0)
        goto start;

    printf("Sum=%d",sum);
    return 0;
}