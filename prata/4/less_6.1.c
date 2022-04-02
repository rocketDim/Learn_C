#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[40];
    char sur[40];
    printf("Kaк вас зовут? ");
    scanf("%s %s", name, sur);
    
    printf("%s %s\n%*d %*d\n", name, sur, (int) strlen(name), (int) strlen(name), (int) strlen(sur), (int) strlen(sur));

    printf("%s %s\n%*d %-*d\n", name, sur, (int) strlen(name) * -1, (int) strlen(name), (int) strlen(sur), (int) strlen(sur));
}
