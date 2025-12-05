#include<stdio.h>
int disp_2digit_ones5(int);
int main()
{
    int sum;
    sum=disp_2digit_ones5(99);
    printf("Sum=%d",sum);
    return 0;
}

int disp_2digit_ones5(int n)
{
    int a,b,s,sum=0,i=11;
    while(i<=99)
    {
        a=i/10;
        b=i%10;
        s=a+b;
        if(b==5)
            sum+=i;
        i++;
    }
    return sum;
    
}