#include <stdio.h>
int main() 
{
	//Write a C program to check whether a Triangle is valid or not
   float side1, side2, side3;
   printf("Enter the length of side 1: ");
   scanf("%f", &side1);
   printf("Enter the length of side 2: ");
   scanf("%f", &side2);
   printf("Enter the length of side 3: ");
   scanf("%f", &side3);
   if(side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) 
   {
      printf("\nTriangle is valid.\n");
   } 
   else 
   {
      printf("\nTriangle is not valid.\n");
   }
   return 0;
}

