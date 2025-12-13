#include <stdio.h>

int strcomp(char *s1, char *s2) 
{
    while(*s1 && *s2) 
    {
        if(*s1 != *s2)
            return 0;
        s1++;
        s2++;
    }
    return (*s1 == '\0' && *s2 == '\0');
}

int main() 
{
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);

    if(strcomp(a, b))
        printf("Success");
    else
        printf("Failure");

    return 0;
}
