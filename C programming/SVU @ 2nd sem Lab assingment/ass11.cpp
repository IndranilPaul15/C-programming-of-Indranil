#include<stdio.h>
int main()
{
	// Write a C program to calculate the Area and Perimeter of a Triangle. 
	//Here base=b,height=h ,a,b,c are sides 
	float a, b , c , h , area , perimeter ; 
	printf(" \nPlease enter the value of a , b , c & height respectively to calculate the Area and Perimeter of a Triangle= \n ");
	scanf("%f %f %f %f",&a ,&b ,&c ,&h);   
	area=0.5*b*h , perimeter=a+b+c;     
	printf("\nArea of triangle=%f unit^2\nPerimeter of triangle=%f unit", area , perimeter);
	return 0;
}
