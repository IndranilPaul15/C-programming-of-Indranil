#include <stdio.h>
int main()
{
	/*Write a C program to input basic salary of an employee and calculate gross salary
	according to given conditions.
	Basic Salary <= 10000 : HRA = 20%, DA = 80%
	Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
	Basic Salary >= 20001 : HRA = 30%, DA = 95% */
	float basic_salary, gross_salary, hra, da;
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);
    if (basic_salary<=10000)
	{
        hra = basic_salary * 0.2;
        da = basic_salary * 0.8;
    }
    else
	{
	 	if (basic_salary>10000&&basic_salary<=20000)
		{
        	hra = basic_salary * 0.25;
			da = basic_salary * 0.9;
   		}
   		else
		{
        	hra = basic_salary * 0.3;
        	da = basic_salary * 0.95;
        }
    }
    gross_salary = basic_salary + hra + da;
    printf("Gross salary = %.2f Rupees", gross_salary);
    return 0;
}
