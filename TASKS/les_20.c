//Программа считает рост в метрах 
#include <stdio.h>
int main(void)
{
    float growth;
    char name[40];
    printf("Введите рост в см и имя: ");
    scanf("%s %f", name, &growth);
    printf("%s, ваш рост составляет %.2f метра.\n", name, growth / 100);
    return 0;
}