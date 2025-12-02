#include<stdio.h>
void disp_descend(int);
int main()
{
    disp_descend(5);
}

void disp_descend(int n)
{
    int i=n;
    while(i>0)
    {
        printf("%d\n",i);
        i-=1;
    }
}