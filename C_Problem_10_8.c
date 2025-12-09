#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str[51]; 
    int valid = 1;

    scanf("%50s", str); 
    for(int i = 0; i < strlen(str); i++) 
    {
        if(!isdigit(str[i])) 
        {
            valid = 0;
            break;
        }
    }

    if(valid)
        printf("Valid number");
    else
        printf("Invalid number");

    return 0;
}
