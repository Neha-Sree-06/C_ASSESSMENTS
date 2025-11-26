#include<stdio.h>

int main() 
{
    int i = 10,a,b,s;

start:

    if(i%2==0)  
    {
        a=i/10;
        b=i%10;
        s=a+b;
        if(s==6)
            printf("%d\n", i);
    }
    i++;

    if (i <100)
        goto start;

    return 0;
}