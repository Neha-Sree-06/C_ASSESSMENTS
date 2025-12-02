#include<stdio.h>
int main()
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
    printf("Sum=%d",sum);
    return 0;
}
