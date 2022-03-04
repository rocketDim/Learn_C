#include <stdio.h>

int main(void)
{
    int cup;

    printf("Введите кол-во чашек: ");
    scanf("%d", &cup);
    printf("Пинта:%.1f , Унция:%d , Стол. ложка: %d , Чайн. ложка: %d\n" , (0.5 * cup), (8 * cup), (16 * cup), (48 * cup));

     return 0;
}