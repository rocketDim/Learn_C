// Программа выводит строку с помощью функции
#include <stdio.h>

void world(int times);
int main(void)
{
    int a;
    scanf("%d", &a);
    world(a);
    return 0;
}
void world(int times)
{
    int c;
    for(c = 1; c <= times; c++)
        printf("Hello, world!\n");
}