#include<stdio.h>
int main()
{
    int a,b,s,i=11;
    while(i<=99)
    {
        if(i%2==1)  
        {
            a=i/10;
            b=i%10;
            s=a+b;
            if(s==7 )
                printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
