#include <stdio.h>
int main() 
{
	//Write a C program to check whether a number is Positive, Negative or Zero
    float number;
    printf("Enter a number: ");
    scanf("%f", &number);
    if (number > 0) 
	{
        printf("%.2f is a positive number.\n", number);
    } 
	else 
	{
		if (number < 0) 
		{
  	      printf("%.2f is a negative number.\n", number);
  		} 
		else 
		{
   	     printf("The number is zero.\n");
   		}
	}
    return 0;
}

