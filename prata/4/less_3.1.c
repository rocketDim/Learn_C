#include <stdio.h>

int main(void)
{

float name;
printf("Введите число: ");
scanf("%f", &name);
printf("%.1f %e\n", name, name);

return 0;
}