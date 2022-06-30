//Долларовые миллионеры
#include <stdio.h>
//{2000000, 0, 100, 1000001}
// 2
int dollar_million(int arr[], int size, int limit);
int main(void)
{
    int size = 4;
    int Limit = 1000000;
    int arr[] = {2000000, 0, 100, 1000001};
    printf("%d\n", dollar_million(arr, size, Limit));
    return 0;
}
//{2000000, 0, 100, 1000001}
// 2
//i = 0 > limit sum = 1 если текущий элемент массива больше limit, sum уведичивается на единицу
//i = 1 < limit sum = 1
//i = 2 < limit sum = 1
//i = 3 > limit sum = 2
int dollar_million(int arr[], int size, int limit)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > limit)
        {
            sum++;
        }
    }
    return sum;
}
