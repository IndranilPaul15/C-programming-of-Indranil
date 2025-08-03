#include <stdio.h>
int main() 
{
	// Write a C Program to Convert Number of Days to Years, Months and Days.
   int days, yr, mon, rem;
   printf("Enter the number of days: ");
   scanf("%d", &days);
   yr = days / 365;
   rem = days % 365;
   mon = rem / 30;
   rem = rem % 30;
   printf("%d days = %d years, %d months, and %d days\n", days, yr, mon, rem);
   return 0;
}

