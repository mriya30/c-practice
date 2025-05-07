#include <stdio.h>

int main() {
    int arr[] = {2, 5, 8, 11, 14};
    int *ptr = arr;

    for(int i = 0; i < 5; i++) {
        if (*(ptr + i) % 2 == 0)
            printf("%d ", *(ptr + i));
    }
    return 0;
}
