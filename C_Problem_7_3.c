#include<stdio.h>
void disp_sum(int);
int main()
{
    disp_sum(5);
}

void disp_sum(int n)
{
    int sum=0,i=1;
    while(i<=n)
    {
        sum+=i;
        i+=1;
    }
    printf("Sum=%d",sum);
}