// WAP to check if the given year is a leap year or not //
#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly divisible by 400
   if (year % 400 == 0) 
   {
      printf("%d this year is a leap year.",year);
   }
   // not a leap year if divisible by 100
   // but leap year is a not divisible by 400
   else if (year % 100 == 0) 
   {
      printf("%d this year is not a leap year.",year);
   }
   // leap year if not divisible by 100
   // but leap year is divisible by 4
   else if (year % 4 == 0) 
   {
      printf("%d this year is a leap year.",year);
   }
   // all other years are not leap years
   else 
   {
      printf("%d this year is not a leap year.",year);
   }

}