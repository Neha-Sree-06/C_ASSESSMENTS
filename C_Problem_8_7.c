#include<stdio.h>
int disp_reverse_number(int);
int main()
{
    int n,r;
    printf("Enter a number:");
    scanf("%d",&n);
    r=disp_reverse_number(n);
    printf("Reversed number:%d",r);
    return 0;
}

int disp_reverse_number(int n)
{
    int r=0,rem;
    while(n!=0)
    {
        rem=n%10;
        r=r*10+rem; 
        n=n/10;      
    }
    return r;

    
}