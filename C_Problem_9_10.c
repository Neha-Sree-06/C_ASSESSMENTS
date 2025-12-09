#include<stdio.h>
int main()
{
    int a[5],b[5],i,j,k=0,isPrime;
    for(i=0;i<5;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < 5; i++) 
    {
        if (a[i] <= 1) 
        {
            b[k]=a[i];
            k++;
            continue;
        }

        isPrime = 1;
        for (j = 2; j <= a[i] / 2; j++) 
        {
            if (a[i] % j == 0) 
            {
                isPrime=0;
                break;
            }
        }
        if (isPrime == 0) 
        {
            b[k]=a[i];
            k++;
        }
    }

    printf("New Array:");
    for(i=0;i<k;i++)
    {
        printf("%d\t",b[i]);
    }

    return 0;
}