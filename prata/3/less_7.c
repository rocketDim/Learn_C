#include <stdio.h>

int main(void)
{
    int centy; 
    float inch;
    
    printf("Введите свой рост: ");
    scanf("%d", &centy);
    printf("Рост в дюймах: %.2f\n", centy / 2.54);
    return 0;
}
