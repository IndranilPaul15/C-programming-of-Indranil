#include <stdio.h>
int main()
{
	//Write a C program to convert the marks into Grades using Nested if else.
    int marks;
    char grade;
    printf("Enter the mark obtained by the student (out of 100): ");
    scanf("%d", &marks);
    if (marks >= 90&&marks <=100) 
	{
        grade = 'A';
    } 
	else 
	{
		if (marks >= 80&&marks <=89) 
		{
   	     grade = 'B';
   		} 
		else 
		{
			if (marks >= 70&&marks <=79) 
			{
   	   		 grade = 'C';
			} 
			else 
			{
				if (marks >= 60&&marks <=69) 
				{
   	   			  grade = 'D';
   				} 
				else 
				{
					if (marks >= 50&&marks <=59) 
					{
       				  grade = 'E';
   					} 
					else 
					{
    				 grade = 'F';
    				}
				}
			}
		}
	}
    printf("\nThe grade obtained by the student is: %c\n", grade);
    return 0;
}

