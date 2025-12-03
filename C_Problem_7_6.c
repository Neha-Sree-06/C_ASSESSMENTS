#include<stdio.h>
void disp_2digit_odd_below20(int);
int main()
{
    disp_2digit_odd_below20(20);
    return 0;
}

void disp_2digit_odd_below20(int n)
{
    int i=11;
    while(i<n)
    {
        if(i%2==1)
            printf("%d\n",i);
        i++;
    }
}
