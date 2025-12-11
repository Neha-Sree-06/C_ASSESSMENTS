#include <stdio.h>

void strcon(char *src1, char *src2, char *dst) {
    while(*src1) {
        *dst = *src1;
        src1++;
        dst++;
    }
    while(*src2) {
        *dst = *src2;
        src2++;
        dst++;
    }
    *dst = '\0';
}

int main() {
    char a[100], b[100], c[200];
    scanf("%s", a);
    scanf("%s", b);

    strcon(a, b, c);

    printf("%s", c);

    return 0;
}
