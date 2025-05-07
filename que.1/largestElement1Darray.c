#include <stdio.h>
int main()
{
    int size, max;
    printf("enter array size : ");
    scanf("%d", &size);

    int arr[size];
    printf("enter %d elements : ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("largest element : %d \n", max);
}