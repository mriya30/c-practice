#include <stdio.h>
int main()
{
    int arr[3] = {4, 2, 8};
    int *ptr = arr;
    printf("square of number : ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }
}