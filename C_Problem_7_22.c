#include<stdio.h>
void disp_total_2digit_odd(int);
int main()
{
    
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    disp_total_2digit_odd(num);
    return 0;
}

void disp_total_2digit_odd(int num)
{
    int temp, last, secondLast, count = 0;
    temp= num;

    while(temp>=10)     
    {
        last=temp%10;
        secondLast=(temp/10)%10;

        int twoDigit=secondLast*10+last;

        if (twoDigit%2==1) 
        {
            count++;
        }
        temp/=10;
    }

    printf("%d\n", count);


}