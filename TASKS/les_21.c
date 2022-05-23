// Программа считает время загрузки файла
#include <stdio.h>
int main(void)
{
    float speed, size;
    float result;
    printf("Введите скорость загрузки и размер файла: ");
    scanf("%f %f", &speed, &size);
    result = size / 8;
    printf("При скорости загрузки %.2f "
           "мегабит/сек файл размером %.2f "
           "загружается за %.2f секунд",
           speed, result, (speed / result));

    return 0;
}