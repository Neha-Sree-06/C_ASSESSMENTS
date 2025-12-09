#include <stdio.h>
#include <string.h>

int main() 
{
    char str[51];
    int arr[50], len;

    scanf("%50s", str);

    len = strlen(str);
    for(int i = 0; i < len; i++) 
    {
        arr[i] = str[i] - '0'; 
    }

    for(int i = 0; i < len; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
