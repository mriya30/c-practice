#include <stdio.h>

int main()
{
    int size,min;
    printf("enter array size : ");
    scanf("%d", &size);

    int arr[size];
    printf("enter %d elements : ", size);
    for (int i = 0; i <= size; i++)
    {
        scanf("%d", &arr[i]);
    }
     min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("smallest element : %d\n", min);
}