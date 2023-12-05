#include <stdio.h>
#include<conio.h>

int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);


   if (year % 400 == 0) {
      printf("Yes is a leap year.");
   }

   else if (year % 100 == 0) {
      printf(" Not is a leap year.");
   }

   else if (year % 4 == 0) {
      printf("Yes is a leap year.");
   }

   else {
      printf(" Not is a leap year.");
   }

  getch ();
}
