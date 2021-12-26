#include <stdio.h>

void res(int error, float a, char op, float b, float c)
{
   switch (error)
   {
   case 222:
      printf("Деление на ноль!\n");
      break;

   case 232:
      printf("Неверно указан знак операции\n");
      break;

   case 0:
      printf("%.2f %c %.2f = %.2f\n", a, op, b, c);
      break;

   default:
      printf("Неизвестный код ошибки %d\n", error);
      break;
   }
}

float add(float a, float b)
{
   return a + b;
}
float sub(float a, float b)
{
   return a - b;
}
float mul(float a, float b)
{
   return a * b;
}
float div(float a, float b)
{
   return a / b;
}

int main()
{
   float x, y;
   char op = '\0';

   // ВВОД ДАННЫХ
   printf("Введите первое число: ");
   scanf("%f%*c", &x);

   printf("Введите второе число: ");
   scanf("%f%*c", &y);

   float z;

   /*
      КОДЫ ОШИБОКИ
         0   - нет ошибки, все супер!
         222 - деление на ноль
         232 - неверный знак операции
   */
   int error = 0;

   printf("Введите операцию: ");
   scanf("%c%*c", &op);

   // РАССЧЕТЫ
   switch (op)
   {
   case '+':
      z = add(x, y);
      break;

   case '-':
      z = sub(x, y);
      break;

   case '*':
      z = mul(x, y);
      break;

   case '/':
      if (y != 0)
         z = div(x, y);
      else
         error = 222;
      break;

   default:
      error = 232;
      break;
   }

   // ВЫВОД РЕЗУЛЬТАТА
   res(error, x, op, y, z);

   return error;
}
