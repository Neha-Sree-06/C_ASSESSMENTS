#include<stdio.h>
int disp_sum(int);
int main()
{
    int sum;
    sum=disp_sum(5);
    printf("Sum=%d",sum);
    return 0;
}

int disp_sum(int n)
{
    int sum=0,i=1;
    while(i<=n)
    {
        sum+=i;
        i+=1;
    }
    return sum;
   
}

