#include<stdio.h>

int main()
{
    int x,a,b,c,s1,s2;
    printf("Enter a three digit number x:");
    scanf("%d",&x);
    a=x/100;
    b=(x/10)%10;
    c=x%10;
    s1=a+b+c;
    if(s1<10)
        printf("Sum=%d",s1);
    else 
        s2=(s1/10)+(s1%10);
        if(s2<10)
            printf("Sum:%d",s2);
        else
            printf("Sum:%d",(s2/10)+(s2%10));
    return 0;
}