#include <stdio.h>
#include <string.h>

void getnumbers(char *n1, char *n2);
void addnumbers(char *n1, char *n2, char *result);
void print(char *result);

int main()
{
    char number1[51];
    char number2[51];
    char result[52];

    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);

    return 0;
}

void getnumbers(char *n1, char *n2)
{
    printf("Enter first number (up to 50 digits): ");
    scanf("%50s", n1);

    printf("Enter second number (up to 50 digits): ");
    scanf("%50s", n2);
}

void addnumbers(char *n1, char *n2, char *result)
{
    int i = strlen(n1) - 1;
    int j = strlen(n2) - 1;
    int k = 0;
    int carry = 0;
    int d1, d2, sum;

    while (i >= 0 || j >= 0 || carry)
    {
        if (i >= 0)
            d1 = *(n1 + i) - '0';
        else
            d1 = 0;

        if (j >= 0)
            d2 = *(n2 + j) - '0';
        else
            d2 = 0;

        sum = d1 + d2 + carry;
        *(result + k) = (sum % 10) + '0';
        carry = sum / 10;

        i--;
        j--;
        k++;
    }

    *(result + k) = '\0';

    for (i = 0, j = k - 1; i < j; i++, j--)
    {
        char temp = *(result + i);
        *(result + i) = *(result + j);
        *(result + j) = temp;
    }
}

void print(char *result)
{
    printf("Sum = %s\n", result);
}
