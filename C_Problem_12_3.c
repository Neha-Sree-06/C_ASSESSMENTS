#include <stdio.h>

int main()
{
    char str[100];
    char sub[50];
    char *p, *q, *start;
    int pos = 1;
    int found = 0;

    printf("Enter the main string: ");
    scanf("%s", str);

    printf("Enter the sub-string: ");
    scanf("%s", sub);

    p = str;

    while (*p != '\0')
    {
        start = p;
        q = sub;

        while (*p == *q && *q != '\0')
        {
            p++;
            q++;
        }

        if (*q == '\0')
        {
            printf("%d\n", pos);
            found = 1;
            break;
        }
        else
        {
            p = start + 1;
            pos++;
        }
    }

    if (found == 0)
    {
        printf("Sub-string not found\n");
    }

    return 0;
}
