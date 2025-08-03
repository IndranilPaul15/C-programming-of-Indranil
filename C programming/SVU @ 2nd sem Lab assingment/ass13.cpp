#include<stdio.h>
int main()
{
	// Write a C program to convert temperature from Fahrenheit to Celsius. 
	float c , f;
	printf("Please enter the Fahrenheit value := ");
	scanf("%f",&f);
	c=(f-32)*0.5556;
	printf("->is equal to %.2f Centigrade \nThank you",c);
	return 0;
}
