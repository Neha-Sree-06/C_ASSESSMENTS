#include<stdio.h>
int main()
{
    int a[5], b[5], i, n, rev, sum = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        n = a[i];
        rev = 0;
        while(n > 0)
        {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        b[i] = rev;
        sum += b[i];
    }

    for(i = 0; i < 5; i++)
        printf("%d ", b[i]);

    printf("\n%d", sum);

    return 0;
}
