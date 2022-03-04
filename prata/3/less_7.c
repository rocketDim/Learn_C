#include <stdio.h>

int main(void)
{
    int centy; 
    float inch;
    
    printf("Введите свой рост: ");
    scanf("%d", &centy);
    printf("Рост в дюймах: %.2f\n", 2.54 * centy); //если формулу выношу отдельно, не получается

    return 0;
}
