#include <stdio.h>

int main() 
{
    int i = 1;

start:

    if(i%2==1)
        printf("%d\n", i);

    i++;

    if (i <= 9)
        goto start;

    return 0;
}