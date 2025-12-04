#include<stdio.h>
void disp_LCM2(int,int);
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    disp_LCM2(num1,num2);
    return 0;
}

void disp_LCM2(int num1,int num2)
{
    int max, lcm;

    if(num1 > num2)
        max = num1;
    else
        max = num2;

    lcm = max;

    while(1) {
        if(lcm % num1 == 0 && lcm % num2 == 0) {
            printf("%d", lcm);
            break;
        }
        lcm++;
    }

}