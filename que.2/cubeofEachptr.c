#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int *ptr = arr;
    printf("Cubes of elements: ");
    for(int i = 0; i < n; i++) {
        int cube = (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i));
        printf("%d ", cube);
    }
    printf("\n");

    return 0;
}
