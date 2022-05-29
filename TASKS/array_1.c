//Программа складывает два элемента массива
#include <stdio.h>
int main(void)
{
    int f[9] = {2, 4, 7, 43, 60, 99, 101, 123, 789};
    for (int i = 0; i < 9; i++)
    {
        f[i] = f[i] + f[i];
        printf("%d ", f[i]);
    }

    return 0;
}