#include<stdio.h>
int disp_biggest_4digit_div7_9(int);
int main()
{
    int num;
    num=disp_biggest_4digit_div7_9(9999);
    printf("%d\n", num);
    return 0;
}

int disp_biggest_4digit_div7_9(int num)
{
    while(num >= 1000) 
    {
        if (num % 7 == 0 || num % 9 == 0) 
        {
            return num;
        }
        num--;
    }
}