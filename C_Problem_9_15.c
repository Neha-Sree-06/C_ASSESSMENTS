#include <stdio.h>

int main() {
    int a[100], b[100], i = 0, j, temp, num, sum, n;

    while(1) {
        scanf("%d", &num);
        if(num == 0)
            break;
        a[i++] = num;
    }

    for(j = 0; j < i; j++) {
        n = a[j];
        sum = 0;
        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }
        b[j] = sum;
    }

    for(j = 0; j < i-1; j++) {
        for(int k = j+1; k < i; k++) {
            if(b[j] > b[k]) {
                temp = b[j];
                b[j] = b[k];
                b[k] = temp;
            }
        }
    }

    for(j = 0; j < i; j++) {
        printf("%d ", b[j]);
    }

    return 0;
}
