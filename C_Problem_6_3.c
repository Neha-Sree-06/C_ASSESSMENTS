#include<stdio.h>
int main()
{
    int sum=0,i=1;
    while(i<=5)
    {
        sum+=i;
        i+=1;
    }
    printf("Sum=%d",sum);
    return 0;
}