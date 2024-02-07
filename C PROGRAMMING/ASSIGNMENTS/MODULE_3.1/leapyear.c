#include <stdio.h>

// Enter year is leap year or not.

void main() 
{
   int year;
   printf("----------------------------------");
   printf("\nEnter a year: ");
   scanf("%d", &year);

		// leap year if perfectly divisible by 400
   if (year % 400 == 0) 
   {
      printf("\n%d is a leap year.", year);
   }
	   // not a leap year if divisible by 100
	   // but not divisible by 400
   else if (year % 100 == 0) 
   {
      printf("\n%d is not a leap year.", year);
      printf("-----------------------------");
   }
		// but divisible by 4
   else if (year % 4 == 0) 
   {
      printf("\n%d is a leap year.", year);
      printf("\n-----------------------------");
   }
   		// all other years are not leap years
   else 
   {
      printf("\n%d is not a leap year.", year);
   }

  
}
   
