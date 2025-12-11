#include <stdio.h>

void arrange_ascend(int *p) 
{
    for(int i = 0; i < 5; i++) {
        printf("%d\n", *(p + i));
    }
}

int main() 
{
    int a[5] = {1, 2, 3, 4, 5};
    arrange_ascend(a);
    return 0;
}
