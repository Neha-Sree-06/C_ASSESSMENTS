#include <stdio.h>

int main() {
    int arr[10] = {12, 15, 9, 20, 7, 0, 0, 0, 0, 0}; // example array
    int n = 10;
    int carry = 0;

    for(int i = 0; i < n; i++) {
        arr[i] += carry;
        carry = arr[i] / 10;
        arr[i] %= 10;
    }

    // If there is remaining carry, you can extend the array
    if(carry > 0) {
        printf("Carry left after adjustment: %d\n", carry);
    }

    printf("Adjusted Array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
