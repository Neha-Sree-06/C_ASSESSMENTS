#include <stdio.h>
#include <string.h>

void getnumbers(char *a, char *b);
void multiplynumbers(char *a, char *b, char *res);
void print(char *res);

int main()
{
    char n1[51];
    char n2[51];
    char result[102];

    getnumbers(n1, n2);
    multiplynumbers(n1, n2, result);
    print(result);

    return 0;
}

void getnumbers(char *a, char *b)
{
    printf("Enter first number: ");
    scanf("%50s", a);

    printf("Enter second number: ");
    scanf("%50s", b);
}

void multiplynumbers(char *a, char *b, char *res)
{
    int i, j, len1, len2;
    int temp[102] = {0};

    len1 = strlen(a);
    len2 = strlen(b);

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            temp[i + j + 1] +=
                (*(a + i) - '0') * (*(b + j) - '0');
        }
    }

    for (i = len1 + len2 - 1; i > 0; i--)
    {
        temp[i - 1] += temp[i] / 10;
        temp[i] = temp[i] % 10;
    }

    i = 0;
    while (i < len1 + len2 && temp[i] == 0)
    {
        i++;
    }

    j = 0;
    while (i < len1 + len2)
    {
        *(res + j) = temp[i] + '0';
        i++;
        j++;
    }

    *(res + j) = '\0';
}

void print(char *res)
{
    printf("Product = %s\n", res);
}
