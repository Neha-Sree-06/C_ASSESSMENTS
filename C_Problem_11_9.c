#include <stdio.h>

void intcon(int *src1, int size1, int *src2, int size2, int *dst) {
    for(int i = 0; i < size1; i++)
        *(dst + i) = *(src1 + i);
    for(int i = 0; i < size2; i++)
        *(dst + size1 + i) = *(src2 + i);
}

int main() {
    int a[5] = {1,2,3,4,5};
    int b[3] = {6,7,8};
    int c[8];

    intcon(a, 5, b, 3, c);

    for(int i = 0; i < 8; i++)
        printf("%d ", c[i]);

    return 0;
}
