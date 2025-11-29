#include<stdio.h>
int main()
{
    int a,b,s,sum=0;
    for(int i=11;i<=99;i++)
    {
        if(i%2==1)  
        {
            a=i/10;
            b=i%10;
            s=a+b;
            if(a==7)
                sum+=i;
        }
    }
    printf("Sum=%d",sum);
    return 0;
}
