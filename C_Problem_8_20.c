#include<stdio.h>
int disp_count_HCF2(int,int);
int main()
{
    int num1, num2, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    hcf=disp_count_HCF2(num1,num2);
    printf("%d", hcf);
    return 0;
}

int disp_count_HCF2(int num1,int num2)
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
    return hcf;
}