#include <stdio.h>

float average2D(int arr[][3], int row, int col) {
    int i, j, sum = 0;
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            sum += arr[i][j];
    return (float)sum / (row * col);
}

int main() {
    int arr[2][3] = {{1,2,3},{4,5,6}};
    printf("Average: %.2f\n", average2D(arr, 2, 3));
    return 0;
}
