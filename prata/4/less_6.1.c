#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[9];
    char sur[9];
    printf("Kaк вас зовут? ");
    scanf("%s %s", name, sur);
    printf("%9.9s %9.9s\n%9zd %9zd\n", name, sur, strlen(name), strlen(sur));

    printf("%-9.9s %-9.9s\n%-9zd %-9zd\n", name, sur, strlen(name), strlen(sur));


    return 0;
}
