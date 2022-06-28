#include <stdio.h>

void print_array(int arr[], int size);
int main(void)
{
    int size = 4;
    int arr[] = {5, 13, 56, 77};
    
    print_array(arr, size);
    return 0;
}


void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}