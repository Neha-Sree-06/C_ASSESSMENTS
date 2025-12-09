#include<stdio.h>
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d", &a[i]);
    }
    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     printf("Numbers in descending order :");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}