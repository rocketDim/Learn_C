#include <stdio.h>
void number(int n);
int main(void)
{
    int num;
    scanf("%d", &num);
    number(num);
    return 0;
}
void number(int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d", i + 1);
        printf("\n");
}