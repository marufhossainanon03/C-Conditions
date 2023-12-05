#include <stdio.h>
#include<conio.h>
int main()
{
   float value1, value2;
   char operator1;

   printf("Type in your expression.\n");
   scanf("%f %c %f", &value1, &operator1, &value2);

   if (operator1 == '+')
      printf("%.2f\n", value1 + value2);
   else if (operator1 == '-')
      printf("%.2f\n", value1 - value2);
   else if (operator1 == '*')
      printf("%.2f\n", value1 * value2);
   else if (operator1 == '/')
      printf("%.2f\n", value1 / value2);

   getch ();
}
