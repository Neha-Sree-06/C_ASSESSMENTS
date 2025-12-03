
#include<stdio.h>
void disp_rsum(int);
int main()
{
    disp_rsum(6);
    return 0;
}

void disp_rsum(int n)
{
    int sum=0,i=n;
    while(i>=1)
    {
        sum+=i;
        i--;
    }
    printf("Sum=%d",sum);
}

