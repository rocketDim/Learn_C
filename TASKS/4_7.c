#include <stdio.h>
int main(void)
{
    int n = 13;
    int m = 5;
    int result;
    for (int i = 0; i <= n; i++)
    {
        result = i % (m + 1);
        printf("%d ", result);
    }
    return 0;
}