#include<stdio.h>
void disp_2digit_even_sum6(int);
int main()
{
    disp_2digit_even_sum6(99);
}

void disp_2digit_even_sum6(int n)
{
   int a,b,s,i=11;
    while(i<=n)
    {
        if(i%2==0)  
        {
            a=i/10;
            b=i%10;
            s=a+b;
            if(s==6)
                printf("%d\n", i);
        }
        i++;
    }
}