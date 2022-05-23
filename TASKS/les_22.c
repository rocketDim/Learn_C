#include <stdio.h>
#include <string.h>
int main(void)
{
    char name_1[40];
    char name_2[40];
    printf("Введите имя и фамилию: ");
    scanf("%s %s", name_1, name_2);
    printf("%s %s\n%*zd %*zd\n", name_1, name_2,
           (int)strlen(name_1), strlen(name_1), (int)strlen(name_2), strlen(name_2));
    printf("%s %s\n%-*zd %-*zd\n", name_1, name_2,
           (int)strlen(name_1), strlen(name_1), (int)strlen(name_2), strlen(name_2));
    return 0;
}