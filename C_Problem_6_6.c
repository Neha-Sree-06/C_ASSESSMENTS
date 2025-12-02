#include<stdio.h>
int main()
{
    int i=11;
    while(i<20)
    {
        if(i%2==1)
            printf("%d\n",i);
        i++;
    }
    return 0;
}