#include<stdio.h>
void disp_total_odd_digits(int);
int main()
{
    
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    disp_total_odd_digits(num);
    return 0;
}

void disp_total_odd_digits(int num)
{
    int digit, count = 0;
    while(num>0) 
    {
        digit=num%10;
        if (digit%2==1)
            count++;
        num=num/10;
    }
    printf("%d", count);

}