#include <stdio.h>

int main()
{
    char str[200];
    char *p;
    int count = 0;
    int inword = 0;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    p = str;

    while (*p != '\0')
    {
        if (*p != ' ' && *p != '\n' && inword == 0)
        {
            count++;
            inword = 1;
        }
        else if (*p == ' ')
        {
            inword = 0;
        }

        p++;
    }

    printf("Number of words = %d\n", count);

    return 0;
}
