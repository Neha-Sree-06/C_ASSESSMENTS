#include<stdio.h>
int disp_2digit_odd_sum_tens7(int);
int main()
{
    int sum;
    sum=disp_2digit_odd_sum_tens7(99);
    printf("Sum=%d",sum);
    return 0;
}

int disp_2digit_odd_sum_tens7(int n)
{
    int a,b,s,sum=0,i=11;
    while(i<=n)
    {
        if(i%2==1)  
        {
            a=i/10;
            b=i%10;
            s=a+b;
            if(a==7)
                sum+=i;
        }
        i++;
    }
    return sum;
    
}