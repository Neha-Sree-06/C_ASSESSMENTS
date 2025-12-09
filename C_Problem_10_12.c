#include <stdio.h>

int main() 
{
    int arr[50], n;
    char str[51];

    scanf("%d", &n);

    for(int i = n - 1; i >= 0; i--) 
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) 
    {
        str[i] = arr[i] + '0';  
    }
    str[n] = '\0'; 
    printf("%s", str);

    return 0;
}
