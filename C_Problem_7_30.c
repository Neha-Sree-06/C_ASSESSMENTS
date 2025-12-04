#include<stdio.h>
void disp_count_HCF2(int,int);
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    disp_count_HCF2(num1,num2);
    return 0;
}

void disp_count_HCF2(int num1,int num2)
{
    int i, hcf = 1, min;

    if (num1 < num2)
        min = num1;
    else
        min = num2;

    i=1;
    while(i <= min) 
    {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
        i++;
    }

    printf("%d", hcf);

}