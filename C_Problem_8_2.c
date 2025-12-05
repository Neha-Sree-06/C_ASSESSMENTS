
#include<stdio.h>
int disp_rsum(int);
int main()
{
    int sum;
    sum=disp_rsum(6);
    printf("Sum=%d",sum);
    return 0;
}

int disp_rsum(int n)
{
    int sum=0,i=n;
    while(i>=1)
    {
        sum+=i;
        i--;
    }
    return sum;
    
}

