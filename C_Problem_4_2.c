#include <stdio.h>

int main() 
{
    int i = 5;

start:
    printf("%d\n", i);
    i--;

    if (i>0)
        goto start;

    return 0;
}