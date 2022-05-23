//Программа выолняет различные решения со строками
#include<stdio.h>
int main(void)
{
    char name [40];
    printf("Ввкдите имя: ");
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("%*s\n", name);
    
    return 0;
}