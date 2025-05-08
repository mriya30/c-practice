#include <stdio.h>

int main() {
    int val = 10;
    for (int i = 0; i < 5; i++) {
        int square = val * val;
        for (int j = 0; j <= i; j++) {
            printf("%d ", square);
        }
        val--;
        printf("\n");
    }
    return 0;
}
