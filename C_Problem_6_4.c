#include<stdio.h>
int main()
{
    int sum=0,i=6;
    while(i>=1)
    {
        sum+=i;
        i--;
    }
    printf("Sum=%d",sum);
    return 0;
}