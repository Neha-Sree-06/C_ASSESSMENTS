#include <stdio.h>

int main() 
{
    int i;
    i=9999;
    while(i >= 1000) 
    {
        if (i % 7 == 0 || i % 9 == 0) 
        {
            printf("%d\n", i);
            break;
        }
        i--;
    }

    return 0;
}
