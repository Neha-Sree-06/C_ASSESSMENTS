#include <stdio.h>

int memcomp(int *src, int *dst, int size) {
    for(int i = 0; i < size; i++) {
        if(*(src + i) != *(dst + i)) {
            return 0;   
        }
    }
    return 1;           
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {1, 2, 3, 4, 5};

    if(memcomp(a, b, 5))
        printf("Success");
    else
        printf("Failure");

    return 0;
}
