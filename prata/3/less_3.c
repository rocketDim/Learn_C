#include <stdio.h>

int main(void)
{
    char beep = 7;

    printf("\aНапуганная внезапным звуком, Вика вскрикнула:\n", &beep);
    printf("Во имя всех звезд, что это было!\n");
    
    return 0;
}