#include <stdio.h>

int main() 
{
    int n, temp, first, last, pow= 1, middle, result;

    printf("Enter a number:");
    scanf("%d",&n);

    temp=n;
    last=n%10;  

    while(temp>=10)
    {
        pow=pow*10;
        temp/=10;
    }

    first=n/pow;               
    middle=(n%pow)/10;   
    result=last*pow+middle*10+first;
    printf("%d\n", result);
    return 0;
}

