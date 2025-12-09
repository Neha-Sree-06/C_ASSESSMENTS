#include <stdio.h>
#include <string.h>

int main() {
    char str[51];
    scanf("%50s", str);

    int i = 0;
    while(str[i] == '0' && str[i] != '\0') {
        i++;
    }

    if(str[i] == '\0') {
        printf("0");
    } else {
        printf("%s", &str[i]);
    }

    return 0;
}
