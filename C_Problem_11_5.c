#include <stdio.h>

void memcopy(int *src, int *dst, int size) 
{
    for(int i = 0; i < size; i++) 
    {
        *(dst + i) = *(src + i);   
    }
}

int main() 
{
    int a[5] = {10, 20, 30, 40, 50};
    int b[5];

    memcopy(a, b, 5);

    for(int i = 0; i < 5; i++) 
    {
        printf("%d ", b[i]);
    }

    return 0;
}
