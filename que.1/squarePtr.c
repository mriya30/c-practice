#include <stdio.h>
int main()
{
    int size;
    printf("enter array size : ");
    scanf("%d", &size);

    int arr[size];
    printf("enter %d elements : ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    printf("square of elements : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }
    printf("\n");
}