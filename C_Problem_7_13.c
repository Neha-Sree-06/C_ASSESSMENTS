#include<stdio.h>
void disp_reverse_number(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    disp_reverse_number(n);
    return 0;
}

void disp_reverse_number(int n)
{
    int r=0,rem;
    while(n!=0)
    {
        rem=n%10;
        r=r*10+rem; 
        n=n/10;      
    }

    printf("Reversed number:%d",r);
}