#include <stdio.h>

int main(void)
{
    int sim;
    
    printf("Введите числовое значение: ");
    scanf("%d", &sim);

    char c = sim;

    printf("Значение %d равно символу %c\n", sim, c);
    
    return 0;
}
