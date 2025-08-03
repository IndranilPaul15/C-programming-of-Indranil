#include<stdio.h>
int main()
{
	/*TRIANGLE
	Here base=b,height=h ,a,b,c are sides */
	float a, b , c , h , area , perimeter ; 
	printf(" \nPlease enter the value of a , b , c & h respectively= \n ");
	scanf("%f %f %f %f",&a ,&b ,&c ,&h);   
	area=0.5*b*h , perimeter=a+b+c;     
	printf("\nArea of triangle=%f cm^2\nPerimeter of triangle=%f cm", area , perimeter);
	return 0;
}
