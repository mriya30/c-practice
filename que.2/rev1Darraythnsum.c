#include <stdio.h>

void reverseAndSum(int arr[], int n) {
    int sum = 0;
    printf("Reversed array: ");
    for(int i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\nSum of elements: %d\n", sum);
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    reverseAndSum(arr, n);
    return 0;
}
