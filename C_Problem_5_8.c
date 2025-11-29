#include<stdio.h>
int main()
{
    int a,b,s;
    for(int i=11;i<=99;i++)
    {
        if(i%2==0)  
        {
            a=i/10;
            b=i%10;
            s=a+b;
            if(s==6)
                printf("%d\n", i);
        }
    }
    return 0;
}
