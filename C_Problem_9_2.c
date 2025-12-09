#include<stdio.h>
int main()
{
    int a[5],sum=0,avg;
    for(int i=0;i<5;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    avg=sum/5;
    printf("Average=%d",avg);
    return 0;
}