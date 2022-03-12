#include <stdio.h>
#include <string.h>


int main(void)
{
    char name[10];
    char sur[10];
    printf("Kaк вас зовут? ");
    scanf("%s %s", name, sur);
    printf("%s %s\n%zd %zd\n", name, sur, strlen(name), strlen(sur));
    

    return 0;
}
