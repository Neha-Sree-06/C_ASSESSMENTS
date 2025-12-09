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

    if(i == 4 && a[0] == a[i-1])
        printf("Success");
    else
        printf("Failure");

    return 0;
}
