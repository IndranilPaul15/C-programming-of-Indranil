#include<stdio.h>
int main()
{
	/*Trapezium
	given the parallel sides are s1&s2 and height is h*/
	float s1=5 ,s2=10 ,h=15 ,R ,pi=3.1416 ,Area;
	Area = 0.5*(s1+s2)*h;
	R= Area/(pi*R);
	printf("Area = %f cm^2",Area);
	printf("\nRadius of the circle = %f cm",Area);
	return 0;	
}
