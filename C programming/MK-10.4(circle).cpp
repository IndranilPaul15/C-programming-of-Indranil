#include<stdio.h>
int main()
{
	//CIRCLE
	float R=9, pi= 3.141592653589793238 ,area,perimeter;
	perimeter=2*pi*R;
	area=pi*R*R;
	printf("Area of Circle=%f cm^2",area);
	printf("\n");
	printf("Perimeter of Circle=%f cm",perimeter);
	return 0;
}
