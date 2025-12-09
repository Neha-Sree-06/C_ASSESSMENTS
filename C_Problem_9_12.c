#include <stdio.h>

int main()
{
    int a[100], i = 0, num, sum = 0;

    while(1)
    {
        scanf("%d", &num);
        if(num == 0)
            break;
        a[i] = num;
        sum += num;
        i++;
    }

    printf("Total numbers entered: %d\n", i);
    printf("Sum of numbers: %d", sum);

    return 0;
}
