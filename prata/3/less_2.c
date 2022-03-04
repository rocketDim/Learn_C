#include <stdio.h>

int main(void)
{
    int sim;
    
    printf("Введите числовое значение: ");
    scanf("%d", &sim);
    printf("Значение %d равно символу %c\n", sim, sim);
    
    return 0;
}
