#include<stdio.h>
void disp_LCM3(int,int,int);
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    disp_LCM3(num1,num2,num3);
    return 0;
}

void disp_LCM3(int num1,int num2, int num3)
{
    int max, lcm, i;

    if (num1 > num2) 
    {
        if (num1 > num3)
            max = num1;
        else
            max = num3;
    } 
    else 
    {
        if (num2 > num3)
            max = num2;
        else
            max = num3;
    }

    i=max;
    while(1) 
    {
        if (i % num1 == 0 && i % num2 == 0 && i % num3 == 0) 
        {
            lcm = i;
            break;
        }
        i++;
    }

    printf("%d", lcm);

}