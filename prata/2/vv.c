#include <stdio.h>
#include <string.h> 
#define DENSITY 62.4 

int main()
{
       
       float weight = 2, volume;
       int size, letters;
       char name[40]; 

       // printf("Здравствуйте! Как вас зовут?\n");
       printf("name?\n");
       scanf("%s", name);
       printf("%s %f\n\n", name, weight);

       //printf("%s, сколько вы весите в фунтах?\n", name);
       printf("weight?\n");
       scanf("%f", &weight);
       printf("%s %f\n\n", name, weight);

       printf("name?\n");
       scanf("%s", name);
       printf("%s %f\n\n", name, weight);

/*
       size = sizeof name;
       letters = strlen(name);
       volume = weight / DENSITY;
       printf("Хорошо, %s, ваш объем составляет %2.2f кубических футов.\n",
              name, volume);
       printf("К тому же ваше имя состоит из %d букв,\n",
              letters);
       printf(" мы располагаем %d байтами для его сохранения.\n", size);
*/

       return 0;
}
