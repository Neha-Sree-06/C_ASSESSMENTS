#include <stdio.h>

int main() 
{
    int num;
    char str[20];
    scanf("%d", &num);
    sprintf(str, "%d", num);
    for(int i = 0; str[i] != '\0'; i++) 
    {
        printf("%c\n", str[i]);
    }
    return 0;
}
