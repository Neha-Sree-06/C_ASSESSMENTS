#include<stdio.h>
void disp_odd(int);
int main()
{
    disp_odd(9);
    return 0;
}

void disp_odd(int n)
{
    int i=1;
    while(i<=n)
    {
        if(i%2==1)
            printf("%d\n",i);
        i++;
    }
}