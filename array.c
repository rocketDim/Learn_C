#include <stdio.h>

const int size = 5;

int print_array(int data[size])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", data[i]);
        if ((i + 1) < size)
            printf(", ");
    }
    printf("\n");

    return 0;
}

int main()
{
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = i - 2;
    }

    print_array(arr);

    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] + i;
    }

    print_array(arr);

    return 0;
}
