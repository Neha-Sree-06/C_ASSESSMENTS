#include<stdio.h>
int disp_interchange_first_last_digit(int);
int main()
{
    int n,result;
    printf("Enter a number:");
    scanf("%d",&n);
    result=disp_interchange_first_last_digit(n);
    printf("%d\n", result);
    return 0;
}

int disp_interchange_first_last_digit(int n)
{
    int temp, first, last, pow= 1, middle, result;

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
    return result;
}