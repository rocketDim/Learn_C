#include <stdio.h>

int main(void)
{
    char name[40];
    char sur[40];
    printf("Kaк вас зовут? ");
    scanf("%s %s", name, sur);
    printf("Здравствуйте, %s, %s\n", sur, name);

    return 0;
}