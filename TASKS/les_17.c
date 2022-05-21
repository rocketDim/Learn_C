#include<stdio.h>
int main(void)
{
    char name [40];
    char name_first [40];
    printf("Напишите имя и фамилию: ");
    scanf("%s %s", name, name_first);
    printf("%s %s\n", name_first, name);
    return 0;
}