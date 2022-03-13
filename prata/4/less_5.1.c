#include <stdio.h>

int main(void)
{
    float speed, size;

    printf("Скорость загрузки (Mbit/sec): ");
    scanf("%f", &speed);

    printf("Размер файла (Mbyte): ");
    scanf("%f", &size);

    printf("При скорости загрузки %.2f"
           " мегабит в секунду файл размером %.2f"
           " мегабайт загружается за %.2f секунд(ы)\n",
           speed, size, (size / (speed / 8)));

    return 0;
}