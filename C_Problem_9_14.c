#include <stdio.h>

int main() 
{
    int a[100], i = 0, num;

    while(1) 
    {
        scanf("%d", &num);
        if(num == 0)
            break;
        a[i++] = num;
    }

    if(i == 0) 
    {
        printf("No numbers entered");
        return 0;
    }

    if(i % 2 != 0) 
    {
        printf("%d", a[i/2]);
    } 
    else 
    {
        int mid1 = a[i/2 - 1];
        int mid2 = a[i/2];
        printf("%.2f", (mid1 + mid2) / 2.0);
    }

    return 0;
}
