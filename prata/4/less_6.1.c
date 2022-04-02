#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[10];
    char sur[10];
    printf("Kaк вас зовут? ");
    scanf("%s %s", name, sur);
    
    printf("%*s %*s\n%*zd %*zd\n", 10, name, 10, sur, 10, strlen(name), 10, strlen(sur));

    printf("%-*s %-*s\n%-*zd %-*zd\n", 10, name, 10, sur, 10, strlen(name), 10, strlen(sur));

    return 0;
}
