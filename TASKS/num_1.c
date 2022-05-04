#include<stdio.h>
int sum(int a, int b);
int main(void)
{
    int num_1 = 3;
    int num_2 = 5;
    int result;
    result = sum(num_1, num_2);
    printf("%d + %d = %d", num_1, num_2, result);
    return 0;
}
int sum(int a, int b)
{
    int num;
    num = a + b;
    return num;
}