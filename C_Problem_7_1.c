#include<stdio.h>
void disp_assend(int);
int main()
{
    disp_assend(5);
    return 0;
}

void disp_assend(int n)
{
    int i=1;
    while(i<=n)
    {
        printf("%d\n",i);
        i+=1;
    }
}