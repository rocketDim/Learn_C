// Программа переводит кварты в молекулы
#include<stdio.h>
int main(void)
{
    float quart_of_water;
    float const MOLECULE_OF_GRAMM = 3.0e-23;
    int const QUART = 950;

    printf("Введите объем воды в квартах\n");
    scanf("%f", &quart_of_water);



    printf("В молекулах получится: %e\n", (quart_of_water * QUART / MOLECULE_OF_GRAMM));

    return 0;
}