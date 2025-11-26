#include<stdio.h>

int main() 
{
    int i = 10,a,b,s,sum=0;

start:

    if(i%2==1)  
    {
        a=i/10;
        if(a==7)
            sum+=i;
    }
    i++;

    if (i <100)
        goto start;

    printf("Sum=%d",sum);
    return 0;
}