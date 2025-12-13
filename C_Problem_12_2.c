#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    char *p;
    int pos = 1;
    int found = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    printf("Enter the character: ");
    scanf(" %c", &ch);

    p = str;

    while (*p != '\0')
    {
        if (*p == ch)
        {
            if (found == 1)
            {
                printf(", ");
            }

            printf("%d", pos);
            found = 1;
        }

        p++;
        pos++;
    }

    if (found == 0)
    {
        printf("Character not found");
    }

    return 0;
}
