#include <stdio.h>

void strcopy(char *src, char *dst) 
{
    while(*src != '\0') 
    {
        *dst = *src;   
        src++;
        dst++;
    }
    *dst = '\0';       
}

int main() 
{
    char s1[100], s2[100];

    scanf("%s", s1);

    strcopy(s1, s2);

    printf("%s", s2);

    return 0;
}
