#include <stdio.h>

void arrange_ascend(int *p) 
{
    for(int i = 0; i < 5; i++) 
    {
        *(p+i)=i+1;
    }
}

int main() 
{
    int a[5];
    arrange_ascend(a);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
