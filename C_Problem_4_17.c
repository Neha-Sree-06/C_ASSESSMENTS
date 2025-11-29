#include <stdio.h>

int main() 
{
    int num, i=2;
    int isPrime=1;
    printf("Enter a number:");
    scanf("%d",&num);
    
    if (num<=1)
    {
        isPrime=0;
        goto end;
    }

check:
    if (i*i>num) goto end;
    if (num%i==0)
    {
        isPrime=0;
        goto end;
    }
    i++;
    goto check;

end:
    if (isPrime)
        printf("%d is prime\n",num);
    else
        printf("%d is not prime\n",num);

    return 0;
}
