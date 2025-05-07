#include <stdio.h>

void printOdd(int arr[], int n) {
    for(int i = 0; i < n; i++)
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printOdd(arr, 5);
    return 0;
}
