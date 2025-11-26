#include<stdio.h>

int main()
{
    int x,a,b,c;
    printf("Enter a four digit number x:");
    scanf("%d",&x);
   
    a=(x/10)%10;
    b=x%10;
    if(a==b)
        printf("Success");
    else    
        printf("Failure");

    return 0;
}