#include<stdio.h>
int main()
{
	//Write a C program to calculate the Area and Perimeter of a Square
	float a, area , perimeter ;
	printf("Please enter the value of each side of the Square the Area and Perimeter \n:");
	scanf("%f",&a);
	area=a*a , perimeter=4*a;
	printf("AREA = %.2f unit^2  \nPERIMETER = %.2f unit \nThank you",area,perimeter);
	return 0;
}
