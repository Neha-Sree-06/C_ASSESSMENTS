#include<stdio.h>
void disp_interchange_first_last_digit(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    disp_interchange_first_last_digit(n);
    return 0;
}

void disp_interchange_first_last_digit(int n)
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
    printf("%d\n", result);
}