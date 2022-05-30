//Ввод/вывод массив
#include <stdio.h>
void input_array(int nums[], int size);
void inc_array(int nums[], int size);
void print_array(int nums[], int size);
int main(void)
{
    const int N = 3;
    int arr[N];
    input_array(arr, N);//Ввод данных
    inc_array(arr, N);//Расчеты
    print_array(arr, N);//Вывод

    return 0;
}
void input_array(int nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d from %d: ", i, size);
        scanf("%d", &nums[i]);
    }
}
void inc_array(int nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        nums[i] = nums[i] + nums[i];
    }
}
void print_array(int nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",nums[i]);
    }
    printf("\n");
}