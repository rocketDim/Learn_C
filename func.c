#include <stdio.h>

int f_num(int n)
{
    if (n < 2)
        return n;
    else
        return f_num(n - 1) + f_num(n - 2);
}

int main()
{

    int n;
    int k;
    printf("Число: ");
    scanf("%d", &n);
    printf("Кол-во: ");
    scanf("%d", &k);

    for (int i = n; i < n + k; i++)
    {
        printf("NUM: %d, FIB: %d\n", i, f_num(i));
    }

    return 0;
}
