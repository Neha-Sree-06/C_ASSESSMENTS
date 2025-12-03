#include<stdio.h>
void disp_2digit_odd_sum7(int);
int main()
{
    disp_2digit_odd_sum7(99);
    return 0;
}

void disp_2digit_odd_sum7(int n)
{
    int a,b,s,i=11;
    while(i<=n)
    {
        if(i%2==1)  
        {
            a=i/10;
            b=i%10;
            s=a+b;
            if(s==7 )
                printf("%d ", i);
        }
        i++;
    }
}