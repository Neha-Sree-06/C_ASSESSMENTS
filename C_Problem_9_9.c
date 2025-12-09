#include<stdio.h>
int main()
{
    int a[5],b[5],i,j=0;
    for(i=0;i<5;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++)
    {
        if(a[i] % 2 != 0)   // Check for odd number
        {
            b[j] = a[i];
            j++;            // Move to next index in b[]
        }
    }

    printf("New Array:");
    for(i=0;i<j;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}