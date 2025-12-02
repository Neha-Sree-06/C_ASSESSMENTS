#include<stdio.h>
int main()
{
    int a,b,s,i=11;
    while(i<=99)
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
    return 0;
}
