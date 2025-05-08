#include <stdio.h>

int main() {
    int a[3] = {1, 2, 3}, b[3] = {4, 5, 6}, sum[3];
    int *p = a, *q = b, *r = sum;

    for(int i = 0; i < 3; i++) {
        *(r + i) = *(p + i) + *(q + i);
    }

    printf("Sum array: ");
    for(int i = 0; i < 3; i++) printf("%d ", sum[i]);
    return 0;
}
