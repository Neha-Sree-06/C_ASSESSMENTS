#include <stdio.h>

void find_2digit_odd_sum7(int *p, int *count) {
    int k = 0;
    for(int n = 10; n <= 99; n++) {
        if(n % 2 == 1) {               
            int d1 = n / 10;           
            int d2 = n % 10;           
            if(d1 + d2 == 7) {         
                p[k] = n;              
                k++;
            }
        }
    }
    *count = k;                        
}

int main() {
    int arr[10];
    int total = 0;

    find_2digit_odd_sum7(arr, &total);

    for(int i = 0; i < total; i++) {
        printf("%d", arr[i]);
        if(i < total - 1)
            printf(", ");
    }

    return 0;
}
