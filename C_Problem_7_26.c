#include<stdio.h>
void disp_biggest_4digit_div7_9(int);
int main()
{
    disp_biggest_4digit_div7_9(9999);
    return 0;
}

void disp_biggest_4digit_div7_9(int num)
{
    while(num >= 1000) 
    {
        if (num % 7 == 0 || num % 9 == 0) 
        {
            printf("%d\n", num);
            break;
        }
        num--;
    }


}