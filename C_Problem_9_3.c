#include<stdio.h>
int main()
{
    int a[5],sum=0;
    for(int i=0;i<5;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d", &a[i]);
    }
    int i=0;
    int smallest=a[i];
    while(i<5)
    {
        if(a[i]<=smallest)
            smallest =a[i];
        i++;
    }
    printf("Smallest number=%d",smallest);
    return 0;
}