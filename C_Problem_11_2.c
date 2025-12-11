#include<stdio.h>
void func(int*);
int main()
{
    int a[5]={1,2,3,4,5};
    func(a);

    for(int i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}

void func(int *p)
{
    for(int i=0;i<5;i++)
    {
        (*p)++;
        p++;
    }
}