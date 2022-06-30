//функция найти кол-во разных цифр массива
#include <stdio.h>
//{5, 13, 5, 77, 5, 56}
// 4
int main(void)
{
    int size = 6;
    int arr[] = {5, 13, 5, 77, 5, 56};

    return 0;
}
//{5, 13, 5, 77, 5, 56}
// 4
//|i = 0|j = 0 arr[i] = 5 arr[j] = 5
//      |j = 1 arr[i] = 5 arr[j] = 13
//      |j = 2 arr[i] = 5 arr[j] = 5
//      |j = 3 arr[i] = 5 arr[j] = 77
//      |j = 4 arr[i] = 5 arr[j] = 5
//      |j = 5 arr[i] = 5 arr[j] = 56
// Present = true count = 0
//|i = 1|j = 0 arr[i] = 13 arr[j] = 5
//      |j = 1 arr[i] = 13 arr[j] = 13
//      |j = 2 arr[i] = 13 arr[j] = 5
//      |j = 3 arr[i] = 13 arr[j] = 77
//      |j = 4 arr[i] = 13 arr[j] = 5
//      |j = 5 arr[i] = 13 arr[j] = 56
// Present = false count = 1
//|i = 2|j = 0 arr[i] = 5 arr[j] = 5
//      |j = 1 arr[i] = 5 arr[j] = 13
//      |j = 2 arr[i] = 5 arr[j] = 5
//      |j = 3 arr[i] = 5 arr[j] = 77
//      |j = 4 arr[i] = 5 arr[j] = 5
//      |j = 5 arr[i] = 5 arr[j] = 56
// Present = true count = 1
//|i = 3|j = 0 arr[i] = 77 arr[j] = 5
//      |j = 1 arr[i] = 77 arr[j] = 13
//      |j = 2 arr[i] = 77 arr[j] = 5
//      |j = 3 arr[i] = 77 arr[j] = 77
//      |j = 4 arr[i] = 77 arr[j] = 5
//      |j = 5 arr[i] = 77 arr[j] = 56
// Present = false count = 2
//|i = 4|j = 0 arr[i] = 5 arr[j] = 5
//      |j = 1 arr[i] = 5 arr[j] = 13
//      |j = 2 arr[i] = 5 arr[j] = 5
//      |j = 3 arr[i] = 5 arr[j] = 77
//      |j = 4 arr[i] = 5 arr[j] = 5
//      |j = 5 arr[i] = 5 arr[j] = 56
// Present = true count = 2
//|i = 5|j = 0 arr[i] = 56 arr[j] = 5
//      |j = 1 arr[i] = 56 arr[j] = 13
//      |j = 2 arr[i] = 56 arr[j] = 5
//      |j = 3 arr[i] = 56 arr[j] = 77
//      |j = 4 arr[i] = 56 arr[j] = 5
//      |j = 5 arr[i] = 56 arr[j] = 56
// Present = false count = 3
int count_distinct_elements(int arr[], int size)
{
    int count = 0;
    _Bool Present = false;
    for (int i = 0; i < size; i++)
    { 
        Present = false;
        for(int j = 0; j < size; j++)
        {
            if()//если текущ эл цикла j не равен тек эл цикла i, то сравниваем i и j эл. Если они совпали, то такой эл есть в массиве более одного раза 
        }
        if(Present == false)
        {
            count++;
        }

    }
}
