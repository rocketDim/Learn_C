#include <stdio.h>
int main(void)
{
    int sum = 0;
    int n = 10;
    int i;
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}