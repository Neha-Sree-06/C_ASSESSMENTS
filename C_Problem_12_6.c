#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 105

/* function declarations */
int isValid(char *s);
void trim(char *s);
void add(char *a, char *b, char *r);
void sub(char *a, char *b, char *r);
void mul(char *a, char *b, char *r);
void divi(char *a, char *b, char *q, char *rem);

int main()
{
    char input[200];
    char a[MAX], b[MAX], r[MAX], rem[MAX];
    char op;
    int i, j;

    while (1)
    {
        printf("Calc> ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "Exit") == 0)
            break;

        i = 0;
        j = 0;

        while (isdigit(input[i]))
            a[j++] = input[i++];

        a[j] = '\0';
        op = input[i++];
        j = 0;

        while (isdigit(input[i]))
            b[j++] = input[i++];

        b[j] = '\0';

        if (!isValid(a) || !isValid(b))
        {
            printf("Invalid input\n");
            continue;
        }

        trim(a);
        trim(b);

        if (op == '+')
        {
            add(a, b, r);
            printf("%s\n", r);
        }
        else if (op == '-')
        {
            sub(a, b, r);
            printf("%s\n", r);
        }
        else if (op == '*')
        {
            mul(a, b, r);
            printf("%s\n", r);
        }
        else if (op == '/')
        {
            if (strcmp(b, "0") == 0)
            {
                printf("Divide by zero\n");
            }
            else
            {
                divi(a, b, r, rem);
                printf("Quotient = %s\nRemainder = %s\n", r, rem);
            }
        }
        else
        {
            printf("Invalid operator\n");
        }
    }
    return 0;
}
int isValid(char *s)
{
    if (*s == '\0')
        return 0;

    while (*s)
    {
        if (!isdigit(*s))
            return 0;
        s++;
    }
    return 1;
}
void trim(char *s)
{
    while (*s == '0' && *(s + 1) != '\0')
        memmove(s, s + 1, strlen(s));
}

void add(char *a, char *b, char *r)
{
    int i = strlen(a) - 1, j = strlen(b) - 1, k = 0, c = 0;
    char t[MAX];

    while (i >= 0 || j >= 0 || c)
    {
        int x = (i >= 0) ? a[i--] - '0' : 0;
        int y = (j >= 0) ? b[j--] - '0' : 0;
        t[k++] = (x + y + c) % 10 + '0';
        c = (x + y + c) / 10;
    }

    for (i = 0; i < k; i++)
        r[i] = t[k - i - 1];

    r[k] = '\0';
}

void sub(char *a, char *b, char *r)
{
    int i = strlen(a) - 1, j = strlen(b) - 1, k = 0, borrow = 0;
    char t[MAX];

    while (i >= 0)
    {
        int x = a[i--] - '0' - borrow;
        int y = (j >= 0) ? b[j--] - '0' : 0;

        if (x < y)
        {
            x += 10;
            borrow = 1;
        }
        else
            borrow = 0;

        t[k++] = (x - y) + '0';
    }

    while (k > 1 && t[k - 1] == '0')
        k--;

    for (i = 0; i < k; i++)
        r[i] = t[k - i - 1];

    r[k] = '\0';
}

void mul(char *a, char *b, char *r)
{
    int la = strlen(a), lb = strlen(b);
    int t[MAX] = {0};
    int i, j;

    for (i = la - 1; i >= 0; i--)
        for (j = lb - 1; j >= 0; j--)
            t[i + j + 1] += (a[i] - '0') * (b[j] - '0');

    for (i = la + lb - 1; i > 0; i--)
    {
        t[i - 1] += t[i] / 10;
        t[i] %= 10;
    }

    i = 0;
    while (i < la + lb && t[i] == 0)
        i++;

    j = 0;
    while (i < la + lb)
        r[j++] = t[i++] + '0';

    r[j] = '\0';
}

void divi(char *a, char *b, char *q, char *rem)
{
    strcpy(q, "0");

    while (strlen(a) >= strlen(b))
    {
        sub(a, b, a);
        add(q, "1", q);
    }

    strcpy(rem, a);
}
