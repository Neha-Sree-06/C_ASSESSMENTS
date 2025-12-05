#include<stdio.h>
int disp_count_sum14(int);
int main()
{
    int count;
    count=disp_count_sum14(100000);
    printf("%d\n", count);
    return 0;
}

int disp_count_sum14(int num)
{
    int temp, sum, count = 0;
    int i=1;

    while(i < num) 
    {
        
        sum = 0;
        temp=i;
        while(temp!=0) 
        {
            sum += temp % 10;
            temp/=10;
        }

        if (sum == 14) 
        {
            count++;
        }
        i++;
    }
    return count;
}