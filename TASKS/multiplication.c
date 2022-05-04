#include <stdio.h>
int main(void)
{
    int result = 1;
    int n = 5;
    int i;
    for(i = 1; i <= n; i++)
    {
        result = result * i;
    }
    printf("%d\n", result);
    return 0;
}