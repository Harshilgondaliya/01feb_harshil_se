// WAP to check if the given year is a leap year or not //
#include <stdio.h>
int main()
{
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

      if (year % 400 == 0) 
         {
            printf("%d this year is a leap year.",year);
         }
 
      else if (year % 100 == 0) 
         {
            printf("%d this year is not a leap year.",year);
         }
      
      else if (year % 4 == 0) 
         {
            printf("%d this year is a leap year.",year);
         }

      else 
         {
            printf("%d this year is not a leap year.",year);
         }

}