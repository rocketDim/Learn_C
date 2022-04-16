/*#include <stdio.h>

int main (void)
{
    char ch = 's';
    while (ch < 'w')
    {
        printf("%c", ch);
        ch++;
    }
    printf("%c\n", ch);*/
/*#include <stdio.h>
#define S_TO_M 60
int main(void)
{
int sec, min, left;
printf("Эта программа переводит секунды в минуты и ");
printf("секунды.\n");
printf("Введите количество секунд.\n");
printf("Для завершения программы введите 0.\n");
while (sec > 0)
{
scanf("%d", &sec);
min = sec/S_TO_M;
left = sec % S_TO_M;
printf ("%d секунд - это %d минут %d секунд. \n", sec, min, left);
printf("Cлeдyющee значение?\n");
}
printf("До свидания!\n");*/
#include <stdio.h>
#define S_TO_M 60

int main(void)
{
    int sec, min, left;
    printf("Пepeвoд секунд в минуты и секунды!\n");
    printf("Введите количество секунд:\n");
    printf("Завершить 0\n");
    while (sec > 0)
    {
        scanf("%d", &sec);
        min = sec / S_TO_M;
        left = sec % S_TO_M;
        printf("%d секунд - это %d минут %d секунд.\n", sec, min, left);
        printf("следующее значение\n");
    }
    printf("До свидания! \n");
    return 0;
}
